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
#ifndef _DBG_AWB_PARAM_H_
#define _DBG_AWB_PARAM_H_


#define DBG_AWB_PARAM_REVISION 	5341001

// AWB Debug Tag
enum
{
	// AWB
	AWB_TAG_VERSION = 0,    // AWB tag version
	AWB_TAG_MODE,           // AWB tag mode
	AWB_TAG_CAP_SCENE_LV,   // Scene LV
	AWB_TAG_PV_SCENE_LV,    // Scene LV
    AWB_TAG_GAIN_R,         // White balance gain R
    AWB_TAG_GAIN_G,         // White balance gain G
	AWB_TAG_GAIN_B,         // White balance gain B
    AWB_TAG_RAW_PREGAIN2_R, // White balance gain R for AE statistics
    AWB_TAG_RAW_PREGAIN2_G, // White balance gain G for AE statistics
	AWB_TAG_RAW_PREGAIN2_B, // White balance gain B for AE statistics
	AWB_TAG_ALG_GAIN_R,
	AWB_TAG_ALG_GAIN_G,
	AWB_TAG_ALG_GAIN_B,

	// Non-neutral predictor
	AWB_TAG_RELIABLE_MODE,
	AWB_TAG_TEMPO_BUFF_IDX,
	AWB_TAG_NONEUTRAL_PROB,
	AWB_TAG_NONEUTRAL_SPAT_GAIN_R,
	AWB_TAG_NONEUTRAL_SPAT_GAIN_G,
	AWB_TAG_NONEUTRAL_SPAT_GAIN_B,
	AWB_TAG_NONEUTRAL_TEMPO_GAIN_R,
	AWB_TAG_NONEUTRAL_TEMPO_GAIN_G,
	AWB_TAG_NONEUTRAL_TEMPO_GAIN_B,
	AWB_TAG_NONEUTRAL_EQV_GAIN_R,	// Spatial + Temporal Gain
	AWB_TAG_NONEUTRAL_EQV_GAIN_G,	// Spatial + Temporal Gain
	AWB_TAG_NONEUTRAL_EQV_GAIN_B,	// Spatial + Temporal Gain

	// Light source probability
    AWB_TAG_P0_STB, // P0(Strobe)
	AWB_TAG_P0_T,   // P0(Tungsten)
	AWB_TAG_P0_WF,  // P0(Warm Fluorescent)
	AWB_TAG_P0_F,   // P0(Fluorescent)
	AWB_TAG_P0_CWF, // P0(CWF)
	AWB_TAG_P0_D,   // P0(Daylight)
    AWB_TAG_P0_S,   // P0(Shade)
    AWB_TAG_P0_DF,  // P0(Daylight Fluorescent)
	AWB_TAG_P1_STB, // P1(Strobe)
	AWB_TAG_P1_T,   // P1(Tungsten)
	AWB_TAG_P1_WF,  // P1(Warm Fluorescent)
	AWB_TAG_P1_F,   // P1(Fluorescent)
	AWB_TAG_P1_CWF, // P1(CWF)
	AWB_TAG_P1_D,   // P1(Daylight)
    AWB_TAG_P1_S,   // P1(Shade)
    AWB_TAG_P1_DF,  // P1(Daylight Fluorescent)
	AWB_TAG_P2_STB, // P2(Strobe)
	AWB_TAG_P2_T,   // P2(Tungsten)
	AWB_TAG_P2_WF,  // P2(Warm Fluorescent)
	AWB_TAG_P2_F,   // P2(Fluorescent)
	AWB_TAG_P2_CWF, // P2(CWF)
	AWB_TAG_P2_D,   // P2(Daylight)
    AWB_TAG_P2_S,   // P2(Shade)
    AWB_TAG_P2_DF,  // P2(Daylight Fluorescent)
	AWB_TAG_P_STB,  // P(Strobe)
	AWB_TAG_P_T,    // P(Tungsten)
	AWB_TAG_P_WF,   // P(Warm Fluorescent)
	AWB_TAG_P_F,    // P(Fluorescent)
	AWB_TAG_P_CWF,  // P(CWF)
	AWB_TAG_P_D,    // P(Daylight)
    AWB_TAG_P_S,    // P(Shade)
    AWB_TAG_P_DF,   // P(Daylight Fluorescent)

	// WB Information
    // Tungsten 
    AWB_TAG_STA_GAIN_R_T,
    AWB_TAG_STA_GAIN_G_T,
    AWB_TAG_STA_GAIN_B_T,
    AWB_TAG_SPAT_GAIN_R_T,
    AWB_TAG_SPAT_GAIN_G_T,
    AWB_TAG_SPAT_GAIN_B_T,
    AWB_TAG_DAYLIGHT_PROB_T,
    AWB_TAG_EQV_DAYLIGHT_PROB_T,
    AWB_TAG_EQV_GAIN_R_T,
    AWB_TAG_EQV_GAIN_G_T,
    AWB_TAG_EQV_GAIN_B_T,

	// Warm Fluorescent 
    AWB_TAG_STA_GAIN_R_WF,
    AWB_TAG_STA_GAIN_G_WF,
    AWB_TAG_STA_GAIN_B_WF,
    AWB_TAG_SPAT_GAIN_R_WF,
    AWB_TAG_SPAT_GAIN_G_WF,
    AWB_TAG_SPAT_GAIN_B_WF,
    AWB_TAG_DAYLIGHT_PROB_WF,
    AWB_TAG_EQV_DAYLIGHT_PROB_WF,
    AWB_TAG_EQV_GAIN_R_WF,
    AWB_TAG_EQV_GAIN_G_WF,
    AWB_TAG_EQV_GAIN_B_WF,

	// Fluorescent 
	AWB_TAG_STA_GAIN_R_F,
    AWB_TAG_STA_GAIN_G_F,
    AWB_TAG_STA_GAIN_B_F,
    AWB_TAG_SPAT_GAIN_R_F,
    AWB_TAG_SPAT_GAIN_G_F,
    AWB_TAG_SPAT_GAIN_B_F,
    AWB_TAG_NR_THR_F,
    AWB_TAG_HIT_NR_F,
    AWB_TAG_SHADE_XR_F,
    AWB_TAG_SHADE_YR_F,    
    AWB_TAG_SHADE_COUNT_F,
    AWB_TAG_SHADE_RATIO_F,
    AWB_TAG_SHADE_METHOD_F,
    AWB_TAG_SHADE_MODE_F,
    AWB_TAG_RIGHT_DISTRAIO_F,
    AWB_TAG_LEFT_DISTRAIO_F,
    AWB_TAG_UPPER_DISTRAIO_F,
    AWB_TAG_LOWER_DISTRAIO_F,
    AWB_TAG_DAYLIGHT_PROB_F,
    AWB_TAG_EQV_DAYLIGHT_PROB_F,
    AWB_TAG_EQV_GAIN_R_F,
    AWB_TAG_EQV_GAIN_G_F,
    AWB_TAG_EQV_GAIN_B_F,

	// CWF 
	AWB_TAG_STA_GAIN_R_CWF,
    AWB_TAG_STA_GAIN_G_CWF,
    AWB_TAG_STA_GAIN_B_CWF,
    AWB_TAG_SPAT_GAIN_R_CWF,
    AWB_TAG_SPAT_GAIN_G_CWF,
    AWB_TAG_SPAT_GAIN_B_CWF,
    AWB_TAG_NR_THR_CWF,
    AWB_TAG_HIT_NR_CWF,
    AWB_TAG_SHADE_XR_CWF,
    AWB_TAG_SHADE_YR_CWF,
    AWB_TAG_SHADE_COUNT_CWF,
    AWB_TAG_SHADE_RATIO_CWF,
    AWB_TAG_SHADE_METHOD_CWF,
    AWB_TAG_SHADE_MODE_CWF,
    AWB_TAG_RIGHT_DISTRAIO_CWF,
    AWB_TAG_LEFT_DISTRAIO_CWF,
    AWB_TAG_UPPER_DISTRAIO_CWF,
    AWB_TAG_LOWER_DISTRAIO_CWF,
    AWB_TAG_DAYLIGHT_PROB_CWF,
    AWB_TAG_EQV_DAYLIGHT_PROB_CWF,
    AWB_TAG_EQV_GAIN_R_CWF,
    AWB_TAG_EQV_GAIN_G_CWF,
    AWB_TAG_EQV_GAIN_B_CWF,

	// Daylight
	AWB_TAG_STA_GAIN_R_D,
    AWB_TAG_STA_GAIN_G_D,
    AWB_TAG_STA_GAIN_B_D,
    AWB_TAG_SPAT_GAIN_R_D,
    AWB_TAG_SPAT_GAIN_G_D,
    AWB_TAG_SPAT_GAIN_B_D,
    AWB_TAG_NR_THR_D,
    AWB_TAG_HIT_NR_D,
    AWB_TAG_HIT_SUNSET_D,
    AWB_TAG_DAYLIGHT_PROB_D,
    AWB_TAG_EQV_DAYLIGHT_PROB_D,
    AWB_TAG_EQV_GAIN_R_D,
    AWB_TAG_EQV_GAIN_G_D,
    AWB_TAG_EQV_GAIN_B_D,

