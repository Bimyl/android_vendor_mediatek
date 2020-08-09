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

/*
**
** Copyright 2008, The Android Open Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/
#ifndef _AE_FLOW_CUSTOM_H_
#define _AE_FLOW_CUSTOM_H_

#include "camera_custom_types.h"
#include "camera_custom_ae.h"

#define MIN_EXP_VALUE 250             // 1/4000s
#define MAX_EXP_VALUE 5000000         // 5s
#define MIN_ISP_GAIN  1024            // 1x = 1024
#define MAX_ISP_VALUE 8192            // 8x = 8192

#define MAX_MANUAL_EXP_VALUE 100000          // 100 ms
#define MIN_MANUAL_ISO_VALUE 100             // ISO100
#define MAX_MANUAL_ISO_VALUE 3200            // ISO3200

// for Super Night Shot
struct AE_EXP_SETTING_INPUT_T {
    MINT32  bIs60Hz;                // 0 means 50Hz, 1 means 60Hz    
    MINT32  i4SensorId;	
    MUINT32 u4AlgoExposureTime_us;  // Exposure value by AE algo
    MUINT32 u4AlgoSensorGain_x1024;
    MUINT32 u4AlgoISPGain_x1024;
    MUINT32 u4AlgoISO;	
    MUINT32 u41xGainISOvalue;       // 1x gain iso value
    MUINT32 u4MinShutter;           // Min Shutter on current P-line table    
    MUINT32 u4MaxShutter;           // Max Shutter on current P-line table
    MUINT32 u4MinSensorGain;        // Min sensor gain on current P-line table 
    MUINT32 u4MaxSensorGain;        // Max sensor gain on current P-line table 
    MUINT32 u4MinISPGain;           // Min ISP gain on current P-line table 
    MUINT32 u4MaxISPGain;           // Max ISP gain on current P-line table 
};

// for Manual exposure
struct AE_EXP_MANUAL_INPUT_T {
    MUINT32 u4TargetExposureTime;   // us sec
    MUINT32 u4TargetSensitivity;    //ISO value
    MUINT32 u4OriExposureTime;
    MUINT32 u4OriSensorGain;
    MUINT32 u4OriISPGain;
    MUINT32 u41xGainISOvalue;       // 1x gain iso value
    MUINT32 u4MinSensorGain;        // Min sensor gain
    MUINT32 u4MaxSensorGain;        // Max sensor gain
    MUINT32 u4MaxShutter;          // Max Shutter on current P-line table
    MUINT32 u4MaxISPGain;              // Max ISO on current P-line table
};

struct AE_EXP_SETTING_OUTPUT_T {
    MBOOL  bEquivalent;             // 0 means output exposure setting equal input exposure setting, 1 means not equivalent
    MUINT32 u4NewExposureTime_us;
    MUINT32 u4NewSensorGain_x1024;
    MUINT32 u4NewISPGain_x1024;
    MINT32 i4DeltaIndex;            // when bEquivalent is true, AE need update to AE algo the exposure setting index offset
};

MBOOL calculateNewExposureSetting(AE_Cust_Param_T *a_AeCustParam, AE_EXP_SETTING_INPUT_T *a_strExpInput, AE_EXP_SETTING_OUTPUT_T *a_strExpOutput);
MBOOL calculateExpSettingByShutterISOpriority(AE_EXP_MANUAL_INPUT_T *a_strExpInput, AE_EXP_SETTING_OUTPUT_T *a_strExpOutput);

#endif