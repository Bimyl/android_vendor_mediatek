/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2018. All rights reserved.
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
 *     TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE
 *     FEES OR SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 *     THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE WITH THE LAWS
 *     OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF LAWS PRINCIPLES.
 ************************************************************************************************/
#ifndef _FLASH_CAPTURE_H
#define _FLASH_CAPTURE_H

#include "camera_custom_nvram.h"

extern "C"
{
    extern const ISP_NVRAM_MULTI_CCM_STRUCT s5k2lqsxmipiraw_CCM_0030;
    extern const ISP_NVRAM_MULTI_CCM_STRUCT s5k2lqsxmipiraw_CCM_0031;
    extern const ISP_NVRAM_MULTI_CCM_STRUCT s5k2lqsxmipiraw_CCM_0032;
    extern const ISP_NVRAM_MULTI_CCM_STRUCT s5k2lqsxmipiraw_CCM_0033;
    extern const ISP_NVRAM_MULTI_CCM_STRUCT s5k2lqsxmipiraw_CCM_0034;
    extern const ISP_NVRAM_MULTI_CCM_STRUCT s5k2lqsxmipiraw_CCM_0035;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0300;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0301;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0302;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0303;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0304;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0305;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0306;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0307;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0308;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0309;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0310;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0311;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0312;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0313;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0314;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0315;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0316;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0317;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0318;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0319;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0320;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0321;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0322;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0323;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0324;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0325;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0326;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0327;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0328;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0329;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0330;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0331;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0332;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0333;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0334;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0335;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0336;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0337;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0338;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0339;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0340;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0341;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0342;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0343;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0344;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0345;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0346;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0347;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0348;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0349;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0350;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0351;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0352;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0353;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0354;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0355;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0356;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0357;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0358;
    extern const ISP_NVRAM_SCOLOR_PARAM_T s5k2lqsxmipiraw_COLOR_0359;
    extern const ISP_NVRAM_COLOR_PARAM_T s5k2lqsxmipiraw_COLOR_PARAM_0005;
    extern const ISP_NVRAM_LCE_TUNING_PARAM_T s5k2lqsxmipiraw_LCE_0009;
    extern const ISP_NVRAM_GMA_STRUCT_T s5k2lqsxmipiraw_GMA_0009;
    extern const ISP_NVRAM_DCE_TUNING_PARAM_T s5k2lqsxmipiraw_DCE_0009;
    extern const FEATURE_NVRAM_CA_LTM_T s5k2lqsxmipiraw_CA_LTM_0013;
    extern const ISP_NVRAM_ANR_LUT_T s5k2lqsxmipiraw_NBC_TBL_0006;
    extern const ISP_NVRAM_ANR_LUT_T s5k2lqsxmipiraw_NBC_TBL_0007;
    extern const ISP_NVRAM_ANR_LUT_T s5k2lqsxmipiraw_NBC_TBL_0008;
    extern const ISP_NVRAM_ANR_LUT_T s5k2lqsxmipiraw_NBC_TBL_0009;
    extern const ISP_NVRAM_ANR_LUT_T s5k2lqsxmipiraw_NBC_TBL_0010;
    extern const ISP_NVRAM_ANR_LUT_T s5k2lqsxmipiraw_NBC_TBL_0011;
    extern const ISP_NVRAM_FD_ANR_T s5k2lqsxmipiraw_FD_ANR_0006;
    extern const ISP_NVRAM_FD_ANR_T s5k2lqsxmipiraw_FD_ANR_0007;
    extern const ISP_NVRAM_FD_ANR_T s5k2lqsxmipiraw_FD_ANR_0008;
    extern const ISP_NVRAM_FD_ANR_T s5k2lqsxmipiraw_FD_ANR_0009;
    extern const ISP_NVRAM_FD_ANR_T s5k2lqsxmipiraw_FD_ANR_0010;
    extern const ISP_NVRAM_FD_ANR_T s5k2lqsxmipiraw_FD_ANR_0011;

}
#endif