	// Shade 
	AWB_TAG_STA_GAIN_R_S,
    AWB_TAG_STA_GAIN_G_S,
    AWB_TAG_STA_GAIN_B_S,
    AWB_TAG_SPAT_GAIN_R_S,
    AWB_TAG_SPAT_GAIN_G_S,
    AWB_TAG_SPAT_GAIN_B_S,
    AWB_TAG_DAYLIGHT_PROB_S,
    AWB_TAG_EQV_DAYLIGHT_PROB_S,
    AWB_TAG_EQV_GAIN_R_S,
    AWB_TAG_EQV_GAIN_G_S,
    AWB_TAG_EQV_GAIN_B_S,

	// Daylight Fluorescent 
	AWB_TAG_STA_GAIN_R_DF,
    AWB_TAG_STA_GAIN_G_DF,
    AWB_TAG_STA_GAIN_B_DF,
    AWB_TAG_SPAT_GAIN_R_DF,
    AWB_TAG_SPAT_GAIN_G_DF,
    AWB_TAG_SPAT_GAIN_B_DF,
    AWB_TAG_NR_THR_DF,
    AWB_TAG_HIT_NR_DF,
    AWB_TAG_DAYLIGHT_PROB_DF,
    AWB_TAG_EQV_DAYLIGHT_PROB_DF,
    AWB_TAG_EQV_GAIN_R_DF,
    AWB_TAG_EQV_GAIN_G_DF,
    AWB_TAG_EQV_GAIN_B_DF,

	// Neutral parent block threshold
	AWB_TAG_NEUTRAL_BLOCK_NUM_THR_NONNEUTRAL,
	AWB_TAG_NEUTRAL_BLOCK_NUM_THR_F,
	AWB_TAG_NEUTRAL_BLOCK_NUM_THR_CWF,
	AWB_TAG_NEUTRAL_BLOCK_NUM_THR_D,
	AWB_TAG_NEUTRAL_BLOCK_NUM_THR_DF,

	// Neutral parent block number
	AWB_TAG_NEUTRAL_PARENT_BLOCK_NUM_STB, // Neutral parent block number(Strobe)
    AWB_TAG_NEUTRAL_PARENT_BLOCK_NUM_T,   // Neutral parent block number(Tungsten)
	AWB_TAG_NEUTRAL_PARENT_BLOCK_NUM_WF,  // Neutral parent block number(Warm Fluorescent)
	AWB_TAG_NEUTRAL_PARENT_BLOCK_NUM_F,   // Neutral parent block number(Fluorescent)
	AWB_TAG_NEUTRAL_PARENT_BLOCK_NUM_CWF, // Neutral parent block number(CWF)
	AWB_TAG_NEUTRAL_PARENT_BLOCK_NUM_D,   // Neutral parent block number(Daylight)
	AWB_TAG_NEUTRAL_PARENT_BLOCK_NUM_S,   // Neutral parent block number(Shade)
	AWB_TAG_NEUTRAL_PARENT_BLOCK_NUM_DF,  // Neutral parent block number(Daylight Fluorescent)

	AWB_TAG_NEUTRAL_PARENT_BLOCK_NUM,         // Neutral parent block number
	AWB_TAG_LIGHT_MODE, // Light mode
    AWB_TAG_STAT_ERR_COUNT,    // AWB statistics error count
	AWB_TAG_CHILD_BLK_NUM_THR, // Child block number threshold

    // AWB tuning custom
    AWB_TAG_ONE_SHOT_SMOOTH_ENABLE, // One-shot smoothness enable
    AWB_TAG_ONE_SHOT_SMOOTH_LV_L,   // One-shot smoothness LV_L
    AWB_TAG_ONE_SHOT_SMOOTH_LV_H,   // One-shot smoothness LV_H
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_L2_STB, // Intermediate scene LV threshold L2 (Strobe)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_H2_STB, // Intermediate scene LV threshold H2 (Strobe)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_L2_T, // Intermediate scene LV threshold L2 (Tungsten)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_H2_T, // Intermediate scene LV threshold H2 (Tungsten)
    AWB_TAG_DAYLIGHT_LOCUS_LV_THR_L_T, // Daylight locus LV threshold L (Tungsten)
    AWB_TAG_DAYLIGHT_LOCUS_LV_THR_H_T, // Daylight locus LV LV threshold H (Tungsten)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_L2_WF, // Intermediate scene LV threshold L2 (Warm Fluorescent)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_H2_WF, // Intermediate scene LV threshold H2 (Warm Fluorescent)
    AWB_TAG_DAYLIGHT_LOCUS_LV_THR_L_WF, // Daylight locus LV threshold L (Warm Fluorescent)
    AWB_TAG_DAYLIGHT_LOCUS_LV_THR_H_WF, // Daylight locus LV LV threshold H (Warm Fluorescent)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_L2_F, // Intermediate scene LV threshold L2 (Fluorescent)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_H2_F, // Intermediate scene LV threshold H2 (Fluorescent)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_L2_CWF, // Intermediate scene LV threshold L2 (CWF)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_H2_CWF, // Intermediate scene LV threshold H2 (CWF)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_L2_D, // Intermediate scene LV threshold L2 (Daylight)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_H2_D, // Intermediate scene LV threshold H2 (Daylight)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_L2_DF, // Intermediate scene LV threshold L2 (Daylight Fluorescent)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_H2_DF, // Intermediate scene LV threshold H2 (Daylight Fluorescent)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_L2_S, // Intermediate scene LV threshold L2 (Shade)
    AWB_TAG_INTERMEDIATE_SCENE_LV_THR_H2_S, // Intermediate scene LV threshold H2 (Shade)
    AWB_TAG_DAYLIGHT_LOCUS_LV_THR_L_S, // Daylight locus LV threshold L (Shade)
    AWB_TAG_DAYLIGHT_LOCUS_LV_THR_H_S, // Daylight locus LV LV threshold H (Shade)

    // Average rotated XY
	AWB_TAG_AVG_XR_STB, // AverageXR(Strobe)
	AWB_TAG_AVG_YR_STB, // AverageYR(Strobe)
	AWB_TAG_AVG_XR_T,   // AverageXR(Tungsten)
	AWB_TAG_AVG_YR_T,   // AverageYR(Tungsten)
	AWB_TAG_AVG_XR_WF,  // AverageXR(Warm Fluorescent)
	AWB_TAG_AVG_YR_WF,  // AverageYR(Warm Fluorescent)
	AWB_TAG_AVG_XR_F,   // AverageXR(Fluorescent)
	AWB_TAG_AVG_YR_F,   // AverageYR(Fluorescent)
	AWB_TAG_AVG_XR_CWF, // AverageXR(CWF)
	AWB_TAG_AVG_YR_CWF, // AverageYR(CWF)
	AWB_TAG_AVG_XR_D,   // AverageXR(Daylight)
	AWB_TAG_AVG_YR_D,   // AverageYR(Daylight)
	AWB_TAG_AVG_XR_S,   // AverageXR(Shade)
	AWB_TAG_AVG_YR_S,   // AverageYR(Shade)
	AWB_TAG_AVG_XR_DF,  // AverageXR(Daylight Fluorescent)
	AWB_TAG_AVG_YR_DF,  // AverageYR(Daylight Fluorescent)

    // Tungsten specific info
	AWB_TAG_RG_T,                            // Tungsten R/G
	AWB_TAG_BG_T,                            // Tungsten B/G
	AWB_TAG_DAY_LOCUS_RG_T,                  // Tungsten daylight locus R/G
	AWB_TAG_DAY_LOCUS_BG_T,                  // Tungsten daylight locus B/G
	AWB_TAG_DAY_LOCUS_TARGET_RG_T,           // Tungsten daylight locus target R/G
	AWB_TAG_DAY_LOCUS_TARGET_BG_T,           // Tungsten daylight locus target B/G
	AWB_TAG_LOG_RG_T,                        // Tungsten log R/G
	AWB_TAG_LOG_BG_T,                        // Tungsten log B/G
	AWB_TAG_DAY_LOCUS_LOG_RG_T,              // Tungsten daylight locus log R/G
	AWB_TAG_DAY_LOCUS_LOG_BG_T,              // Tungsten daylight locus log B/G
	AWB_TAG_DAY_LOCUS_TARGET_LOG_RG_T,       // Tungsten daylight locus target log R/G
	AWB_TAG_DAY_LOCUS_TARGET_LOG_BG_T,       // Tungsten daylight locus target log B/G
	AWB_TAG_DAY_LOCUS_OFFSET_T,              // Tungsten daylight locus offset
	AWB_TAG_DAY_LOCUS_NEW_OFFSET_T,          // Tungsten daylight locus new offset
	AWB_TAG_DAY_LOCUS_TARGET_OFFSET_T,       // Tungsten daylight locus target offset
    AWB_TAG_DAY_LOCUS_TARGET_OFFSET_RATIO_T, // Tungsten daylight locus target offset ratio
    AWB_TAG_DAY_LOCUS_LUT_TARGET_OFFSET_T,   // Tungsten daylight locus LUT target offset
	AWB_TAG_IS_ABOVE_DAY_LOCUS_T,            // Is above Tungsten daylight locus
	AWB_TAG_GM_OFFSET_T,                     // Tungsten daylight locus green/magenta offset
	AWB_TAG_WEIGHT_T,                        // Tungsten light weight

