/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/********************************************************************************************
 *     LEGAL DISCLAIMER
 *
 *     (Header of MediaTek Software/Firmware Release or Documentation)
 *
 *     BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 *     THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED
 *     FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS
 *     ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR IMPLIED,
 *     INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR
 *     A PARTICULAR PURPOSE OR NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY
 *     WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 *     INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK
 *     ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *     NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S SPECIFICATION
 *     OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *
 *     BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH
 *     RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION,
TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE
 *     FEES OR SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 *     THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE WITH THE LAWS
 *     OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF LAWS PRINCIPLES.
 ************************************************************************************************/
#define LOG_TAG "aao_buf_mgr"

#ifndef ENABLE_MY_LOG
    #define ENABLE_MY_LOG       (1)
#endif

#include <mtkcam/utils/std/Trace.h>
#include <sys/stat.h>
#include <cutils/properties.h>
#include <string.h>

#include <aaa_types.h>
#include <aaa_error_code.h>
#include <mtkcam/utils/std/Log.h>
#include <debug/DebugUtil.h>
#include <mtkcam/drv/IHalSensor.h>

#include "IBufMgr.h"

#include <mtkcam/drv/iopipe/CamIO/IStatisticPipe.h>
#include <mtkcam/drv/iopipe/CamIO/IHalCamIO.h>
#include <private/IopipeUtils.h>

//AAOSeparation
#include <utils/Condition.h>
#include <ae_param.h>
#include <ae_tuning_custom.h>
#include "AAOSeparation.h"

using namespace android;
using namespace NS3Av3;
using namespace NSCam::NSIoPipe;
using namespace NSCam::NSIoPipe::NSCamIOPipe;

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//AAOSeparation
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
struct AAOStatisticBufInfo : public StatisticBufInfo
{
    MUINT32                 m_u4AAOSepAWBsize;
    MUINT32                 m_u4AAOSepAEsize;
    MUINT32                 m_u4AAOSepHistsize;
    MUINT32                 m_u4AAOSepOverCntsize;
    MUINT32                 m_u4AAOSepLSCsize;
    MUINT32                 m_u4AAOSepsize;
    MVOID*                  m_pAAOSepBuf;
    AAO_BUF_CONFIG_T        m_rCfg;
    AAO_BUF_T               m_rBufs;
    virtual MVOID*          getPart(MUINT32 u4ParId) const;
    virtual MUINT32         getPartSize(MUINT32 u4ParId) const;
};

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//AAOSeparation
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
class AAOStatisticBuf
{
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  Data member
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
protected:
    mutable Mutex           m_Lock;
    MBOOL                   m_fgLog;
    MBOOL                   m_fgCmd;
    MBOOL                   m_fgFlush;
    Condition               m_Cond;
    AAOStatisticBufInfo     m_rBufInfo;
    MUINT8                  m_ufgOpt;
    MUINT32                 m_u4width ;
    MUINT32                 m_u4height;
    MUINT32                 m_u4BlocksizeX;
    MUINT32                 m_u4BlocksizeY;
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  Ctor/Dtor.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private:    ////    Disallowed.
    //  Copy constructor is disallowed.
    AAOStatisticBuf(AAOStatisticBuf const&);
    //  Copy-assignment operator is disallowed.
    AAOStatisticBuf& operator=(AAOStatisticBuf const&);

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  Operations.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
public:
    AAOStatisticBuf();
    virtual ~AAOStatisticBuf();

    virtual MBOOL allocateBuf(MUINT8 const ufgStatOpt, MBOOL bEnablePixelBaseHist,
                            MUINT32 const u4AAWidth,MUINT32 const u4AAHight, MUINT32 const i4WindowNumX, MUINT32 const i4WindowNumY);
    virtual MBOOL freeBuf();
    virtual MBOOL write(const BufInfo& rBufInfo, const MUINT32 u4FrameCount);
    virtual StatisticBufInfo* read();
    virtual MBOOL flush();
};
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
class AAOBufMgrImp : public AAOBufMgr
{
public:
    virtual MBOOL destroyInstance();
                  AAOBufMgrImp(MINT32 i4SensorDev, MINT32 i4SensorIdx);
    virtual      ~AAOBufMgrImp();

