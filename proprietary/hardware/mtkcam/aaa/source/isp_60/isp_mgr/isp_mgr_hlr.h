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
#ifndef _ISP_MGR_HLR_H_
#define _ISP_MGR_HLR_H_


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  HLR
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#define INIT_REG_INFO_ADDR_P2_MISC_MULTI(index,reg, name)\
    REG_INFO_ADDR_MULTI(index, reg) = REG_ADDR_P2(name)

#define INIT_HLR_ADDR(reg)\
    INIT_REG_INFO_ADDR_P1_MULTI(EHLR_R1 ,reg, HLR_R1_HLR_);\
    INIT_REG_INFO_ADDR_P2_MULTI(EHLR_D1 ,reg, HLR_D1A_HLR_)

#define INIT_HLR_CTL_ADDR(reg)\
    INIT_REG_INFO_ADDR_P1_MULTI(EHLR_R1 ,reg, CAMCTL_R1_CAMCTL_HLR_);\
    INIT_REG_INFO_ADDR_P2_MISC_MULTI(EHLR_D1 ,reg ,DIPCTL_D1A_DIPCTL_MISC_SEL)

typedef class ISP_MGR_HLR : public ISP_MGR_BASE_T
{
    typedef ISP_MGR_HLR  MyType;

public:

    enum
    {
        EHLR_R1, //Pass1 Normal
        EHLR_D1, //Pass2
        ESubModule_NUM
    };

private:

    MBOOL m_bEnable[ESubModule_NUM];
    //MBOOL m_bCCTEnable;

    enum
    {
        ERegInfo_EST_Y0,
        ERegInfo_EST_Y1,
        ERegInfo_EST_Y2,
        ERegInfo_EST_Y3,
        ERegInfo_EST_X0,
        ERegInfo_EST_X1,
        ERegInfo_EST_X2,
        ERegInfo_EST_X3,
        ERegInfo_EST_S0,
        ERegInfo_EST_S1,
        ERegInfo_EST_S2,
        ERegInfo_LMG,
        ERegInfo_PRT,
        ERegInfo_CLP,
        ERegInfo_EFCT,
        ERegInfo_CTL,
        ERegInfo_CTL2,
        ERegInfo_LKMSB,
        ERegInfo_NUM
    };

    RegInfo_T m_rIspRegInfo[ESubModule_NUM][ERegInfo_NUM];

public:
    ISP_MGR_HLR(MUINT32 const eSensorDev)
        : ISP_MGR_BASE_T(m_rIspRegInfo, ERegInfo_NUM, eSensorDev, ESubModule_NUM)
        //, m_bCCTEnable(MTRUE)
    {
        for(int i=0; i<ESubModule_NUM; i++){
            m_bEnable[i]    = MFALSE;
            ::memset(m_rIspRegInfo[i], 0, sizeof(RegInfo_T)*ERegInfo_NUM);
        }
        // register info addr init
        INIT_HLR_ADDR(EST_Y0);
        INIT_HLR_ADDR(EST_Y1);
        INIT_HLR_ADDR(EST_Y2);
        INIT_HLR_ADDR(EST_Y3);
        INIT_HLR_ADDR(EST_X0);
        INIT_HLR_ADDR(EST_X1);
        INIT_HLR_ADDR(EST_X2);
        INIT_HLR_ADDR(EST_X3);
        INIT_HLR_ADDR(EST_S0);
        INIT_HLR_ADDR(EST_S1);
        INIT_HLR_ADDR(EST_S2);
        INIT_HLR_ADDR(LMG);
        INIT_HLR_ADDR(PRT);
        INIT_HLR_ADDR(CLP);
        INIT_HLR_ADDR(EFCT);
        INIT_HLR_ADDR(CTL);
        INIT_HLR_ADDR(CTL2);
        INIT_HLR_CTL_ADDR(LKMSB);
#if 0
        //default setting
        for(int i=0; i<ESubModule_NUM; i++){
            reinterpret_cast<REG_HLR_R1_HLR_EFCT*>(REG_INFO_VALUE_PTR_MULTI(i, EFCT))->Bits.HLR_EFCT_ON = 0;
            reinterpret_cast<REG_HLR_R1_HLR_EFCT*>(REG_INFO_VALUE_PTR_MULTI(i, EFCT))->Bits.HLR_OFF_CLP_VAL = 4095;
        }
#endif

    }

    virtual ~ISP_MGR_HLR() {}

public:
    static MyType&  getInstance(MUINT32 const eSensorDev);

public: // Interfaces.

    template <class ISP_xxx_T>
    MyType& put(MUINT8 SubModuleIndex, ISP_xxx_T const& rParam);

    template <class ISP_xxx_T>
    MyType& get(MUINT8 SubModuleIndex, ISP_xxx_T & rParam);

    MBOOL
    isEnable(MUINT8 SubModuleIndex)
    {
        if(SubModuleIndex >= ESubModule_NUM){
            CAM_LOGE("Error Index: %d", SubModuleIndex);
            return MFALSE;
        }
        return m_bEnable[SubModuleIndex];
    }

    MVOID
    setEnable(MUINT8 SubModuleIndex, MBOOL bEnable)
    {
        m_bEnable[SubModuleIndex] = bEnable;
    }
#if 0
    MBOOL
    isCCTEnable(MUINT8 SubModuleIndex)
    {
        return m_bCCTEnable[SubModuleIndex];
    }

    MVOID
    setCCTEnable(MUINT8 SubModuleIndex, MBOOL bEnable)
    {
        m_bCCTEnable[SubModuleIndex] = bEnable;
    }
#endif
    MBOOL apply_P1(MUINT8 SubModuleIndex, const RAWIspCamInfo& rRawIspCamInfo, TuningMgr& rTuning, MINT32 i4SubsampleIdex=0);

    MBOOL apply_P2(MUINT8 SubModuleIndex, const RAWIspCamInfo& rRawIspCamInfo, dip_x_reg_t* pReg);

} ISP_MGR_HLR_T;



#endif