    // Warm Fluorescent specific info
	AWB_TAG_RG_WF,                            // Warm Fluorescent R/G
	AWB_TAG_BG_WF,                            // Warm Fluorescent0 B/G
	AWB_TAG_GREEN_OFFSET_RG_WF,               // Warm Fluorescent greent offset R/G
	AWB_TAG_GREEN_OFFSET_BG_WF,               // Warm Fluorescent green offset B/G
	AWB_TAG_DAY_LOCUS_TARGET_RG_WF,           // Warm Fluorescent daylight locus target R/G
	AWB_TAG_DAY_LOCUS_TARGET_BG_WF,           // Warm Fluorescent daylight locus target B/G
	AWB_TAG_LOG_RG_WF,                        // Warm Fluorescent log R/G
	AWB_TAG_LOG_BG_WF,                        // Warm Fluorescent log B/G
	AWB_TAG_DAY_LOCUS_LOG_RG_WF,              // Warm Fluorescent daylight locus log R/G
	AWB_TAG_DAY_LOCUS_LOG_BG_WF,              // Warm Fluorescent daylight locus log B/G
	AWB_TAG_GREEN_OFFSET_LOG_RG_WF,           // Warm Fluorescent greent offset log R/G
	AWB_TAG_GREEN_OFFSET_LOG_BG_WF,           // Warm Fluorescent green offset log B/G
	AWB_TAG_DAY_LOCUS_TARGET_LOG_RG_WF,       // Warm Fluorescent daylight locus target log R/G
	AWB_TAG_DAY_LOCUS_TARGET_LOG_BG_WF,       // Warm Fluorescent daylight locus target log B/G
	AWB_TAG_DAY_LOCUS_OFFSET_WF,              // Warm Fluorescent daylight locus offset
	AWB_TAG_DAY_LOCUS_NEW_OFFSET_WF,          // Warm Fluorescent daylight locus new offset
	AWB_TAG_DAY_LOCUS_TARGET_OFFSET_WF,       // Warm Fluorescent daylight locus target offset
    AWB_TAG_DAY_LOCUS_TARGET_OFFSET_RATIO_WF, // Warm Fluorescent daylight locus target offset ratio
    AWB_TAG_DAY_LOCUS_LUT_TARGET_OFFSET_WF,   // Warm Fluorescent daylight locus LUT target offset
	AWB_TAG_GREEN_OFFSET_WF,                  // Warm Fluorescent daylight locus green offset
	AWB_TAG_GREEN_OFFSET_THR_WF,              // Warm Fluorescent daylight locus green offset
	AWB_TAG_WEIGHT_WF,                        // Warm Fluorescent weight

    // Shade specific info
	AWB_TAG_RG_S,                      // Shade R/G
	AWB_TAG_BG_S,                      // Shade B/G
	AWB_TAG_DAY_LOCUS_RG_S,            // Shade daylight locus R/G
	AWB_TAG_DAY_LOCUS_BG_S,            // Shade daylight locus B/G
	AWB_TAG_DAY_LOCUS_TARGET_RG_S,     // Shade daylight locus target R/G
	AWB_TAG_DAY_LOCUS_TARGET_BG_S,     // Shade daylight locus target B/G
	AWB_TAG_LOG_RG_S,                  // Shade log R/G
	AWB_TAG_LOG_BG_S,                  // Shade log B/G
	AWB_TAG_DAY_LOCUS_LOG_RG_S,        // Shade daylight locus log R/G
	AWB_TAG_DAY_LOCUS_LOG_BG_S,        // Shade daylight locus log B/G
	AWB_TAG_DAY_LOCUS_TARGET_LOG_RG_S, // Shade daylight locus target log R/G
	AWB_TAG_DAY_LOCUS_TARGET_LOG_BG_S, // Shade daylight locus target log B/G
	AWB_TAG_DAY_LOCUS_OFFSET_S,        // Shade daylight locus offset
	AWB_TAG_DAY_LOCUS_NEW_OFFSET_S,    // Shade daylight locus new offset
	AWB_TAG_DAY_LOCUS_TARGET_OFFSET_S, // Shade daylight locus target offset
	AWB_TAG_DAY_LOCUS_LUT_TARGET_OFFSET_S, // Shade daylight locus LUT target offset
	AWB_TAG_IS_ABOVE_DAY_LOCUS_S,      // Is above daylight locus
    AWB_TAG_GM_OFFSET_S,               // Shade daylight locus green/magenta offset
	AWB_TAG_WEIGHT_S,                  // Shade light weight

	// PWB
	PWB_TAG_NEUTRAL_AREA_PARENT_BLOCK_NUM,    // PWB parent block number of neutral area
    PWB_TAG_REFERENCE_AREA_PARENT_BLOCK_NUM,  // PWB parent block number of reference area
    PWB_TAG_PARENT_BLOCK_NUM,      // PWB parent block number of neutral area + reference area
	PWB_TAG_DEFAULT_GAIN_R, // PWB default gain R
	PWB_TAG_DEFAULT_GAIN_G, // PWB default gain G
	PWB_TAG_DEFAULT_GAIN_B, // PWB default gain B
	PWB_TAG_GAIN_NEUTRAL_AREA_R, // WB gain R of neutral area
	PWB_TAG_GAIN_NEUTRAL_AREA_G, // WB gain G of neutral area
	PWB_TAG_GAIN_NEUTRAL_AREA_B, // WB gain B of neutral area
	PWB_TAG_GAIN_REFERENCE_AREA_R, // WB gain R of reference area
	PWB_TAG_GAIN_REFERENCE_AREA_G, // WB gain G of reference area
	PWB_TAG_GAIN_REFERENCE_AREA_B, // WB gain B of reference area
    PWB_TAG_LIGHT_SOURCE,    // PWB light source
	PWB_TAG_LIGHT_REFERENCE_AREA_XOR, // PWB reference area original X coordinate (rotated)
	PWB_TAG_LIGHT_REFERENCE_AREA_YOR, // PWB reference area original Y coordinate (rotated)
	PWB_TAG_LIGHT_REFERENCE_AREA_XPR, // PWB reference area projected X coordinate (rotated)
	PWB_TAG_LIGHT_REFERENCE_AREA_YPR, // PWB reference area projected Y coordinate (rotated)	
    