    virtual MBOOL dequeueHwBuf();
    virtual MBOOL enqueueHwBuf();
    virtual StatisticBufInfo* dequeueSwBuf();
    virtual MVOID abortDequeue();
    virtual MINT32 waitDequeue(){return 0;};
    virtual MVOID reset() {};

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  Data member
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private:
    MINT32           const m_i4SensorDev;
    MINT32           const m_i4SensorIdx;
    MBOOL                  m_bDebugEnable;
    IStatisticPipe*        m_pSttPipe;
    MUINT32                m_rBufIndex;  // the index of write buffers.
    PortID                 m_rPort;
    MBOOL                  m_bAbort;
    AAOStatisticBuf        m_rBufInfo[MAX_STATISTIC_BUFFER_CNT];
    MUINT8                 m_ufgStatOpt;
    MUINT32                m_u4WindowNumX;
    MUINT32                m_u4WindowNumY;
    MBOOL                  m_bEnablePixelBaseHist;
    MUINT32                m_u4AAWidth;
    MUINT32                m_u4AAHight;
    MUINT32                m_u4FrameCount;
    INormalPipe*           m_pCamIO;//NSCam::NSIoPipe::NSCamIOPipe::INormalPipe
};

#if (CAM3_3ATESTLVL > CAM3_3AUT)
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
AAOBufMgr*
AAOBufMgr::
createInstance(MINT32 const i4SensorDev, MINT32 const i4SensorIdx)
{
    AAOBufMgrImp* pObj = new AAOBufMgrImp(i4SensorDev,i4SensorIdx);
    return pObj;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MBOOL
AAOBufMgrImp::
destroyInstance()
{
    delete this;
    return MTRUE;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
AAOBufMgrImp::
AAOBufMgrImp(MINT32 i4SensorDev, MINT32 i4SensorIdx)
    : m_i4SensorDev(i4SensorDev)
    , m_i4SensorIdx(i4SensorIdx)
    , m_rPort(PORT_AAO)
    , m_rBufIndex(0)
    , m_bDebugEnable(MFALSE)
    , m_pSttPipe(NULL)
    , m_bAbort(MFALSE)
    , m_ufgStatOpt(0)
    , m_u4WindowNumX(0)
    , m_u4WindowNumY(0)
    , m_bEnablePixelBaseHist(0)
    , m_pCamIO(NULL)
    , m_u4AAWidth(0)
    , m_u4AAHight(0)
    , m_u4FrameCount(0)
{
    const AE_PARAM_T* pAeParam;
    switch (m_i4SensorDev)
    {
        default:
        case ESensorDev_Main:
            pAeParam = &getAEParam<ESensorDev_Main>();
            break;
        case ESensorDev_Sub:
            pAeParam = &getAEParam<ESensorDev_Sub>();
            break;
        case ESensorDev_MainSecond:
            pAeParam = &getAEParam<ESensorDev_MainSecond>();
            break;
        case ESensorDev_SubSecond:
            pAeParam = &getAEParam<ESensorDev_SubSecond>();
            break;
    }

    m_ufgStatOpt = STAT_OPT(
            pAeParam->strAEParasetting.bEnableHDRLSB,
            pAeParam->strAEParasetting.bEnableAEOVERCNTconfig,
            pAeParam->strAEParasetting.bEnableTSFSTATconfig);
    m_u4WindowNumX = pAeParam->strAEParasetting.u4AEWinodwNumX; //rAwbStatParma.i4WindowNumX;
    m_u4WindowNumY = pAeParam->strAEParasetting.u4AEWinodwNumY; //rAwbStatParma.i4WindowNumY;
    m_bEnablePixelBaseHist = pAeParam->strAEParasetting.bEnablePixelBaseHist;

    // NormalIOPipe create instance
    if (m_pCamIO == NULL)
    {
        m_pCamIO = (INormalPipe*)INormalPipeUtils::get()->createDefaultNormalPipe(m_i4SensorIdx, LOG_TAG);
        if (m_pCamIO == NULL)
        {
            CAM_LOGE("Fail to create NormalPipe");
        }
    }

    if (m_pCamIO != NULL)
        m_pCamIO->sendCommand(NSCam::NSIoPipe::NSCamIOPipe::ENPipeCmd_GET_HBIN_INFO,
                            (MINTPTR)&m_u4AAWidth, (MINTPTR)&m_u4AAHight, 0);

    if(m_u4AAWidth <= 0 || m_u4AAHight <= 0)
        CAM_LOGE("AAWidth and AAHight val error");

    for(int i = 0; i < MAX_STATISTIC_BUFFER_CNT; i++)
    {
        CAM_LOGD("[%s]  i = %d \n", __FUNCTION__, i);
        m_rBufInfo[i].allocateBuf(m_ufgStatOpt,m_bEnablePixelBaseHist,m_u4AAWidth,m_u4AAHight,m_u4WindowNumX,m_u4WindowNumY);
    }

    char value[PROPERTY_VALUE_MAX] = {'\0'};
    property_get("vendor.debug.aao_mgr.enable", value, "0");
    m_bDebugEnable = atoi(value);

    m_pSttPipe = IStatisticPipe::createInstance(m_i4SensorIdx, LOG_TAG);
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
AAOBufMgrImp::
~AAOBufMgrImp()
{
    for(int i = 0; i < MAX_STATISTIC_BUFFER_CNT; i++)
    {
        CAM_LOGD("[%s]  i = %d \n", __FUNCTION__, i);
        m_rBufInfo[i].freeBuf();
    }

    if(m_pSttPipe != NULL)
    {
        m_pSttPipe->destroyInstance(LOG_TAG);
        m_pSttPipe = NULL;
    }

    // NormalIOPipe destroy instance
    if (m_pCamIO != NULL)
    {
        m_pCamIO->destroyInstance(LOG_TAG);
        m_pCamIO = NULL;
    }
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MINT32
AAOBufMgrImp::
dequeueHwBuf()
{
    CAM_LOGD_IF(m_bDebugEnable,"[%s] m_i4SensorDev(%d) + \n", __FUNCTION__, m_i4SensorDev);

    char value[PROPERTY_VALUE_MAX] = {'\0'};
    property_get("vendor.aao.dump.enable", value, "0");
    MBOOL bEnable = atoi(value);

    if(m_bAbort)
        return -1;

    if(m_pSttPipe != NULL)
    {
        DebugUtil::getInstance(m_i4SensorDev)->update(LOG_TAG, "dequeueHwBuf", 0);
        // deque HW buffer from driver.
        QBufInfo    rDQBuf;
        CAM_TRACE_BEGIN("AAO STT deque");
        MBOOL ret = m_pSttPipe->deque(m_rPort, rDQBuf);
        CAM_TRACE_END();
        int size = rDQBuf.mvOut.size();
        DebugUtil::getInstance(m_i4SensorDev)->update(LOG_TAG, "dequeueHwBuf", 1);
        if(m_bAbort || (size == 0 && ret == MTRUE)){
            DebugUtil::getInstance(m_i4SensorDev)->update(LOG_TAG, "dequeueHwBuf", -1);
            return -1;
        }

        if(ret == MFALSE)
        {
            CAM_LOGE("[%s] m_pSttPipe deque fail", __FUNCTION__);
            DebugUtil::getInstance(m_i4SensorDev)->update(LOG_TAG, "dequeueHwBuf", -1);
            return MFALSE;
        }
        // get the last HW buffer to SW Buffer.
        int index = m_rBufIndex;
        m_u4FrameCount++;
        BufInfo rLastBuf = rDQBuf.mvOut.at( size-1 );

        // copy the last HW buffer to SW Buffer.

        DebugUtil::getInstance(m_i4SensorDev)->update(LOG_TAG, "dequeueHwBuf", 2);
        CAM_TRACE_BEGIN("AAO STT clone");
        m_rBufInfo[index].write(rLastBuf, m_u4FrameCount);
        CAM_TRACE_END();
        DebugUtil::getInstance(m_i4SensorDev)->update(LOG_TAG, "dequeueHwBuf", 3);

        CAM_LOGD_IF(m_bDebugEnable, "port(%d), index(%d), va[%p]/pa[0x%08x]/#(%d), Size(%d)",
                  m_rPort.index, index, rLastBuf.mVa, rLastBuf.mPa, rLastBuf.mMetaData.mMagicNum_tuning, rLastBuf.mSize);

        // dump aao data for debug
        if (bEnable) {
            char fileName[64];
            static MUINT32 count;
            sprintf(fileName, "/sdcard/aao/aao_%d_%d.raw", rLastBuf.mMetaData.mMagicNum_tuning, count++);

            FILE *fp = fopen(fileName, "w");
            if (NULL == fp)
            {
                CAM_LOGE("fail to open file to save img: %s", fileName);
                MINT32 err = mkdir("/sdcard/aao", S_IRWXU | S_IRWXG | S_IRWXO);
                CAM_LOGD("err = %d", err);
            } else
            {
                CAM_LOGD_IF(m_bDebugEnable,"%s\n", fileName);
                fwrite(reinterpret_cast<void *>(rLastBuf.mVa), 1, rLastBuf.mSize, fp);
                fclose(fp);
            }
        }

        if(m_bAbort)
            return -1;
        // enque HW buffer back driver
        CAM_LOGD_IF(m_bDebugEnable, "enque Hw buffer back driver.\n");
        CAM_TRACE_BEGIN("AAO STT enque");
        m_pSttPipe->enque(rDQBuf);
        CAM_TRACE_END();
        DebugUtil::getInstance(m_i4SensorDev)->update(LOG_TAG, "dequeueHwBuf", -1);
    }

    return MTRUE;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MBOOL
AAOBufMgrImp::
enqueueHwBuf()
{
    return MTRUE;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
StatisticBufInfo*
AAOBufMgrImp::
dequeueSwBuf()
{
    CAM_LOGD_IF(m_bDebugEnable,"[%s] index(%d) +\n", __FUNCTION__, m_rBufIndex);
    if(m_bAbort)
        return NULL;
    DebugUtil::getInstance(m_i4SensorDev)->update(LOG_TAG, "dequeueSwBuf", 0);
    int r_index = m_rBufIndex;
    StatisticBufInfo* pBuf = m_rBufInfo[r_index].read();
    DebugUtil::getInstance(m_i4SensorDev)->update(LOG_TAG, "dequeueSwBuf", 1);
    // switch buffer
    m_rBufIndex = ( r_index + 1 ) % MAX_STATISTIC_BUFFER_CNT;
    CAM_LOGD_IF(m_bDebugEnable,"[%s] m_i4SensorDev(%d), port(%d), r_index(%d), w_index(%d)\n", __FUNCTION__, m_i4SensorDev, m_rPort, r_index, m_rBufIndex);
    DebugUtil::getInstance(m_i4SensorDev)->update(LOG_TAG, "dequeueSwBuf", -1);
    return pBuf;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID
AAOBufMgrImp::
abortDequeue()
{
    CAM_LOGD("[%s] m_rBufIndex(%d) +\n", __FUNCTION__, m_rBufIndex);
    m_bAbort = MTRUE;
    m_u4FrameCount = 0;
    if(m_pSttPipe != NULL)
        m_pSttPipe->abortDma(m_rPort,LOG_TAG);
    CAM_LOGD("[%s] abortDma done\n", __FUNCTION__);
    for(int i = 0; i < MAX_STATISTIC_BUFFER_CNT; i++)
        m_rBufInfo[i].flush();
    CAM_LOGD("[%s] m_rBufIndex(%d) -\n", __FUNCTION__, m_rBufIndex);
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//AAOSeparation
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MVOID*
AAOStatisticBufInfo::
getPart(MUINT32 u4ParId) const
{
    switch (u4ParId)
    {
        case AAOSepAWBBuf:
            return (m_rBufs.m_pAAOSepAWBBuf);
            break;
        case AAOSepAEBuf:
            return (m_rBufs.m_pAAOSepAEBuf);
            break;
        case AAOSepHistBuf:
            return (m_rBufs.m_pAAOSepHistBuf);
            break;
        case AAOSepOverCntBuf:
            return (m_rBufs.m_pAAOSepOverCntBuf);
            break;
        case AAOSepLSCBuf:
            return (m_rBufs.m_pAAOSepLSCBuf);
            break;
        case AAOSepBuf:
            return (m_pAAOSepBuf);
            break;
        default:
            return NULL;
            break;
    }
}

MUINT32
AAOStatisticBufInfo::
getPartSize(MUINT32 u4ParId) const
{
    switch (u4ParId)
    {
        case AAOSepAWBBuf:
            return m_u4AAOSepAWBsize;
            break;
        case AAOSepAEBuf:
            return m_u4AAOSepAEsize;
            break;
        case AAOSepHistBuf:
            return m_u4AAOSepHistsize;
            break;
        case AAOSepOverCntBuf:
            return m_u4AAOSepOverCntsize;
            break;
        case AAOSepLSCBuf:
            return m_u4AAOSepLSCsize;
            break;
        case AAOSepBuf:
            return m_u4AAOSepsize;
            break;
        default:
            return MFALSE;
            break;
    }
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  Function.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
AAOStatisticBuf::
AAOStatisticBuf()
    : m_fgLog(MFALSE)
    , m_fgCmd(MFALSE)
    , m_fgFlush(MFALSE)
    , m_ufgOpt(0)
    , m_u4width(0)
    , m_u4height(0)
    , m_u4BlocksizeX(0)
    , m_u4BlocksizeY(0)
{
    memset(&m_rBufInfo.m_rBufs, 0, sizeof(AAO_BUF_T));
    memset(&m_rBufInfo.m_rCfg, 0, sizeof(AAO_BUF_CONFIG_T));
    m_rBufInfo.mVa = NULL;
    m_rBufInfo.mSize = 0;
    m_rBufInfo.m_pAAOSepBuf = NULL;
    m_rBufInfo.m_u4AAOSepAEsize = 0;
    m_rBufInfo.m_u4AAOSepAWBsize = 0;
    m_rBufInfo.m_u4AAOSepHistsize = 0;
    m_rBufInfo.m_u4AAOSepLSCsize = 0;
    m_rBufInfo.m_u4AAOSepOverCntsize = 0;
    m_rBufInfo.m_u4AAOSepsize = 0;

}

AAOStatisticBuf::
~AAOStatisticBuf()
{
    freeBuf();
}

MBOOL
AAOStatisticBuf::
allocateBuf(MUINT8 const ufgStatOpt,MBOOL bEnablePixelBaseHist,
            MUINT32 const u4AAWidth, MUINT32 const u4AAHight, MUINT32 const u4WindowNumX, MUINT32 const u4WindowNumY)
{
    Mutex::Autolock lock(m_Lock);

    m_fgLog = property_get_int32("vendor.debug.statistic_buf.enable", 0);

    m_ufgOpt = ufgStatOpt;
    m_rBufInfo.m_rCfg.m_i4BlkNumX = u4WindowNumX;//m_rTsfEnvInfo.ImgWidth;(120)
    m_rBufInfo.m_rCfg.m_i4BlkNumY = u4WindowNumY;//m_rTsfEnvInfo.ImgHeight;(90)
    m_rBufInfo.m_rCfg.m_bEnableHDRYConfig = (m_ufgOpt & 0x4);
    m_rBufInfo.m_rCfg.m_bEnableOverCntConfig = (m_ufgOpt & 0x2);
    m_rBufInfo.m_rCfg.m_bEnableTSFConfig = (m_ufgOpt & 0x1);
    m_rBufInfo.m_rCfg.m_bDisablePixelHistConfig = ((bEnablePixelBaseHist==1)?MFALSE:MTRUE);
    m_u4width = u4AAWidth;
    m_u4height = u4AAHight;
    m_u4BlocksizeX = ((m_u4width / m_rBufInfo.m_rCfg.m_i4BlkNumX)/2)*2;
    m_u4BlocksizeY = ((m_u4height / m_rBufInfo.m_rCfg.m_i4BlkNumY)/2)*2;
    m_rBufInfo.m_rCfg.m_u4AEOverExpCntShift = (((m_u4BlocksizeX/4)*(m_u4BlocksizeY/2)>255)?MTRUE:MFALSE);
    m_rBufInfo.m_rCfg.m_i4AwbLineSize = m_rBufInfo.m_rCfg.m_i4BlkNumX * 4;
    m_rBufInfo.m_rCfg.m_i4AeSize      = ((m_rBufInfo.m_rCfg.m_i4BlkNumX + 3)/4) * 4;                           // in byte
    m_rBufInfo.m_rCfg.m_i4HdrSize     = (m_ufgOpt & 0x4) ? ((m_rBufInfo.m_rCfg.m_i4BlkNumX*4 + 31)/32)*4 : 0;  // in byte
    m_rBufInfo.m_rCfg.m_i4AeOverSize  = (m_ufgOpt & 0x2) ? ((m_rBufInfo.m_rCfg.m_i4BlkNumX*8 + 31)/32)*4 : 0;  // in byte
    m_rBufInfo.m_rCfg.m_i4TsfSize     = (m_ufgOpt & 0x1) ? ((m_rBufInfo.m_rCfg.m_i4BlkNumX*16 + 31)/32)*4 : 0; // in byte
    m_rBufInfo.m_rCfg.m_i4LineSize    = m_rBufInfo.m_rCfg.m_i4AwbLineSize + m_rBufInfo.m_rCfg.m_i4AeSize + m_rBufInfo.m_rCfg.m_i4HdrSize + m_rBufInfo.m_rCfg.m_i4AeOverSize + m_rBufInfo.m_rCfg.m_i4TsfSize;//lineByte
    m_rBufInfo.m_rCfg.m_i4SkipSize    = m_rBufInfo.m_rCfg.m_i4AwbLineSize + m_rBufInfo.m_rCfg.m_i4AeSize + m_rBufInfo.m_rCfg.m_i4HdrSize + m_rBufInfo.m_rCfg.m_i4AeOverSize;

    m_rBufInfo.m_u4AAOSepAWBsize = 4 * u4WindowNumX * u4WindowNumY;
    m_rBufInfo.m_u4AAOSepAEsize = 2 * u4WindowNumX*u4WindowNumY;
    m_rBufInfo.m_u4AAOSepHistsize = 4 * 4*AAO_STT_HIST_BIN_NUM;
    m_rBufInfo.m_u4AAOSepOverCntsize = 2 * u4WindowNumX*u4WindowNumY;
    m_rBufInfo.m_u4AAOSepLSCsize = 4 * 2 * u4WindowNumX*u4WindowNumY;
    m_rBufInfo.m_u4AAOSepsize = m_rBufInfo.m_u4AAOSepAWBsize+m_rBufInfo.m_u4AAOSepAEsize+m_rBufInfo.m_u4AAOSepHistsize
                                +m_rBufInfo.m_u4AAOSepOverCntsize+m_rBufInfo.m_u4AAOSepLSCsize;

    m_rBufInfo.m_pAAOSepBuf = (MVOID*)malloc(m_rBufInfo.m_u4AAOSepsize);
    m_rBufInfo.m_rBufs.m_pAAOSepAWBBuf = m_rBufInfo.m_pAAOSepBuf;
    m_rBufInfo.m_rBufs.m_pAAOSepAEBuf = (MUINT8 *)m_rBufInfo.m_pAAOSepBuf + m_rBufInfo.m_u4AAOSepAWBsize;
    m_rBufInfo.m_rBufs.m_pAAOSepHistBuf = (MUINT8 *)m_rBufInfo.m_pAAOSepBuf + m_rBufInfo.m_u4AAOSepAWBsize + m_rBufInfo.m_u4AAOSepAEsize;
    m_rBufInfo.m_rBufs.m_pAAOSepOverCntBuf = (MUINT8 *)m_rBufInfo.m_pAAOSepBuf + m_rBufInfo.m_u4AAOSepAWBsize+ m_rBufInfo.m_u4AAOSepAEsize+ m_rBufInfo.m_u4AAOSepHistsize;
    m_rBufInfo.m_rBufs.m_pAAOSepLSCBuf = (MUINT8 *)m_rBufInfo.m_pAAOSepBuf + m_rBufInfo.m_u4AAOSepAWBsize+ m_rBufInfo.m_u4AAOSepAEsize+ m_rBufInfo.m_u4AAOSepHistsize+ m_rBufInfo.m_u4AAOSepOverCntsize;

    if(m_rBufInfo.m_pAAOSepBuf != NULL && m_rBufInfo.m_u4AAOSepsize != 0){
        CAM_LOGD_IF(m_fgLog, "[%s] m_rBufInfo->m_pAAOSepBuf = 0x%x, \n", __FUNCTION__, m_rBufInfo.m_pAAOSepBuf);
        CAM_LOGD_IF(m_fgLog, "[%s] m_rBufInfo->m_u4AAOSepsize = 0x%x, \n", __FUNCTION__, m_rBufInfo.m_u4AAOSepsize);
    }

    if(m_rBufInfo.m_pAAOSepBuf == NULL)
    {
        CAM_LOGE("m_rBufInfo.m_pAAOSepBuf == NULL");
        return MFALSE;
    }

    return MTRUE;
}

MBOOL
AAOStatisticBuf::
freeBuf()
{
    Mutex::Autolock lock(m_Lock);
    if(m_rBufInfo.m_pAAOSepBuf != NULL && m_rBufInfo.m_u4AAOSepsize != 0){
        CAM_LOGD_IF(m_fgLog, "[%s] m_rBufInfo->m_pAAOSepBuf = 0x%x, \n", __FUNCTION__, m_rBufInfo.m_pAAOSepBuf);
        free(m_rBufInfo.m_pAAOSepBuf);
    }

    memset(&m_rBufInfo.m_rBufs, 0, sizeof(AAO_BUF_T));
    memset(&m_rBufInfo.m_rCfg, 0, sizeof(AAO_BUF_CONFIG_T));
    m_rBufInfo.m_pAAOSepBuf = NULL;
    m_rBufInfo.m_u4AAOSepAEsize = 0;
    m_rBufInfo.m_u4AAOSepAWBsize = 0;
    m_rBufInfo.m_u4AAOSepHistsize = 0;
    m_rBufInfo.m_u4AAOSepLSCsize = 0;
    m_rBufInfo.m_u4AAOSepOverCntsize = 0;
    m_rBufInfo.m_u4AAOSepsize = 0;

    return MTRUE;
}

MBOOL
AAOStatisticBuf::
write(const BufInfo& rBufInfo, const MUINT32 u4FrameCount)
{
    Mutex::Autolock lock(m_Lock);

    if(m_rBufInfo.m_pAAOSepBuf == NULL || m_rBufInfo.m_u4AAOSepsize ==0){
        CAM_LOGE("m_rBufInfo.m_pAAOSepBuf == NULL");
        CAM_LOGE("m_rBufInfo.m_u4AAOSepsize == 0");
        return MFALSE;
    }

    CAM_LOGD_IF(m_fgLog, "[%s] + m_fgCmd(%d) Magic(%d)\n", __FUNCTION__, m_fgCmd, rBufInfo.mMetaData.mMagicNum_tuning);

    // copy buffer member
    m_rBufInfo.mMagicNumber = rBufInfo.mMetaData.mMagicNum_tuning;
    m_rBufInfo.mSize = rBufInfo.mSize;
    m_rBufInfo.mStride = rBufInfo.mStride;
    m_rBufInfo.mFrameCount = u4FrameCount;

    MVOID* AAOSrc = reinterpret_cast<MVOID *>(rBufInfo.mVa);

    if(aaoSeparation(AAOSrc, m_rBufInfo.m_rCfg, m_rBufInfo.m_rBufs) != MTRUE)
        CAM_LOGE("aaoSeparation fail!");
    else
        CAM_LOGD_IF(m_fgLog,"[%s] aaoSeparation success!", __FUNCTION__);

    m_fgCmd = MTRUE;
    // broadcast for writing buffer done.
    m_Cond.broadcast();
    CAM_LOGD_IF(m_fgLog, "[%s] - m_fgCmd(%d) Magic(%d)\n", __FUNCTION__, m_fgCmd, rBufInfo.mMetaData.mMagicNum_tuning);
    return MTRUE;
}

StatisticBufInfo*
AAOStatisticBuf::
read()
{
    Mutex::Autolock lock(m_Lock);

    if(m_rBufInfo.m_pAAOSepBuf == NULL){
        CAM_LOGE("m_rBufInfo.m_pAAOSepBuf == NULL");
        return NULL;
    }

    if(m_fgFlush)
        return NULL;

    CAM_LOGD_IF(m_fgLog, "[%s] + m_fgCmd(%d)", __FUNCTION__, m_fgCmd);
    // wait for writing buffer done.
    if(!m_fgCmd)
    {
        CAM_LOGD_IF(m_fgLog, "[%s] wait\n", __FUNCTION__);
        m_Cond.wait(m_Lock);
    }
    m_fgCmd = MFALSE;
    CAM_LOGD_IF(m_fgLog, "[%s] - m_fgCmd(%d) Magic(%d)\n", __FUNCTION__, m_fgCmd, m_rBufInfo.mMagicNumber);
    if(m_fgFlush)
    {
        return NULL;
    }
    else
        return &m_rBufInfo;
}

MBOOL
AAOStatisticBuf::
flush()
{
    Mutex::Autolock lock(m_Lock);
    CAM_LOGD_IF(m_fgLog, "[%s] + m_fgCmd(%d)\n", __FUNCTION__, m_fgCmd);
    m_fgFlush = MTRUE;
    if(!m_fgCmd)
        m_Cond.broadcast();
    CAM_LOGD_IF(m_fgLog, "[%s] -\n", __FUNCTION__);
    return MTRUE;
}

#endif