	// AWB Statistics Config
    AWB_TAG_STAT_CONFIG_WINDOW_SIZE_X,   // Main stat window size X
    AWB_TAG_STAT_CONFIG_WINDOW_SIZE_Y,   // Main stat window size Y
	AWB_TAG_STAT_CONFIG_WINDOW_PITCH_X,  // Main stat window pitch X
    AWB_TAG_STAT_CONFIG_WINDOW_PITCH_Y,  // Main stat window pitch Y
    AWB_TAG_STAT_CONFIG_WINDOW_ORIGIN_X, // Main stat window origin X
    AWB_TAG_STAT_CONFIG_WINDOW_ORIGIN_Y, // Main stat window origin Y
	AWB_TAG_STAT_CONFIG_WINDOW_NUM_X,    // Main stat window number X
    AWB_TAG_STAT_CONFIG_WINDOW_NUM_Y,    // Main stat window number Y
    AWB_TAG_STAT_CONFIG_LOW_THR_R,   // Low threshold R
    AWB_TAG_STAT_CONFIG_LOW_THR_G,   // Low threshold G
    AWB_TAG_STAT_CONFIG_LOW_THR_B,   // Low threshold B
    AWB_TAG_STAT_CONFIG_HIGH_THR_R,  // High threshold R
    AWB_TAG_STAT_CONFIG_HIGH_THR_G,  // High threshold G
    AWB_TAG_STAT_CONFIG_HIGH_THR_B,  // High threshold B
	AWB_TAG_STAT_CONFIG_PIXEL_COUNT_R,   // Pixel count R
    AWB_TAG_STAT_CONFIG_PIXEL_COUNT_G,   // Pixel count G
    AWB_TAG_STAT_CONFIG_PIXEL_COUNT_B,   // Pixel count B
    AWB_TAG_STAT_CONFIG_PREGAIN_LIMIT_R,  // Pre-gain maximum limit clipping R
    AWB_TAG_STAT_CONFIG_PREGAIN_LIMIT_G,  // Pre-gain maximum limit clipping G
    AWB_TAG_STAT_CONFIG_PREGAIN_LIMIT_B,  // Pre-gain maximum limit clipping B
    AWB_TAG_STAT_CONFIG_PREGAIN_R,  // Pre-gain R
    AWB_TAG_STAT_CONFIG_PREGAIN_G,  // Pre-gain G
    AWB_TAG_STAT_CONFIG_PREGAIN_B,  // Pre-gain B
    AWB_TAG_STAT_ERROR_THR,            // AWB error threshold
    AWB_TAG_STAT_ROTATION_MATRIX_COS,  // AWB rotation matrix COS
    AWB_TAG_STAT_ROTATION_MATRIX_SIN,  // AWB rotation matrix SIN
    AWB_TAG_STAT_CONFIG_AWBXY_WINR0, // AWB statistics config parameter: AWBXY_WINR0
    AWB_TAG_STAT_CONFIG_AWBXY_WINL0, // AWB statistics config parameter: AWBXY_WINL0
    AWB_TAG_STAT_CONFIG_AWBXY_WIND0, // AWB statistics config parameter: AWBXY_WIND0
    AWB_TAG_STAT_CONFIG_AWBXY_WINU0, // AWB statistics config parameter: AWBXY_WINU0
    AWB_TAG_STAT_CONFIG_AWBXY_WINR1, // AWB statistics config parameter: AWBXY_WINR1
    AWB_TAG_STAT_CONFIG_AWBXY_WINL1, // AWB statistics config parameter: AWBXY_WINL1
    AWB_TAG_STAT_CONFIG_AWBXY_WIND1, // AWB statistics config parameter: AWBXY_WIND1
    AWB_TAG_STAT_CONFIG_AWBXY_WINU1, // AWB statistics config parameter: AWBXY_WINU1
    AWB_TAG_STAT_CONFIG_AWBXY_WINR2, // AWB statistics config parameter: AWBXY_WINR2
    AWB_TAG_STAT_CONFIG_AWBXY_WINL2, // AWB statistics config parameter: AWBXY_WINL2
    AWB_TAG_STAT_CONFIG_AWBXY_WIND2, // AWB statistics config parameter: AWBXY_WIND2
    AWB_TAG_STAT_CONFIG_AWBXY_WINU2, // AWB statistics config parameter: AWBXY_WINU2
    AWB_TAG_STAT_CONFIG_AWBXY_WINR3, // AWB statistics config parameter: AWBXY_WINR3
    AWB_TAG_STAT_CONFIG_AWBXY_WINL3, // AWB statistics config parameter: AWBXY_WINL3
    AWB_TAG_STAT_CONFIG_AWBXY_WIND3, // AWB statistics config parameter: AWBXY_WIND3
    AWB_TAG_STAT_CONFIG_AWBXY_WINU3, // AWB statistics config parameter: AWBXY_WINU3
    AWB_TAG_STAT_CONFIG_AWBXY_WINR4, // AWB statistics config parameter: AWBXY_WINR4
    AWB_TAG_STAT_CONFIG_AWBXY_WINL4, // AWB statistics config parameter: AWBXY_WINL4
    AWB_TAG_STAT_CONFIG_AWBXY_WIND4, // AWB statistics config parameter: AWBXY_WIND4
    AWB_TAG_STAT_CONFIG_AWBXY_WINU4, // AWB statistics config parameter: AWBXY_WINU4
    AWB_TAG_STAT_CONFIG_AWBXY_WINR5, // AWB statistics config parameter: AWBXY_WINR5
    AWB_TAG_STAT_CONFIG_AWBXY_WINL5, // AWB statistics config parameter: AWBXY_WINL5
    AWB_TAG_STAT_CONFIG_AWBXY_WIND5, // AWB statistics config parameter: AWBXY_WIND5
    AWB_TAG_STAT_CONFIG_AWBXY_WINU5, // AWB statistics config parameter: AWBXY_WINU5
    AWB_TAG_STAT_CONFIG_AWBXY_WINR6, // AWB statistics config parameter: AWBXY_WINR6
    AWB_TAG_STAT_CONFIG_AWBXY_WINL6, // AWB statistics config parameter: AWBXY_WINL6
    AWB_TAG_STAT_CONFIG_AWBXY_WIND6, // AWB statistics config parameter: AWBXY_WIND6
    AWB_TAG_STAT_CONFIG_AWBXY_WINU6, // AWB statistics config parameter: AWBXY_WINU6
    AWB_TAG_STAT_CONFIG_AWBXY_WINR7, // AWB statistics config parameter: AWBXY_WINR7
    AWB_TAG_STAT_CONFIG_AWBXY_WINL7, // AWB statistics config parameter: AWBXY_WINL7
    AWB_TAG_STAT_CONFIG_AWBXY_WIND7, // AWB statistics config parameter: AWBXY_WIND7
    AWB_TAG_STAT_CONFIG_AWBXY_WINU7, // AWB statistics config parameter: AWBXY_WINU7
    AWB_TAG_STAT_CONFIG_AWBXY_WINR8, // AWB statistics config parameter: AWBXY_WINR8
    AWB_TAG_STAT_CONFIG_AWBXY_WINL8, // AWB statistics config parameter: AWBXY_WINL8
    AWB_TAG_STAT_CONFIG_AWBXY_WIND8, // AWB statistics config parameter: AWBXY_WIND8
    AWB_TAG_STAT_CONFIG_AWBXY_WINU8, // AWB statistics config parameter: AWBXY_WINU8
    AWB_TAG_STAT_CONFIG_AWBXY_WINR9, // AWB statistics config parameter: AWBXY_WINR9
    AWB_TAG_STAT_CONFIG_AWBXY_WINL9, // AWB statistics config parameter: AWBXY_WINL9
    AWB_TAG_STAT_CONFIG_AWBXY_WIND9, // AWB statistics config parameter: AWBXY_WIND9
    AWB_TAG_STAT_CONFIG_AWBXY_WINU9, // AWB statistics config parameter: AWBXY_WINU9

	// CCT Estimation
	AWB_TAG_CCT,               // CCT estimation
	AWB_TAG_FLUORESCENT_INDEX, // CCT estimation: fluorescent index
	AWB_TAG_DAYLIGHT_FLUORESCENT_INDEX, // CCT estimation: daylight fluorescent index
	AWB_TAG_CCT_LOG_RG,        // CCT estimation: log(R/G) (from AWB gain)
    AWB_TAG_CCT_LOG_BG,        // CCT estimation: log(B/G) (from AWB gain)
	AWB_TAG_CCT_X,             // CCT estimation: X (from AWB gain)
	AWB_TAG_CCT_Y,             // CCT estimation: Y (from AWB gain)
	AWB_TAG_CCT_XR,            // CCT estimation: XR (from AWB gain)
	AWB_TAG_CCT_YR,            // CCT estimation: XR (from AWB gain)
	AWB_TAG_CCT_MIRED_H,       // CCT estimation: MIRED_H
	AWB_TAG_CCT_MIRED_L,       // CCT estimation: MIRED_L
	AWB_TAG_CCT_MIRED,         // CCT estimation: MIRED
	AWB_TAG_CCT_YR_TL84,       // CCT estimation: YR_TL84 (relative rotated Y coordinate of TL84)
    AWB_TAG_CCT_YR_CWF,        // CCT estimation: YR_CWF (relative rotated Y coordinate of CWF)
    AWB_TAG_CCT_YR_MEAN_F,     // CCT estimation: YR_Mean_F = (YR_TL84 + YR_CWF) / 2
	AWB_TAG_CCT_YR_D65,        // CCT estimation: YR_D65 (relative rotated Y coordinate of D65)
    AWB_TAG_CCT_YR_DF,         // CCT estimation: YR_DF (relative rotated Y coordinate of DF)
    AWB_TAG_CCT_YR_MEAN_DF,    // CCT estimation: YR_Mean_DF = (YR_D65 + YR_DF) / 2

	// AWB Calibration Gain
	AWB_TAG_RAW_PREGAIN1_R, // AWB calibration gain R
	AWB_TAG_RAW_PREGAIN1_G, // AWB calibration gain G
	AWB_TAG_RAW_PREGAIN1_B, // AWB calibration gain B	
	AWB_TAG_RAW_PREGAIN1_R_M, // AWB calibration gain R
	AWB_TAG_RAW_PREGAIN1_G_M, // AWB calibration gain G
	AWB_TAG_RAW_PREGAIN1_B_M, // AWB calibration gain B
	AWB_TAG_RAW_PREGAIN1_R_L, // AWB calibration gain R
	AWB_TAG_RAW_PREGAIN1_G_L, // AWB calibration gain G
	AWB_TAG_RAW_PREGAIN1_B_L, // AWB calibration gain B
	AWB_TAG_LIGHT_STAT_CAL_GAIN_R, // AWB light statistics calibration gain R
	AWB_TAG_LIGHT_STAT_CAL_GAIN_G, // AWB light statistics calibration gain G
	AWB_TAG_LIGHT_STAT_CAL_GAIN_B, // AWB light statistics calibration gain B
	AWB_TAG_OUTPUT_CAL_GAIN_R, // AWB output calibration gain R
	AWB_TAG_OUTPUT_CAL_GAIN_G, // AWB output calibration gain G
	AWB_TAG_OUTPUT_CAL_GAIN_B, // AWB output calibration gain B

    // AWB Light Source Preference Gain
    AWB_TAG_PREFGAIN_STROBE_R,
    AWB_TAG_PREFGAIN_STROBE_G,
    AWB_TAG_PREFGAIN_STROBE_B,
    AWB_TAG_PREFGAIN_TUNGSTEN_R,
    AWB_TAG_PREFGAIN_TUNGSTEN_G,
    AWB_TAG_PREFGAIN_TUNGSTEN_B,
    AWB_TAG_PREFGAIN_WARM_FLUORESCENT_R,
    AWB_TAG_PREFGAIN_WARM_FLUORESCENT_G,
    AWB_TAG_PREFGAIN_WARM_FLUORESCENT_B,
    AWB_TAG_PREFGAIN_FLUORESCENT_R,
    AWB_TAG_PREFGAIN_FLUORESCENT_G,
    AWB_TAG_PREFGAIN_FLUORESCENT_B,
    AWB_TAG_PREFGAIN_CWF_R,
    AWB_TAG_PREFGAIN_CWF_G,
    AWB_TAG_PREFGAIN_CWF_B,
    AWB_TAG_PREFGAIN_DAYLIGHT_R,
    AWB_TAG_PREFGAIN_DAYLIGHT_G,
    AWB_TAG_PREFGAIN_DAYLIGHT_B,
    AWB_TAG_PREFGAIN_SHADE_R,
    AWB_TAG_PREFGAIN_SHADE_G,
    AWB_TAG_PREFGAIN_SHADE_B,
    AWB_TAG_PREFGAIN_DAYLIGHT_FLUORESCENT_R,
    AWB_TAG_PREFGAIN_DAYLIGHT_FLUORESCENT_G,
    AWB_TAG_PREFGAIN_DAYLIGHT_FLUORESCENT_B,

	//____NVRAM Data____
    AWB_NVRAM_UNIT_GAIN_R, // AWB unit gain R
	AWB_NVRAM_UNIT_GAIN_G, // AWB unit gain G
	AWB_NVRAM_UNIT_GAIN_B, // AWB unit gain B
    AWB_NVRAM_GOLDEN_GAIN_R, // AWB golden sample gain R
	AWB_NVRAM_GOLDEN_GAIN_G, // AWB golden sample gain G
	AWB_NVRAM_GOLDEN_GAIN_B, // AWB golden sample gain B
    AWB_NVRAM_UNIT_GAIN_R_M, // AWB unit middle CCT gain R
	AWB_NVRAM_UNIT_GAIN_G_M, // AWB unit middle CCT gain G
	AWB_NVRAM_UNIT_GAIN_B_M, // AWB unit middle CCT gain B
    AWB_NVRAM_GOLDEN_GAIN_R_M, // AWB golden sample middle CCT gain R
	AWB_NVRAM_GOLDEN_GAIN_G_M, // AWB golden sample middle CCT gain G
	AWB_NVRAM_GOLDEN_GAIN_B_M, // AWB golden sample middle CCT gain B
    AWB_NVRAM_UNIT_GAIN_R_L, // AWB low CCT unit gain R
	AWB_NVRAM_UNIT_GAIN_G_L, // AWB low CCT unit gain G
	AWB_NVRAM_UNIT_GAIN_B_L, // AWB low CCT unit gain B
    AWB_NVRAM_GOLDEN_GAIN_R_L, // AWB golden sample low CCT gain R
	AWB_NVRAM_GOLDEN_GAIN_G_L, // AWB golden sample low CCT gain G
	AWB_NVRAM_GOLDEN_GAIN_B_L, // AWB golden sample low CCT gain B
    AWB_NVRAM_TUNING_UNIT_GAIN_R, // AWB tuning unit gain R (backup for debug purpose)
	AWB_NVRAM_TUNING_UNIT_GAIN_G, // AWB tuning unit gain G (backup for debug purpose)
	AWB_NVRAM_TUNING_UNIT_GAIN_B, // AWB tuning unit gain B (backup for debug purpose)
    AWB_NVRAM_D65_GAIN_R, // AWB D65 gain R
	AWB_NVRAM_D65_GAIN_G, // AWB D65 gain G
	AWB_NVRAM_D65_GAIN_B, // AWB D65 gain B

	// Light Source Original XY Coordinate
	AWB_NVRAM_STB_XO,      // Strobe Xo
	AWB_NVRAM_STB_YO,      // Strobe Yo
	AWB_NVRAM_HORIZON_XO, // Horizon Xo
	AWB_NVRAM_HORIZON_YO, // Horizon Yo
	AWB_NVRAM_A_XO,       // A Xo
	AWB_NVRAM_A_YO,       // A Yo
	AWB_NVRAM_TL84_XO,    // TL84 Xo
	AWB_NVRAM_TL84_YO,    // TL84 Yo
	AWB_NVRAM_CWF_XO,     // CWF Xo
	AWB_NVRAM_CWF_YO,     // CWF Yo
	AWB_NVRAM_DNP_XO,     // DNP Xo
	AWB_NVRAM_DNP_YO,     // DNP Yo
	AWB_NVRAM_D65_XO,     // D65 Xo
	AWB_NVRAM_D65_YO,     // D65 Yo
	AWB_NVRAM_DF_XO,      // DF Xo
	AWB_NVRAM_DF_YO,      // DF Yo

	// Light Source Rotated XY Coordinate
	AWB_NVRAM_STB_XR,     // Strobe Xr
	AWB_NVRAM_STB_YR,     // Strobe Yr
	AWB_NVRAM_HORIZON_XR, // Horizon Xr
	AWB_NVRAM_HORIZON_YR, // Horizon Yr
	AWB_NVRAM_A_XR,       // A Xr
	AWB_NVRAM_A_YR,       // A Yr
	AWB_NVRAM_TL84_XR,    // TL84 Xr
	AWB_NVRAM_TL84_YR,    // TL84 Yr
	AWB_NVRAM_CWF_XR,     // CWF Xr
	AWB_NVRAM_CWF_YR,     // CWF Yr
	AWB_NVRAM_DNP_XR,     // DNP Xr
	AWB_NVRAM_DNP_YR,     // DNP Yr
	AWB_NVRAM_D65_XR,     // D65 Xr
	AWB_NVRAM_D65_YR,     // D65 Yr
	AWB_NVRAM_DF_XR,      // DF Xr
	AWB_NVRAM_DF_YR,      // DF Yr

	// AWB gain
    AWB_NVRAM_STROBE_AWB_GAIN_R, // Strobe AWB gain R
    AWB_NVRAM_STROBE_AWB_GAIN_G, // Strobe AWB gain G
    AWB_NVRAM_STROBE_AWB_GAIN_B, // Strobe AWB gain B
    AWB_NVRAM_HORIZON_AWB_GAIN_R, // Horizon AWB gain R
    AWB_NVRAM_HORIZON_AWB_GAIN_G, // Horizon AWB gain G
    AWB_NVRAM_HORIZON_AWB_GAIN_B, // Horizon AWB gain B
    AWB_NVRAM_A_AWB_GAIN_R,      // A AWB gain R
    AWB_NVRAM_A_AWB_GAIN_G,      // A AWB gain G
    AWB_NVRAM_A_AWB_GAIN_B,      // A AWB gain B
    AWB_NVRAM_TL84_AWB_GAIN_R,   // TL84 AWB gain R
    AWB_NVRAM_TL84_AWB_GAIN_G,   // TL84 AWB gain G
    AWB_NVRAM_TL84_AWB_GAIN_B,   // TL84 AWB gain B
    AWB_NVRAM_CWF_AWB_GAIN_R,    // CWF AWB gain R
    AWB_NVRAM_CWF_AWB_GAIN_G,    // CWF AWB gain G
    AWB_NVRAM_CWF_AWB_GAIN_B,    // CWF AWB gain B
    AWB_NVRAM_DNP_AWB_GAIN_R,    // DNP AWB gain R
    AWB_NVRAM_DNP_AWB_GAIN_G,    // DNP AWB gain G
    AWB_NVRAM_DNP_AWB_GAIN_B,    // DNP AWB gain B
    AWB_NVRAM_D65_AWB_GAIN_R,    // D65 AWB gain R
    AWB_NVRAM_D65_AWB_GAIN_G,    // D65 AWB gain G
    AWB_NVRAM_D65_AWB_GAIN_B,    // D65 AWB gain B
    AWB_NVRAM_DF_AWB_GAIN_R,     // DF AWB gain R
    AWB_NVRAM_DF_AWB_GAIN_G,     // DF AWB gain G
    AWB_NVRAM_DF_AWB_GAIN_B,     // DF AWB gain B

	// Rotation Matrix Parameter
	AWB_NVRAM_ROTATION_ANGLE, // Rotation angle
	AWB_NVRAM_ROTATION_COS,   // Rotation matrix: COS
	AWB_NVRAM_ROTATION_SIN,   // Rotation matrix: SIN

	// Daylight Locus Parameter
	AWB_NVRAM_SLPOE_NUMERATOR,   // Daylight locus slop numerator
	AWB_NVRAM_SLPOE_DENOMINATOR, // Daylight locus slop denominator

	// Predictor Information
	AWB_NVRAM_PREDICTOR_PREF_RATIO,	// i4PrefRatio100
	AWB_NVRAM_PREDICTOR_L_GAIN_R,	// rSpatial_DaylightLocus_L
	AWB_NVRAM_PREDICTOR_L_GAIN_G,	// rSpatial_DaylightLocus_L
	AWB_NVRAM_PREDICTOR_L_GAIN_B,	// rSpatial_DaylightLocus_L
	AWB_NVRAM_PREDICTOR_H_GAIN_R,	// rSpatial_DaylightLocus_H
	AWB_NVRAM_PREDICTOR_H_GAIN_G,	// rSpatial_DaylightLocus_H
	AWB_NVRAM_PREDICTOR_H_GAIN_B,	// rSpatial_DaylightLocus_H
	AWB_NVRAM_PREDICTOR_G_GAIN_R,	// rTemporal_General
	AWB_NVRAM_PREDICTOR_G_GAIN_G,	// rTemporal_General
	AWB_NVRAM_PREDICTOR_G_GAIN_B,	// rTemporal_General
	AWB_NVRAM_PREDICTOR_LSC_GAIN_R,
	AWB_NVRAM_PREDICTOR_LSC_GAIN_G,
	AWB_NVRAM_PREDICTOR_LSC_GAIN_B,

	// AWB Light Area
	AWB_NVRAM_STROBE_RIGHT, // AWB light area right bound: Strobe
	AWB_NVRAM_STROBE_LEFT,  // AWB light area left bound: Strobe
	AWB_NVRAM_STROBE_UPPER, // AWB light area upper bound: Strobe
	AWB_NVRAM_STROBE_LOWER, // AWB light area lower bound: Strobe
	AWB_NVRAM_TUNGSTEN_RIGHT,         // AWB light area right bound: Tungsten
	AWB_NVRAM_TUNGSTEN_LEFT,          // AWB light area left bound: Tungsten
	AWB_NVRAM_TUNGSTEN_UPPER,         // AWB light area upper bound: Tungsten
	AWB_NVRAM_TUNGSTEN_LOWER,         // AWB light area lower bound: Tungsten
	AWB_NVRAM_WARM_FLUORESCENT_RIGHT, // AWB light area right bound: Warm Fluorescent
	AWB_NVRAM_WARM_FLUORESCENT_LEFT,  // AWB light area left bound: Warm Fluorescent
	AWB_NVRAM_WARM_FLUORESCENT_UPPER, // AWB light area upper bound: Warm Fluorescent
	AWB_NVRAM_WARM_FLUORESCENT_LOWER, // AWB light area lower bound: Warm Fluorescent
	AWB_NVRAM_FLUORESCENT_RIGHT,      // AWB light area right bound: Fluorescent
	AWB_NVRAM_FLUORESCENT_LEFT,       // AWB light area left bound: Fluorescent
	AWB_NVRAM_FLUORESCENT_UPPER,      // AWB light area upper bound: Fluorescent
	AWB_NVRAM_FLUORESCENT_LOWER,      // AWB light area lower bound: Fluorescent
	AWB_NVRAM_CWF_RIGHT,              // AWB light area right bound: CWF
	AWB_NVRAM_CWF_LEFT,               // AWB light area left bound: CWF
	AWB_NVRAM_CWF_UPPER,              // AWB light area upper bound: CWF
	AWB_NVRAM_CWF_LOWER,              // AWB light area lower bound: CWF
	AWB_NVRAM_DAYLIGHT_RIGHT,         // AWB light area right bound: Daylight
	AWB_NVRAM_DAYLIGHT_LEFT,          // AWB light area left bound: Daylight
	AWB_NVRAM_DAYLIGHT_UPPER,         // AWB light area upper bound: Daylight
	AWB_NVRAM_DAYLIGHT_LOWER,         // AWB light area lower bound: Daylight
	AWB_NVRAM_SHADE_RIGHT,            // AWB light area right bound: Shade
	AWB_NVRAM_SHADE_LEFT,             // AWB light area left bound: Shade
	AWB_NVRAM_SHADE_UPPER,            // AWB light area upper bound: Shade
	AWB_NVRAM_SHADE_LOWER,            // AWB light area lower bound: Shade
	AWB_NVRAM_DAYLIGHT_FLUORESCENT_RIGHT, // AWB light area right bound: Daylight Fluorescent
	AWB_NVRAM_DAYLIGHT_FLUORESCENT_LEFT,  // AWB light area left bound: Daylight Fluorescent
	AWB_NVRAM_DAYLIGHT_FLUORESCENT_UPPER, // AWB light area upper bound: Daylight Fluorescent
	AWB_NVRAM_DAYLIGHT_FLUORESCENT_LOWER, // AWB light area lower bound: Daylight Fluorescent

	// PWB Light Area
	PWB_NVRAM_REFERENCE_RIGHT,         // PWB light area right bound: Reference Area
	PWB_NVRAM_REFERENCE_LEFT,          // PWB light area left bound: Reference Area
	PWB_NVRAM_REFERENCE_UPPER,         // PWB light area upper bound: Reference Area
	PWB_NVRAM_REFERENCE_LOWER,         // PWB light area lower bound: Reference Area
	PWB_NVRAM_DAYLIGHT_RIGHT,          // PWB light area right bound: Daylight
	PWB_NVRAM_DAYLIGHT_LEFT,           // PWB light area left bound: Daylight
	PWB_NVRAM_DAYLIGHT_UPPER,          // PWB light area upper bound: Daylight
	PWB_NVRAM_DAYLIGHT_LOWER,          // PWB light area lower bound: Daylight
	PWB_NVRAM_CLOUDY_DAYLIGHT_RIGHT,   // PWB light area right bound: Cloudy Daylight
	PWB_NVRAM_CLOUDY_DAYLIGHT_LEFT,    // PWB light area left bound: Cloudy Daylight
	PWB_NVRAM_CLOUDY_DAYLIGHT_UPPER,   // PWB light area upper bound: Cloudy Daylight
	PWB_NVRAM_CLOUDY_DAYLIGHT_LOWER,   // PWB light area lower bound: Cloudy Daylight
	PWB_NVRAM_SHADE_RIGHT,             // PWB light area right bound: Shade
	PWB_NVRAM_SHADE_LEFT,              // PWB light area left bound: Shade
	PWB_NVRAM_SHADE_UPPER,             // PWB light area upper bound: Shade
	PWB_NVRAM_SHADE_LOWER,             // PWB light area lower bound: Shade
	PWB_NVRAM_TWILIGHT_RIGHT,          // PWB light area right bound: Twilight
	PWB_NVRAM_TWILIGHT_LEFT,           // PWB light area left bound: Twilight
	PWB_NVRAM_TWILIGHT_UPPER,          // PWB light area upper bound: Twilight
	PWB_NVRAM_TWILIGHT_LOWER,          // PWB light area lower bound: Twilight
	PWB_NVRAM_FLUORESCENT_RIGHT,       // PWB light area right bound: Fluorescent
	PWB_NVRAM_FLUORESCENT_LEFT,        // PWB light area left bound: Fluorescent
	PWB_NVRAM_FLUORESCENT_UPPER,       // PWB light area upper bound: Fluorescent
	PWB_NVRAM_FLUORESCENT_LOWER,       // PWB light area lower bound: Fluorescent
	PWB_NVRAM_WARM_FLUORESCENT_RIGHT,  // PWB light area right bound: Warm Fluorescent
	PWB_NVRAM_WARM_FLUORESCENT_LEFT,   // PWB light area left bound: Warm Fluorescent
	PWB_NVRAM_WARM_FLUORESCENT_UPPER,  // PWB light area upper bound: Warm Fluorescent
	PWB_NVRAM_WARM_FLUORESCENT_LOWER,  // PWB light area lower bound: Warm Fluorescent
	PWB_NVRAM_WARM_INCANDESCENT_RIGHT, // PWB light area right bound: Incandescent
	PWB_NVRAM_WARM_INCANDESCENT_LEFT,  // PWB light area left bound: Incandescent
	PWB_NVRAM_WARM_INCANDESCENT_UPPER, // PWB light area upper bound: Incandescent
	PWB_NVRAM_WARM_INCANDESCENT_LOWER, // PWB light area lower bound: Incandescent

	// PWB Default Gain
    PWB_NVRAM_DEF_GAIN_R_DAYLIGHT,         // PWB default gain R: Daylight
	PWB_NVRAM_DEF_GAIN_G_DAYLIGHT,         // PWB default gain G: Daylight
	PWB_NVRAM_DEF_GAIN_B_DAYLIGHT,         // PWB default gain B: Daylight
    PWB_NVRAM_DEF_GAIN_R_CLOUDY_DAYLIGHT,  // PWB default gain R: Cloudy Daylight
	PWB_NVRAM_DEF_GAIN_G_CLOUDY_DAYLIGHT,  // PWB default gain G: Cloudy Daylight
	PWB_NVRAM_DEF_GAIN_B_CLOUDY_DAYLIGHT,  // PWB default gain B: Cloudy Daylight
    PWB_NVRAM_DEF_GAIN_R_SHADE,            // PWB default gain R: Shade
	PWB_NVRAM_DEF_GAIN_G_SHADE,            // PWB default gain G: Shade
	PWB_NVRAM_DEF_GAIN_B_SHADE,            // PWB default gain B: Shade
    PWB_NVRAM_DEF_GAIN_R_TWILIGHT,         // PWB default gain R: Twilight
	PWB_NVRAM_DEF_GAIN_G_TWILIGHT,         // PWB default gain G: Twilight
	PWB_NVRAM_DEF_GAIN_B_TWILIGHT,         // PWB default gain B: Twilight
    PWB_NVRAM_DEF_GAIN_R_FLUORESCENT,      // PWB default gain R: Fluorescent
	PWB_NVRAM_DEF_GAIN_G_FLUORESCENT,      // PWB default gain G: Fluorescent
	PWB_NVRAM_DEF_GAIN_B_FLUORESCENT,      // PWB default gain B: Fluorescent
    PWB_NVRAM_DEF_GAIN_R_WARM_FLUORESCENT, // PWB default gain R: Warm Fluorescent
	PWB_NVRAM_DEF_GAIN_G_WARM_FLUORESCENT, // PWB default gain G: Warm Fluorescent
	PWB_NVRAM_DEF_GAIN_B_WARM_FLUORESCENT, // PWB default gain B: Warm Fluorescent
    PWB_NVRAM_DEF_GAIN_R_INCANDESCENT,     // PWB default gain R: Incandescent
	PWB_NVRAM_DEF_GAIN_G_INCANDESCENT,     // PWB default gain G: Incandescent
	PWB_NVRAM_DEF_GAIN_B_INCANDESCENT,     // PWB default gain B: Incandescent

	// AWB Preference Color Parameter
    AWB_NVRAM_PREFERENCE_COLOR_SLIDER_TUNGSTEN,             // AWB preference color slider value: Tungsten
	AWB_NVRAM_PREFERENCE_COLOR_OFFSET_THR_TUNGSTEN,         // AWB preference color offset threshold: Tungsten
    AWB_NVRAM_PREFERENCE_COLOR_SLIDER_WARM_FLUORESCENT,     // AWB preference color slider value: Warm Fluorescent
	AWB_NVRAM_PREFERENCE_COLOR_OFFSET_THR_WARM_FLUORESCENT, // AWB preference color offset threshold: Warm Fluorescent
    AWB_NVRAM_PREFERENCE_COLOR_SLIDER_SHADE,                // AWB preference color slider value: Shade
	AWB_NVRAM_PREFERENCE_COLOR_OFFSET_THR_SHADE,            // AWB preference color offset threshold: Shade
	AWB_NVRAM_SUNSET_AREA_XR_THR,
	AWB_NVRAM_SUNSET_AREA_YR_THR,
	AWB_NVRAM_SHADE_F_AREA_XR_THR,
	AWB_NVRAM_SHADE_F_AREA_YR_THR,
	AWB_NVRAM_SHADE_F_VERTEX_XR_THR,
	AWB_NVRAM_SHADE_F_VERTEX_YR_THR,
	AWB_NVRAM_SHADE_CWF_AREA_XR_THR,
	AWB_NVRAM_SHADE_CWF_AREA_YR_THR,
	AWB_NVRAM_SHADE_CWF_VERTEX_XR_THR,
	AWB_NVRAM_SHADE_CWF_VERTEX_YR_THR,

	// Algorithm tuning paramter
	AWB_NVRAM_AWBBACKUP_EN,
	AWB_NVRAM_PARENT_BLK_WEIGHT_ENBALE, 					// Parent block weight enable
    AWB_NVRAM_PARENT_BLK_WEIGHT_SCALE_FACTOR, 				// Parent block weight scale factor
	AWB_NVRAM_PREDICTOR_INIT_LV_THR_L,
    AWB_NVRAM_PREDICTOR_INIT_LV_THR_H,
    AWB_NVRAM_TEMPORAL_ENQ_LV_THR,
    AWB_NVRAM_TEMPORAL_ENQ_NEUTRAL_BLK_THR,
    AWB_NVRAM_TEMPORAL_ENQ_CWF_BLK_THR,
    AWB_NVRAM_TEMPORAL_ENQ_DF_BLK_THR,
    AWB_NVRAM_SUNSET_EN,
	AWB_NVRAM_SUNSET_LV_THR_L,
	AWB_NVRAM_SUNSET_LV_THR_H,
	AWB_NVRAM_SUNSET_COUNT_THR,
	AWB_NVRAM_SUNSET_COUNT_RATIO_L,
	AWB_NVRAM_SUNSET_COUNT_RATIO_H,
	AWB_NVRAM_SHADE_F_EN,
	AWB_NVRAM_SHADE_F_LV_THR_L,
	AWB_NVRAM_SHADE_F_LV_THR_H,
	AWB_NVRAM_SHADE_F_DAYLIGHT_PROB,
	AWB_NVRAM_SHADE_CWF_EN,
	AWB_NVRAM_SHADE_CWF_LV_THR_L,
	AWB_NVRAM_SHADE_CWF_LV_THR_H,
	AWB_NVRAM_SHADE_CWF_DAYLIGHT_PROB,
	AWB_NVRAM_NONNEUTRAL_PROB_9,
	AWB_NVRAM_NONNEUTRAL_PROB_10,
	AWB_NVRAM_NONNEUTRAL_PROB_11,
	AWB_NVRAM_NONNEUTRAL_PROB_12,
	AWB_NVRAM_DAYLIGHT_LOCUS_H_9,
	AWB_NVRAM_DAYLIGHT_LOCUS_H_10,
	AWB_NVRAM_DAYLIGHT_LOCUS_H_11,
	AWB_NVRAM_DAYLIGHT_LOCUS_H_12,
	AWB_NVRAM_DAYLIGHT_LOCUS_WF_9,
	AWB_NVRAM_DAYLIGHT_LOCUS_WF_10,
	AWB_NVRAM_DAYLIGHT_LOCUS_WF_11,
	AWB_NVRAM_DAYLIGHT_LOCUS_WF_12,
	AWB_NVRAM_DAYLIGHT_LOCUS_F_9,
	AWB_NVRAM_DAYLIGHT_LOCUS_F_10,
	AWB_NVRAM_DAYLIGHT_LOCUS_F_11,
	AWB_NVRAM_DAYLIGHT_LOCUS_F_12,
	AWB_NVRAM_DAYLIGHT_LOCUS_CWF_9,
	AWB_NVRAM_DAYLIGHT_LOCUS_CWF_10,
	AWB_NVRAM_DAYLIGHT_LOCUS_CWF_11,
	AWB_NVRAM_DAYLIGHT_LOCUS_CWF_12,
	AWB_NVRAM_DAYLIGHT_LOCUS_D_9,
	AWB_NVRAM_DAYLIGHT_LOCUS_D_10,
	AWB_NVRAM_DAYLIGHT_LOCUS_D_11,
	AWB_NVRAM_DAYLIGHT_LOCUS_D_12,
	AWB_NVRAM_DAYLIGHT_LOCUS_S_9,
	AWB_NVRAM_DAYLIGHT_LOCUS_S_10,
	AWB_NVRAM_DAYLIGHT_LOCUS_S_11,
	AWB_NVRAM_DAYLIGHT_LOCUS_S_12,
	AWB_NVRAM_DAYLIGHT_LOCUS_DF_9,
	AWB_NVRAM_DAYLIGHT_LOCUS_DF_10,
	AWB_NVRAM_DAYLIGHT_LOCUS_DF_11,
	AWB_NVRAM_DAYLIGHT_LOCUS_DF_12,

	// CCT Estimation
	AWB_NVRAM_CCT_HORIZON, // CCT: Horizon
	AWB_NVRAM_CCT_A,       // CCT: A
	AWB_NVRAM_CCT_TL84,    // CCT: TL84
	AWB_NVRAM_CCT_DNP,     // CCT: DNP
	AWB_NVRAM_CCT_D65,     // CCT: D65
	AWB_NVRAM_XR_HORIZON,  // Xr: Horizon
	AWB_NVRAM_XR_A,        // Xr: A
	AWB_NVRAM_XR_TL84,     // Xr: TL84
	AWB_NVRAM_XR_DNP,      // Xr: DNP
	AWB_NVRAM_XR_D65,      // Xr: D65

    // AE Histgram Info
    AWB_AE_HIST_Y0,
    AWB_AE_HIST_Y1,
    AWB_AE_HIST_Y2,
    AWB_AE_HIST_Y3,
    AWB_AE_HIST_Y4,
    AWB_AE_HIST_Y5,
    AWB_AE_HIST_Y6,
    AWB_AE_HIST_Y7,
    AWB_AE_HIST_Y8,
    AWB_AE_HIST_Y9,
    AWB_AE_HIST_Y10,
    AWB_AE_HIST_Y11,
    AWB_AE_HIST_Y12,
    AWB_AE_HIST_Y13,
    AWB_AE_HIST_Y14,
    AWB_AE_HIST_Y15,
    AWB_AE_HIST_Y16,
    AWB_AE_HIST_Y17,
    AWB_AE_HIST_Y18,
    AWB_AE_HIST_Y19,
    AWB_AE_HIST_Y20,
    AWB_AE_HIST_Y21,
    AWB_AE_HIST_Y22,
    AWB_AE_HIST_Y23,
    AWB_AE_HIST_Y24,
    AWB_AE_HIST_Y25,
    AWB_AE_HIST_Y26,
    AWB_AE_HIST_Y27,
    AWB_AE_HIST_Y28,
    AWB_AE_HIST_Y29,
    AWB_AE_HIST_Y30,
    AWB_AE_HIST_Y31,
    AWB_AE_HIST_Y32,
    AWB_AE_HIST_Y33,
    AWB_AE_HIST_Y34,
    AWB_AE_HIST_Y35,
    AWB_AE_HIST_Y36,
    AWB_AE_HIST_Y37,
    AWB_AE_HIST_Y38,
    AWB_AE_HIST_Y39,
    AWB_AE_HIST_Y40,
    AWB_AE_HIST_Y41,
    AWB_AE_HIST_Y42,
    AWB_AE_HIST_Y43,
    AWB_AE_HIST_Y44,
    AWB_AE_HIST_Y45,
    AWB_AE_HIST_Y46,
    AWB_AE_HIST_Y47,
    AWB_AE_HIST_Y48,
    AWB_AE_HIST_Y49,
    AWB_AE_HIST_Y50,
    AWB_AE_HIST_Y51,
    AWB_AE_HIST_Y52,
    AWB_AE_HIST_Y53,
    AWB_AE_HIST_Y54,
    AWB_AE_HIST_Y55,
    AWB_AE_HIST_Y56,
    AWB_AE_HIST_Y57,
    AWB_AE_HIST_Y58,
    AWB_AE_HIST_Y59,
    AWB_AE_HIST_Y60,
    AWB_AE_HIST_Y61,
    AWB_AE_HIST_Y62,
    AWB_AE_HIST_Y63,
    AWB_AE_HIST_Y64,
    AWB_AE_HIST_Y65,
    AWB_AE_HIST_Y66,
    AWB_AE_HIST_Y67,
    AWB_AE_HIST_Y68,
    AWB_AE_HIST_Y69,
    AWB_AE_HIST_Y70,
    AWB_AE_HIST_Y71,
    AWB_AE_HIST_Y72,
    AWB_AE_HIST_Y73,
    AWB_AE_HIST_Y74,
    AWB_AE_HIST_Y75,
    AWB_AE_HIST_Y76,
    AWB_AE_HIST_Y77,
    AWB_AE_HIST_Y78,
    AWB_AE_HIST_Y79,
    AWB_AE_HIST_Y80,
    AWB_AE_HIST_Y81,
    AWB_AE_HIST_Y82,
    AWB_AE_HIST_Y83,
    AWB_AE_HIST_Y84,
    AWB_AE_HIST_Y85,
    AWB_AE_HIST_Y86,
    AWB_AE_HIST_Y87,
    AWB_AE_HIST_Y88,
    AWB_AE_HIST_Y89,
    AWB_AE_HIST_Y90,
    AWB_AE_HIST_Y91,
    AWB_AE_HIST_Y92,
    AWB_AE_HIST_Y93,
    AWB_AE_HIST_Y94,
    AWB_AE_HIST_Y95,
    AWB_AE_HIST_Y96,
    AWB_AE_HIST_Y97,
    AWB_AE_HIST_Y98,
    AWB_AE_HIST_Y99,
    AWB_AE_HIST_Y100,
    AWB_AE_HIST_Y101,
    AWB_AE_HIST_Y102,
    AWB_AE_HIST_Y103,
    AWB_AE_HIST_Y104,
    AWB_AE_HIST_Y105,
    AWB_AE_HIST_Y106,
    AWB_AE_HIST_Y107,
    AWB_AE_HIST_Y108,
    AWB_AE_HIST_Y109,
    AWB_AE_HIST_Y110,
    AWB_AE_HIST_Y111,
    AWB_AE_HIST_Y112,
    AWB_AE_HIST_Y113,
    AWB_AE_HIST_Y114,
    AWB_AE_HIST_Y115,
    AWB_AE_HIST_Y116,
    AWB_AE_HIST_Y117,
    AWB_AE_HIST_Y118,
    AWB_AE_HIST_Y119,
    AWB_AE_HIST_Y120,
    AWB_AE_HIST_Y121,
    AWB_AE_HIST_Y122,
    AWB_AE_HIST_Y123,
    AWB_AE_HIST_Y124,
    AWB_AE_HIST_Y125,
    AWB_AE_HIST_Y126,
    AWB_AE_HIST_Y127,

    // AWB tuning information
	AWB_TAG_PROJ_CODE,      // AWB tag project code
	AWB_TAG_MODEL,          // AWB tag model
	AWB_TAG_DATE,           // AWB tag date
	AWB_TAG_INFO_0,         // AWB tag info_0
	AWB_TAG_INFO_1,         // AWB tag info_1
	AWB_TAG_INFO_2,         // AWB tag info_2
	AWB_TAG_INFO_3,         // AWB tag info_3
	AWB_TAG_INFO_4,         // AWB tag info_4
    AWB_TAG_INFO_5, 
    AWB_TAG_INFO_6, 
    AWB_TAG_INFO_7, 
    AWB_TAG_INFO_8, 
    AWB_TAG_INFO_9, 

    // AWB customization information
    AWB_TAG_CUST_GAIN_R,
    AWB_TAG_CUST_GAIN_G,
    AWB_TAG_CUST_GAIN_B,
    AWB_TAG_CUST_INFO_0,
    AWB_TAG_CUST_INFO_1,
    AWB_TAG_CUST_INFO_2,
    AWB_TAG_CUST_INFO_3,
    AWB_TAG_CUST_INFO_4,
    AWB_TAG_CUST_INFO_5,
    AWB_TAG_CUST_INFO_6,
    AWB_TAG_CUST_INFO_7,

    // Flash AWB
    REV_STROBE_AWB_ALGO,
    FL_AWB_VERSION,
    FL_AWB_PURE_FLASH_RGAIN,
    FL_AWB_PURE_FLASH_GGAIN,
    FL_AWB_PURE_FLASH_BAIN,
    FL_AWB_NO_FLASH_RGAIN,
    FL_AWB_NO_FLASH_GGAIN,
    FL_AWB_NO_FLASH_BGAIN,
    FL_AWB_PREFERENCE_RGAIN,
    FL_AWB_PREFERENCE_GGAIN,
    FL_AWB_PREFERENCE_BGAIN,
    FL_AWB_FIANL_WEIGHT,
    FL_AWB_RESULT_RGAIN,
    FL_AWB_RESULT_GGAIN,
    FL_AWB_RESULT_BGAIN,

	AWB_TAG_NUM
};

typedef enum
{
    AWB_TAG_95_K2 = 0,
    AWB_TAG_D1_D2_D3,
    AWB_TAG_95_K2_F_CWF_SMOOTH,
    AWB_TAG_JADE,
} AWB_TAG_VER_E;


#define AWB_DEBUG_TAG_VERSION   (AWB_TAG_JADE)
#define AWB_DEBUG_TAG_SIZE      (AWB_TAG_NUM + 10)

typedef struct
{
    AAA_DEBUG_TAG_T Tag[AWB_DEBUG_TAG_SIZE];
} AWB_DEBUG_INFO_T;

#define DBG_AWB_WINDOW_NUM_MAX_X (125)
#define DBG_AWB_WINDOW_NUM_MAX_Y (125)
#define DBG_AWB_PARENT_BLK_SIZE_X (5)
#define DBG_AWB_PARENT_BLK_SIZE_Y (5)
#define DBG_AWB_PARENT_BLK_NUM_MAX_X (DBG_AWB_WINDOW_NUM_MAX_X/DBG_AWB_PARENT_BLK_SIZE_X)
#define DBG_AWB_PARENT_BLK_NUM_MAX_Y (DBG_AWB_WINDOW_NUM_MAX_Y/DBG_AWB_PARENT_BLK_SIZE_Y)

typedef struct
{
    MINT32 i4Size; // sizeof(AWB_DEBUG_DATA_T)
    // Is AWB auto mode
    MINT32 i4IsAWBAutoMode; // 0: false, 1: true
    // Is strobe fired
    MINT32 i4IsStrobeFired; // 0: strobe is not fired ==> do not draw light area of strobe
    // Parent block number
    MINT32 i4ParentBlkNum_X;
    MINT32 i4ParentBlkNum_Y;
    // Sensor dimension
    MINT32 i4SensorWidth;
    MINT32 i4SensorHeight;
    // horizontal and vertical Offset of the first parent block (upper left)
    MINT32 i4OffsetH;
    MINT32 i4OffsetV;
    // Parent block info
    MINT32 i4ParentBlkWidth;
    MINT32 i4ParentBlkHeight;
	MINT32 i4SumR[DBG_AWB_PARENT_BLK_NUM_MAX_Y][DBG_AWB_PARENT_BLK_NUM_MAX_X]; // R summation of specified light source of specified parent block
	MINT32 i4SumG[DBG_AWB_PARENT_BLK_NUM_MAX_Y][DBG_AWB_PARENT_BLK_NUM_MAX_X]; // G summation of specified light source of specified parent block
	MINT32 i4SumB[DBG_AWB_PARENT_BLK_NUM_MAX_Y][DBG_AWB_PARENT_BLK_NUM_MAX_X]; // B summation of specified light source of specified parent block
	MINT32 i4ChildBlkNum[DBG_AWB_PARENT_BLK_NUM_MAX_Y][DBG_AWB_PARENT_BLK_NUM_MAX_X]; // Child block number of specified light source of specified parent block
	MINT32 i4Light[DBG_AWB_PARENT_BLK_NUM_MAX_Y][DBG_AWB_PARENT_BLK_NUM_MAX_X]; // Light source of specified parent block
    // XY coordinate as the central point of debug image
    MINT32 i4CentralX; // D65
    MINT32 i4CentralY; // D65
    // Rotation matrix
    MINT32 i4Cos;
    MINT32 i4Sin;
    // Strobe light area
    MINT32 i4RightBound_Strobe;
    MINT32 i4LeftBound_Strobe;
    MINT32 i4UpperBound_Strobe;
    MINT32 i4LowerBound_Strobe;
    // Tungsten light area
    MINT32 i4RightBound_Tungsten;
    MINT32 i4LeftBound_Tungsten;
    MINT32 i4UpperBound_Tungsten;
    MINT32 i4LowerBound_Tungsten;
    // Warm fluorescent light area
    MINT32 i4RightBound_WarmFluorescent;
    MINT32 i4LeftBound_WarmFluorescent;
    MINT32 i4UpperBound_WarmFluorescent;
    MINT32 i4LowerBound_WarmFluorescent;
    // Fluorescent light area
    MINT32 i4RightBound_Fluorescent;
    MINT32 i4LeftBound_Fluorescent;
    MINT32 i4UpperBound_Fluorescent;
    MINT32 i4LowerBound_Fluorescent;
    // CWF light area
    MINT32 i4RightBound_CWF;
    MINT32 i4LeftBound_CWF;
    MINT32 i4UpperBound_CWF;
    MINT32 i4LowerBound_CWF;
    // Daylight light area
    MINT32 i4RightBound_Daylight;
    MINT32 i4LeftBound_Daylight;
    MINT32 i4UpperBound_Daylight;
    MINT32 i4LowerBound_Daylight;
    // Shade light area
    MINT32 i4RightBound_Shade;
    MINT32 i4LeftBound_Shade;
    MINT32 i4UpperBound_Shade;
    MINT32 i4LowerBound_Shade;
    // Daylight fluorescent light area
    MINT32 i4RightBound_DaylightFluorescent;
    MINT32 i4LeftBound_DaylightFluorescent;
    MINT32 i4UpperBound_DaylightFluorescent;
    MINT32 i4LowerBound_DaylightFluorescent;
} AWB_DEBUG_DATA_T;



#endif // _DBG_AWB_PARAM_H_
