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


#define DBG_AWB_PARAM_REVISION 	6511001

// AWB Debug Tag
enum
{
	// AWB
    // BEGIN_OF_EXIF_TAG
	AWB_TAG_VERSION = 0,
	AWB_TAG_MODE,
	AWB_TAG_ALGO_SCENE_LV,
    AWB_TAG_AAO_MODE,
    AWB_TAG_SCENARIO,
    AWB_TAG_GAIN_R,
    AWB_TAG_GAIN_G,
	AWB_TAG_GAIN_B,
	AWB_TAG_ALG_GAIN_R,
	AWB_TAG_ALG_GAIN_G,
	AWB_TAG_ALG_GAIN_B,
    AWB_TAG_AWB_GAIN_NO_PREF_R,
    AWB_TAG_AWB_GAIN_NO_PREF_G,
    AWB_TAG_AWB_GAIN_NO_PREF_B,
	AWB_TAG_RELIABLE_MODE,
	AWB_TAG_TEMPO_BUFF_IDX,
	AWB_TAG_NONEUTRAL_PROB,
	AWB_TAG_NONEUTRAL_SPAT_GAIN_R,
	AWB_TAG_NONEUTRAL_SPAT_GAIN_G,
	AWB_TAG_NONEUTRAL_SPAT_GAIN_B,
	AWB_TAG_NONEUTRAL_TEMPO_GAIN_R,
	AWB_TAG_NONEUTRAL_TEMPO_GAIN_G,
	AWB_TAG_NONEUTRAL_TEMPO_GAIN_B,
	AWB_TAG_NONEUTRAL_EQV_GAIN_R,
	AWB_TAG_NONEUTRAL_EQV_GAIN_G,
	AWB_TAG_NONEUTRAL_EQV_GAIN_B,
    AWB_TAG_P0_STB,
	AWB_TAG_P0_T,
	AWB_TAG_P0_WF,
	AWB_TAG_P0_F,
	AWB_TAG_P0_CWF,
	AWB_TAG_P0_D,
    AWB_TAG_P0_S,
    AWB_TAG_P0_DF,
	AWB_TAG_P1_STB,
	AWB_TAG_P1_T,
	AWB_TAG_P1_WF,
	AWB_TAG_P1_F,
	AWB_TAG_P1_CWF,
	AWB_TAG_P1_D,
    AWB_TAG_P1_S,
    AWB_TAG_P1_DF,
	AWB_TAG_P2_STB,
	AWB_TAG_P2_T,
	AWB_TAG_P2_WF,
	AWB_TAG_P2_F,
	AWB_TAG_P2_CWF,
	AWB_TAG_P2_D,
    AWB_TAG_P2_S,
    AWB_TAG_P2_DF,
	AWB_TAG_P_STB,
	AWB_TAG_P_T,
	AWB_TAG_P_WF,
	AWB_TAG_P_F,
	AWB_TAG_P_CWF,
	AWB_TAG_P_D,
    AWB_TAG_P_S,
    AWB_TAG_P_DF,
    AWB_TAG_STA_GAIN_R_STB,
    AWB_TAG_STA_GAIN_G_STB,
    AWB_TAG_STA_GAIN_B_STB,
    AWB_TAG_SPAT_GAIN_R_STB,
    AWB_TAG_SPAT_GAIN_G_STB,
    AWB_TAG_SPAT_GAIN_B_STB,
    AWB_TAG_HIT_NR_STB,
    AWB_TAG_DAYLIGHT_PROB_STB,
    AWB_TAG_EQV_DAYLIGHT_PROB_STB,
    AWB_TAG_EQV_GAIN_R_STB,
    AWB_TAG_EQV_GAIN_G_STB,
    AWB_TAG_EQV_GAIN_B_STB,
    AWB_TAG_STA_GAIN_R_T,
    AWB_TAG_STA_GAIN_G_T,
    AWB_TAG_STA_GAIN_B_T,
    AWB_TAG_SPAT_GAIN_R_T,
    AWB_TAG_SPAT_GAIN_G_T,
    AWB_TAG_SPAT_GAIN_B_T,
    AWB_TAG_HIT_NR_T,
    AWB_TAG_DAYLIGHT_PROB_T,
    AWB_TAG_EQV_DAYLIGHT_PROB_T,
    AWB_TAG_EQV_GAIN_R_T,
    AWB_TAG_EQV_GAIN_G_T,
    AWB_TAG_EQV_GAIN_B_T,
    AWB_TAG_STA_GAIN_R_WF,
    AWB_TAG_STA_GAIN_G_WF,
    AWB_TAG_STA_GAIN_B_WF,
    AWB_TAG_SPAT_GAIN_R_WF,
    AWB_TAG_SPAT_GAIN_G_WF,
    AWB_TAG_SPAT_GAIN_B_WF,
    AWB_TAG_HIT_NR_WF,
    AWB_TAG_DAYLIGHT_PROB_WF,
    AWB_TAG_EQV_DAYLIGHT_PROB_WF,
    AWB_TAG_EQV_GAIN_R_WF,
    AWB_TAG_EQV_GAIN_G_WF,
    AWB_TAG_EQV_GAIN_B_WF,
	AWB_TAG_STA_GAIN_R_F,
    AWB_TAG_STA_GAIN_G_F,
    AWB_TAG_STA_GAIN_B_F,
    AWB_TAG_SPAT_GAIN_R_F,
    AWB_TAG_SPAT_GAIN_G_F,
    AWB_TAG_SPAT_GAIN_B_F,
    AWB_TAG_HIT_NR_F,
    AWB_TAG_DAYLIGHT_PROB_F,
    AWB_TAG_EQV_DAYLIGHT_PROB_F,
    AWB_TAG_EQV_GAIN_R_F,
    AWB_TAG_EQV_GAIN_G_F,
    AWB_TAG_EQV_GAIN_B_F,
	AWB_TAG_STA_GAIN_R_CWF,
    AWB_TAG_STA_GAIN_G_CWF,
    AWB_TAG_STA_GAIN_B_CWF,
    AWB_TAG_SPAT_GAIN_R_CWF,
    AWB_TAG_SPAT_GAIN_G_CWF,
    AWB_TAG_SPAT_GAIN_B_CWF,
    AWB_TAG_HIT_NR_CWF,
    AWB_TAG_DAYLIGHT_PROB_CWF,
    AWB_TAG_EQV_DAYLIGHT_PROB_CWF,
    AWB_TAG_EQV_GAIN_R_CWF,
    AWB_TAG_EQV_GAIN_G_CWF,
    AWB_TAG_EQV_GAIN_B_CWF,
	AWB_TAG_STA_GAIN_R_D,
    AWB_TAG_STA_GAIN_G_D,
    AWB_TAG_STA_GAIN_B_D,
    AWB_TAG_SPAT_GAIN_R_D,
    AWB_TAG_SPAT_GAIN_G_D,
    AWB_TAG_SPAT_GAIN_B_D,
    AWB_TAG_HIT_NR_D,
    AWB_TAG_DAYLIGHT_PROB_D,
    AWB_TAG_EQV_DAYLIGHT_PROB_D,
    AWB_TAG_EQV_GAIN_R_D,
    AWB_TAG_EQV_GAIN_G_D,
    AWB_TAG_EQV_GAIN_B_D,
	AWB_TAG_STA_GAIN_R_S,
    AWB_TAG_STA_GAIN_G_S,
    AWB_TAG_STA_GAIN_B_S,
    AWB_TAG_SPAT_GAIN_R_S,
    AWB_TAG_SPAT_GAIN_G_S,
    AWB_TAG_SPAT_GAIN_B_S,
    AWB_TAG_HIT_NR_S,
    AWB_TAG_DAYLIGHT_PROB_S,
    AWB_TAG_EQV_DAYLIGHT_PROB_S,
    AWB_TAG_EQV_GAIN_R_S,
    AWB_TAG_EQV_GAIN_G_S,
    AWB_TAG_EQV_GAIN_B_S,
	AWB_TAG_STA_GAIN_R_DF,
    AWB_TAG_STA_GAIN_G_DF,
    AWB_TAG_STA_GAIN_B_DF,
    AWB_TAG_SPAT_GAIN_R_DF,
    AWB_TAG_SPAT_GAIN_G_DF,
    AWB_TAG_SPAT_GAIN_B_DF,
    AWB_TAG_HIT_NR_DF,
    AWB_TAG_DAYLIGHT_PROB_DF,
    AWB_TAG_EQV_DAYLIGHT_PROB_DF,
    AWB_TAG_EQV_GAIN_R_DF,
    AWB_TAG_EQV_GAIN_G_DF,
    AWB_TAG_EQV_GAIN_B_DF,
    AWB_TAG_HIT_SUNSET_D,
    AWB_TAG_SHADE_XR_F,
    AWB_TAG_SHADE_YR_F,
    AWB_TAG_SHADE_COUNT_F,
    AWB_TAG_SHADE_TARGET_PROB_F,
    AWB_TAG_SHADE_XR_CWF,
    AWB_TAG_SHADE_YR_CWF,
    AWB_TAG_SHADE_COUNT_CWF,
    AWB_TAG_SHADE_TARGET_PROB_CWF,
    AWB_TAG_EXTRACOLOR_INFO_COUNT,
    AWB_TAG_EXTRACOLOR_INFO_WEI,
    AWB_TAG_EXTRACOLOR_INFO_GAIN_R,
    AWB_TAG_EXTRACOLOR_INFO_GAIN_G,
    AWB_TAG_EXTRACOLOR_INFO_GAIN_B,
    AWB_TAG_PB_NUM_THR_NONNEUTRAL,
    AWB_TAG_PB_NUM_THR_STB,
    AWB_TAG_PB_NUM_THR_T,
    AWB_TAG_PB_NUM_THR_WF,
    AWB_TAG_PB_NUM_THR_F,
    AWB_TAG_PB_NUM_THR_CWF,
    AWB_TAG_PB_NUM_THR_D,
    AWB_TAG_PB_NUM_THR_S,
    AWB_TAG_PB_NUM_THR_DF,
    AWB_TAG_NEUTRAL_PB_NUM_STB,
    AWB_TAG_NEUTRAL_PB_NUM_T,
    AWB_TAG_NEUTRAL_PB_NUM_WF,
    AWB_TAG_NEUTRAL_PB_NUM_F,
    AWB_TAG_NEUTRAL_PB_NUM_CWF,
    AWB_TAG_NEUTRAL_PB_NUM_D,
    AWB_TAG_NEUTRAL_PB_NUM_S,
    AWB_TAG_NEUTRAL_PB_NUM_DF,
    AWB_TAG_NEUTRAL_PB_NUM,
    AWB_TAG_LIGHT_MODE,
    AWB_TAG_STAT_ERR_COUNT,
    AWB_TAG_STAT_MO_COUNT,
    AWB_TAG_STAT_ERR_MO_COUNT,
    AWB_TAG_CHILD_BLK_NUM_THR,
    AWB_TAG_ONE_SHOT_SMOOTH_ENABLE,
    AWB_TAG_ONE_SHOT_SMOOTH_LV_L,
    AWB_TAG_ONE_SHOT_SMOOTH_LV_H,
    AWB_TAG_SPAT_LV_THR_L_STB,
    AWB_TAG_SPAT_LV_THR_H_STB,
    AWB_TAG_SPAT_LV_THR_L_T,
    AWB_TAG_SPAT_LV_THR_H_T,
    AWB_TAG_SPAT_LV_THR_L_WF,
    AWB_TAG_SPAT_LV_THR_H_WF,
    AWB_TAG_SPAT_LV_THR_L_F,
    AWB_TAG_SPAT_LV_THR_H_F,
    AWB_TAG_SPAT_LV_THR_L_CWF,
    AWB_TAG_SPAT_LV_THR_H_CWF,
    AWB_TAG_SPAT_LV_THR_L_D,
    AWB_TAG_SPAT_LV_THR_H_D,
    AWB_TAG_SPAT_LV_THR_L_S,
    AWB_TAG_SPAT_LV_THR_H_S,
    AWB_TAG_SPAT_LV_THR_L_DF,
    AWB_TAG_SPAT_LV_THR_H_DF,
    AWB_TAG_PRE_COLOR_LV_THR_L_T,
    AWB_TAG_PRE_COLOR_LV_THR_H_T,
    AWB_TAG_PRE_COLOR_LV_THR_L_WF,
    AWB_TAG_PRE_COLOR_LV_THR_H_WF,
    AWB_TAG_PRE_COLOR_LV_THR_L_S,
    AWB_TAG_PRE_COLOR_LV_THR_H_S,
    AWB_TAG_STATS_R_STB,
    AWB_TAG_STATS_G_STB,
    AWB_TAG_STATS_B_STB,
    AWB_TAG_STATS_R_T,
    AWB_TAG_STATS_G_T,
    AWB_TAG_STATS_B_T,
    AWB_TAG_STATS_R_WF,
    AWB_TAG_STATS_G_WF,
    AWB_TAG_STATS_B_WF,
    AWB_TAG_STATS_R_F,
    AWB_TAG_STATS_G_F,
    AWB_TAG_STATS_B_F,
    AWB_TAG_STATS_R_CWF,
    AWB_TAG_STATS_G_CWF,
    AWB_TAG_STATS_B_CWF,
    AWB_TAG_STATS_R_D,
    AWB_TAG_STATS_G_D,
    AWB_TAG_STATS_B_D,
    AWB_TAG_STATS_R_S,
    AWB_TAG_STATS_G_S,
    AWB_TAG_STATS_B_S,
    AWB_TAG_STATS_R_DF,
    AWB_TAG_STATS_G_DF,
    AWB_TAG_STATS_B_DF,
    AWB_TAG_AVG_XR_STB,
    AWB_TAG_AVG_YR_STB,
    AWB_TAG_AVG_XR_T,
    AWB_TAG_AVG_YR_T,
    AWB_TAG_AVG_XR_WF,
    AWB_TAG_AVG_YR_WF,
    AWB_TAG_AVG_XR_F,
    AWB_TAG_AVG_YR_F,
    AWB_TAG_AVG_XR_CWF,
    AWB_TAG_AVG_YR_CWF,
    AWB_TAG_AVG_XR_D,
    AWB_TAG_AVG_YR_D,
    AWB_TAG_AVG_XR_S,
    AWB_TAG_AVG_YR_S,
    AWB_TAG_AVG_XR_DF,
    AWB_TAG_AVG_YR_DF,
    AWB_TAG_LIMIT_STB,
    AWB_TAG_LIMIT_T,
    AWB_TAG_LIMIT_WF,
    AWB_TAG_LIMIT_F,
    AWB_TAG_LIMIT_CWF,
    AWB_TAG_LIMIT_D,
    AWB_TAG_LIMIT_S,
    AWB_TAG_LIMIT_DF,
    AWB_TAG_DAY_LOCUS_OFFSET_T,
    AWB_TAG_NEW_OFFSET_T,
    AWB_TAG_OFFSET_RATIO_T,
    AWB_TAG_RATIO_OFFSET_T,
    AWB_TAG_LUT_OFFSET_T,
    AWB_TAG_IS_ABOVE_DAY_LOCUS_T,
    AWB_TAG_GM_OFFSET_T,
    AWB_TAG_GM_OFFSET_THR_T,
    AWB_TAG_WEIGHT_T,
    AWB_TAG_DAY_LOCUS_OFFSET_WF,
    AWB_TAG_NEW_OFFSET_WF,
    AWB_TAG_OFFSET_RATIO_WF,
    AWB_TAG_RATIO_OFFSET_WF,
    AWB_TAG_LUT_OFFSET_WF,
    AWB_TAG_IS_ABOVE_DAY_LOCUS_WF,
    AWB_TAG_GM_OFFSET_WF,
    AWB_TAG_GM_OFFSET_THR_WF,
    AWB_TAG_WEIGHT_WF,
    AWB_TAG_DAY_LOCUS_OFFSET_S,
    AWB_TAG_NEW_OFFSET_S,
    AWB_TAG_OFFSET_RATIO_S,
    AWB_TAG_RATIO_OFFSET_S,
    AWB_TAG_LUT_OFFSET_S,
    AWB_TAG_IS_ABOVE_DAY_LOCUS_S,
    AWB_TAG_GM_OFFSET_S,
    AWB_TAG_GM_OFFSET_THR_S,
    AWB_TAG_WEIGHT_S,
    PWB_TAG_NEUTRAL_AREA_PB_NUM,
    PWB_TAG_REFERENCE_AREA_PB_NUM,
    PWB_TAG_PB_NUM,
    PWB_TAG_DEFAULT_GAIN_R,
    PWB_TAG_DEFAULT_GAIN_G,
    PWB_TAG_DEFAULT_GAIN_B,
    PWB_TAG_GAIN_NEUTRAL_AREA_R,
    PWB_TAG_GAIN_NEUTRAL_AREA_G,
    PWB_TAG_GAIN_NEUTRAL_AREA_B,
    PWB_TAG_GAIN_REFERENCE_AREA_R,
    PWB_TAG_GAIN_REFERENCE_AREA_G,
    PWB_TAG_GAIN_REFERENCE_AREA_B,
    PWB_TAG_LIGHT_SOURCE,
    PWB_TAG_LIGHT_REFERENCE_AREA_XOR,
    PWB_TAG_LIGHT_REFERENCE_AREA_YOR,
    PWB_TAG_LIGHT_REFERENCE_AREA_XPR,
    PWB_TAG_LIGHT_REFERENCE_AREA_YPR,
    PWB_TAG_MWB_CCT,
    PWB_TAG_MWB_CENTER_XR,
    PWB_TAG_MWB_CENTER_YR,
    PWB_TAG_MWB_RANGE_X,
    PWB_TAG_MWB_RANGE_Y,
    AWB_TAG_STAT_CONFIG_WINDOW_SIZE_X,
    AWB_TAG_STAT_CONFIG_WINDOW_SIZE_Y,
    AWB_TAG_STAT_CONFIG_WINDOW_PITCH_X,
    AWB_TAG_STAT_CONFIG_WINDOW_PITCH_Y,
    AWB_TAG_STAT_CONFIG_WINDOW_ORIGIN_X,
    AWB_TAG_STAT_CONFIG_WINDOW_ORIGIN_Y,
    AWB_TAG_STAT_CONFIG_WINDOW_NUM_X,
    AWB_TAG_STAT_CONFIG_WINDOW_NUM_Y,
    AWB_TAG_STAT_CONFIG_LOW_THR_R,
    AWB_TAG_STAT_CONFIG_LOW_THR_G,
    AWB_TAG_STAT_CONFIG_LOW_THR_B,
    AWB_TAG_STAT_CONFIG_HIGH_THR_R,
    AWB_TAG_STAT_CONFIG_HIGH_THR_G,
    AWB_TAG_STAT_CONFIG_HIGH_THR_B,
    AWB_TAG_STAT_CONFIG_PIXEL_COUNT_R,
    AWB_TAG_STAT_CONFIG_PIXEL_COUNT_G,
    AWB_TAG_STAT_CONFIG_PIXEL_COUNT_B,
    AWB_TAG_STAT_CONFIG_PREGAIN_LIMIT_R,
    AWB_TAG_STAT_CONFIG_PREGAIN_LIMIT_G,
    AWB_TAG_STAT_CONFIG_PREGAIN_LIMIT_B,
    AWB_TAG_STAT_CONFIG_PREGAIN_R,
    AWB_TAG_STAT_CONFIG_PREGAIN_G,
    AWB_TAG_STAT_CONFIG_PREGAIN_B,
    AWB_TAG_STAT_ERROR_SHIFT_BIT,
    AWB_TAG_STAT_ERROR_THR,
    AWB_TAG_STAT_MO_ERROR_THR,
    AWB_TAG_STAT_ROTATION_MATRIX_COS,
    AWB_TAG_STAT_ROTATION_MATRIX_SIN,
    AWB_TAG_STAT_CONFIG_AWBXY_WINR0,
    AWB_TAG_STAT_CONFIG_AWBXY_WINL0,
    AWB_TAG_STAT_CONFIG_AWBXY_WIND0,
    AWB_TAG_STAT_CONFIG_AWBXY_WINU0,
    AWB_TAG_STAT_CONFIG_AWBXY_WINR1,
    AWB_TAG_STAT_CONFIG_AWBXY_WINL1,
    AWB_TAG_STAT_CONFIG_AWBXY_WIND1,
    AWB_TAG_STAT_CONFIG_AWBXY_WINU1,
    AWB_TAG_STAT_CONFIG_AWBXY_WINR2,
    AWB_TAG_STAT_CONFIG_AWBXY_WINL2,
    AWB_TAG_STAT_CONFIG_AWBXY_WIND2,
    AWB_TAG_STAT_CONFIG_AWBXY_WINU2,
    AWB_TAG_STAT_CONFIG_AWBXY_WINR3,
    AWB_TAG_STAT_CONFIG_AWBXY_WINL3,
    AWB_TAG_STAT_CONFIG_AWBXY_WIND3,
    AWB_TAG_STAT_CONFIG_AWBXY_WINU3,
    AWB_TAG_STAT_CONFIG_AWBXY_WINR4,
    AWB_TAG_STAT_CONFIG_AWBXY_WINL4,
    AWB_TAG_STAT_CONFIG_AWBXY_WIND4,
    AWB_TAG_STAT_CONFIG_AWBXY_WINU4,
    AWB_TAG_STAT_CONFIG_AWBXY_WINR5,
    AWB_TAG_STAT_CONFIG_AWBXY_WINL5,
    AWB_TAG_STAT_CONFIG_AWBXY_WIND5,
    AWB_TAG_STAT_CONFIG_AWBXY_WINU5,
    AWB_TAG_STAT_CONFIG_AWBXY_WINR6,
    AWB_TAG_STAT_CONFIG_AWBXY_WINL6,
    AWB_TAG_STAT_CONFIG_AWBXY_WIND6,
    AWB_TAG_STAT_CONFIG_AWBXY_WINU6,
    AWB_TAG_STAT_CONFIG_AWBXY_WINR7,
    AWB_TAG_STAT_CONFIG_AWBXY_WINL7,
    AWB_TAG_STAT_CONFIG_AWBXY_WIND7,
    AWB_TAG_STAT_CONFIG_AWBXY_WINU7,
    AWB_TAG_STAT_CONFIG_AWBXY_WINR8,
    AWB_TAG_STAT_CONFIG_AWBXY_WINL8,
    AWB_TAG_STAT_CONFIG_AWBXY_WIND8,
    AWB_TAG_STAT_CONFIG_AWBXY_WINU8,
    AWB_TAG_STAT_CONFIG_AWBXY_WINR9,
    AWB_TAG_STAT_CONFIG_AWBXY_WINL9,
    AWB_TAG_STAT_CONFIG_AWBXY_WIND9,
    AWB_TAG_STAT_CONFIG_AWBXY_WINU9,
    AWB_TAG_SMOOTHSTAT_ENABLE,
    AWB_TAG_SMOOTHSTAT_OFFSET_STB,
    AWB_TAG_SMOOTHSTAT_OFFSET_T,
    AWB_TAG_SMOOTHSTAT_OFFSET_WF,
    AWB_TAG_SMOOTHSTAT_OFFSET_F,
    AWB_TAG_SMOOTHSTAT_OFFSET_CWF,
    AWB_TAG_SMOOTHSTAT_OFFSET_D,
    AWB_TAG_SMOOTHSTAT_OFFSET_S,
    AWB_TAG_SMOOTHSTAT_OFFSET_DF,
    AWB_TAG_SMOOTHSTAT_DIST_THR_STB,
    AWB_TAG_SMOOTHSTAT_DIST_THR_T,
    AWB_TAG_SMOOTHSTAT_DIST_THR_WF,
    AWB_TAG_SMOOTHSTAT_DIST_THR_F,
    AWB_TAG_SMOOTHSTAT_DIST_THR_CWF,
    AWB_TAG_SMOOTHSTAT_DIST_THR_D,
    AWB_TAG_SMOOTHSTAT_DIST_THR_S,
    AWB_TAG_SMOOTHSTAT_DIST_THR_DF,
    AWB_TAG_FACE_AWB_ENABLE,
    AWB_TAG_NO_STAT_FACE_AREA_ENABLE,
    AWB_TAG_FACE_NUM,
    AWB_TAG_FACE_WIN_RATIO,
    AWB_TAG_FACE_MAX_WINR,
    AWB_TAG_FACE_MAX_WINL,
    AWB_TAG_FACE_MAX_WIND,
    AWB_TAG_FACE_MAX_WINU,
    AWB_TAG_FACE_MAX_SCALE_WINR,
    AWB_TAG_FACE_MAX_SCALE_WINL,
    AWB_TAG_FACE_MAX_SCALE_WIND,
    AWB_TAG_FACE_MAX_SCALE_WINU,
    AWB_TAG_FACE_IS_DETECT,
    AWB_TAG_FACE_CENTRAL_WEIGHT,
    AWB_TAG_FACE_TOTAL_SIZE_SUM,
    AWB_TAG_FACE_MAX_SIZE,
    AWB_TAG_FACE_MAX_INDEX,
    AWB_TAG_FACE_WEIGHTED_AVG_R,
    AWB_TAG_FACE_WEIGHTED_AVG_G,
    AWB_TAG_FACE_WEIGHTED_AVG_B,
    AWB_TAG_FACE_RAW_RG,
    AWB_TAG_FACE_RAW_BG,
    AWB_TAG_FACE_RAW_RB,
    AWB_TAG_FACE_ORIGINAL_RG,
    AWB_TAG_FACE_ORIGINAL_BG,
    AWB_TAG_FACE_REFERENCE_TARGET_RG,
    AWB_TAG_FACE_REFERENCE_TARGET_BG,
    AWB_TAG_FACE_FINAL_TARGET_RG,
    AWB_TAG_FACE_FINAL_TARGET_BG,
    AWB_TAG_FACE_SAME_HUE_KEEP_ORIGINAL_GAIN_ENABLE,
    AWB_TAG_FACE_OUTDOOR_PROB_LV,
    AWB_TAG_FACE_OUTDOOR_PROB_DAYLIGHT,
    AWB_TAG_FACE_OUTDOOR_PROB_SHADE,
    AWB_TAG_FACE_OUTDOOR_PROB,
    AWB_TAG_FACE_OUTDOOR_CURRENT_PROB,
    AWB_TAG_FACE_GAIN_RATIO_RG,
    AWB_TAG_FACE_GAIN_RATIO_BG,
    AWB_TAG_FACE_GAIN_RATIO_RESTRICT,
    AWB_TAG_FACE_RESTRICT_GAIN_RATIO_RG,
    AWB_TAG_FACE_RESTRICT_GAIN_RATIO_BG,
    AWB_TAG_FACE_PREFERENCE_GAIN_R,
    AWB_TAG_FACE_PREFERENCE_GAIN_G,
    AWB_TAG_FACE_PREFERENCE_GAIN_B,
    AWB_TAG_FACE_GAIN_R,
    AWB_TAG_FACE_GAIN_G,
    AWB_TAG_FACE_GAIN_B,
    AWB_TAG_FACE_SIZE_RATIO,
    AWB_TAG_FACE_PROB0,
    AWB_TAG_FACE_PROB1,
    AWB_TAG_FACE_PROB2,
    AWB_TAG_FACE_PROB3,
    AWB_TAG_FACE_PROB,
    AWB_TAG_FACE_NEUTRAL_PB_NUM,
    AWB_TAG_FACE_SPATIAL_PROB0,
    AWB_TAG_FACE_SPATIAL_PROB1,
    AWB_TAG_FACE_SPATIAL_PROB,
    AWB_TAG_FACE_SPATIAL_GAIN_R,
    AWB_TAG_FACE_SPATIAL_GAIN_G,
    AWB_TAG_FACE_SPATIAL_GAIN_B,
    AWB_TAG_FACE_ORIGINAL_TARGET_GAIN_R,
    AWB_TAG_FACE_ORIGINAL_TARGET_GAIN_G,
    AWB_TAG_FACE_ORIGINAL_TARGET_GAIN_B,
    AWB_TAG_FACE_TARGET_GAIN_R,
    AWB_TAG_FACE_TARGET_GAIN_G,
    AWB_TAG_FACE_TARGET_GAIN_B,
    AWB_TAG_FACE_FINAL_GAIN_R,
    AWB_TAG_FACE_FINAL_GAIN_G,
    AWB_TAG_FACE_FINAL_GAIN_B,
    AWB_TAG_FACE_FINAL_RG,
    AWB_TAG_FACE_FINAL_BG,
    AWB_TAG_FACE_ORIGINAL_HUE,
    AWB_TAG_FACE_TARGET_HUE,
    AWB_TAG_FACE_FINAL_HUE,
    AWB_TAG_FACE_RESERVED_A,
    AWB_TAG_FACE_RESERVED_B,
    AWB_TAG_FACE_RESERVED_C,
    AWB_TAG_FACE_RESERVED_H1,
    AWB_TAG_FACE_RESERVED_H2,
    AWB_TAG_FACE_RESERVED_HCONTROL,
    AWB_TAG_FACE_RESERVED_CHCONTROL,
    AWB_TAG_FACE_RESERVED_N1,
    AWB_TAG_FACE_RESERVED_N2,
    AWB_TAG_CCT,
    AWB_TAG_F_INDEX,
    AWB_TAG_DF_INDEX,
    AWB_TAG_CCT_X,
    AWB_TAG_CCT_Y,
    AWB_TAG_CCT_XR,
    AWB_TAG_CCT_YR,
    AWB_TAG_CCT_MIRED_H,
    AWB_TAG_CCT_MIRED_L,
    AWB_TAG_CCT_MIRED,
    AWB_TAG_CCT_YR_TL84,
    AWB_TAG_CCT_YR_CWF,
    AWB_TAG_CCT_YR_MEAN_F,
    AWB_TAG_CCT_YR_D65,
    AWB_TAG_CCT_YR_DF,
    AWB_TAG_CCT_YR_MEAN_DF,
    AWB_TAG_CAP_SCENE_LV,
    AWB_TAG_PV_SCENE_LV,
    AWB_TAG_RAW_PREGAIN_NUM,
    AWB_TAG_RAW_PREGAIN1_R,
    AWB_TAG_RAW_PREGAIN1_G,
    AWB_TAG_RAW_PREGAIN1_B,
    AWB_TAG_RAW_PREGAIN1_R_M,
    AWB_TAG_RAW_PREGAIN1_G_M,
    AWB_TAG_RAW_PREGAIN1_B_M,
    AWB_TAG_RAW_PREGAIN1_R_L,
    AWB_TAG_RAW_PREGAIN1_G_L,
    AWB_TAG_RAW_PREGAIN1_B_L,
    AWB_TAG_RAW_PREGAIN2_R,
    AWB_TAG_RAW_PREGAIN2_G,
    AWB_TAG_RAW_PREGAIN2_B,
    AWB_TAG_LIGHT_STAT_CAL_GAIN_R,
    AWB_TAG_LIGHT_STAT_CAL_GAIN_G,
    AWB_TAG_LIGHT_STAT_CAL_GAIN_B,
    AWB_TAG_OUTPUT_CAL_GAIN_R,
    AWB_TAG_OUTPUT_CAL_GAIN_G,
    AWB_TAG_OUTPUT_CAL_GAIN_B,
    AWB_TAG_PREFGAIN_STROBE_R,
    AWB_TAG_PREFGAIN_STROBE_G,
    AWB_TAG_PREFGAIN_STROBE_B,
    AWB_TAG_PREFGAIN_TUNGSTEN_R,
    AWB_TAG_PREFGAIN_TUNGSTEN_G,
    AWB_TAG_PREFGAIN_TUNGSTEN_B,
    AWB_TAG_PREFGAIN_WF_R,
    AWB_TAG_PREFGAIN_WF_G,
    AWB_TAG_PREFGAIN_WF_B,
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
    AWB_TAG_PREFGAIN_DF_R,
    AWB_TAG_PREFGAIN_DF_G,
    AWB_TAG_PREFGAIN_DF_B,
    AWB_TAG_STAT_LIMIT_ENABLLE,
    AWB_TAG_STAT_LIMIT_Y_STB,
    AWB_TAG_STAT_LIMIT_Y_T,
    AWB_TAG_STAT_LIMIT_Y_WF,
    AWB_TAG_STAT_LIMIT_Y_F,
    AWB_TAG_STAT_LIMIT_Y_CWF,
    AWB_TAG_STAT_LIMIT_Y_D,
    AWB_TAG_STAT_LIMIT_Y_S,
    AWB_TAG_STAT_LIMIT_Y_DF,
    AWB_TAG_STAT_LIMIT_W_RED_STB,
    AWB_TAG_STAT_LIMIT_W_RED_T,
    AWB_TAG_STAT_LIMIT_W_RED_WF,
    AWB_TAG_STAT_LIMIT_W_RED_F,
    AWB_TAG_STAT_LIMIT_W_RED_CWF,
    AWB_TAG_STAT_LIMIT_W_RED_D,
    AWB_TAG_STAT_LIMIT_W_RED_S,
    AWB_TAG_STAT_LIMIT_W_RED_DF,
    AWB_TAG_CB_MIN_THR,
    AWB_TAG_SPAT_GENERAL_MODE,
    AWB_TAG_NONRELIABLE_MODE,
    AWB_TAG_TEMP_INIT_MODE,
    AWB_TAG_LV_TEMP_NONRELIABLE,
    AWB_TAG_LV_TEMP_STB,
    AWB_TAG_LV_TEMP_T,
    AWB_TAG_LV_TEMP_WF,
    AWB_TAG_LV_TEMP_F,
    AWB_TAG_LV_TEMP_CWF,
    AWB_TAG_LV_TEMP_D,
    AWB_TAG_LV_TEMP_SHADE,
    AWB_TAG_LV_TEMP_DF,
    AWB_TAG_REFINE_P0_ENABLE,
    AWB_TAG_REFINE_P0_PB_RATIO,
    AWB_TAG_REFINE_P0_RANGE,
    AWB_TAG_REFINE_P0_CLIP,
    AWB_TAG_REFINE_P2_ENABLE,
    AWB_TAG_REFINE_P2_PB_RATIO,
    AWB_TAG_REFINE_P2_LV_THR,
    AWB_TAG_REFINE_P2_P0_THR1,
    AWB_TAG_REFINE_P2_P0_THR2,
    AWB_TAG_OFFSET_SMOOTH_ENABLE,
    AWB_TAG_OFFSET_SMOOTH_THR_T,
    AWB_TAG_OFFSET_SMOOTH_THR_WF,
    AWB_TAG_OFFSET_SMOOTH_THR_S,
    AWB_TAG_EXTRACOLOR_ENABLE,
    AWB_TAG_EXTRACOLOR_GAIN_R,
    AWB_TAG_EXTRACOLOR_GAIN_G,
    AWB_TAG_EXTRACOLOR_GAIN_B,
    AWB_TAG_EXTRACOLOR_AREA_U,
    AWB_TAG_EXTRACOLOR_AREA_D,
    AWB_TAG_EXTRACOLOR_AREA_L,
    AWB_TAG_EXTRACOLOR_AREA_R,
    AWB_TAG_EXTRACOLOR_LV_L,
    AWB_TAG_EXTRACOLOR_LV_H,
    AWB_TAG_EXTRACOLOR_COUNT_L,
    AWB_TAG_EXTRACOLOR_COUNT_H,
    AWB_TAG_EXTRACOLOR_WEI_L,
    AWB_TAG_EXTRACOLOR_WEI_H,
    AWB_TAG_NONEBAYER_EANBLE,
    AWB_TAG_NONEBAYER_COF_0,
    AWB_TAG_NONEBAYER_COF_1,
    AWB_TAG_NONEBAYER_COF_2,
    AWB_TAG_NONEBAYER_COF_3,
    AWB_TAG_NONEBAYER_COF_4,
    AWB_TAG_NONEBAYER_COF_5,
    AWB_TAG_NONEBAYER_COF_6,
    AWB_TAG_NONEBAYER_COF_7,
    AWB_TAG_NONEBAYER_COF_8,
    AWB_TAG_NONEBAYER_COF_INV_0,
    AWB_TAG_NONEBAYER_COF_INV_1,
    AWB_TAG_NONEBAYER_COF_INV_2,
    AWB_TAG_NONEBAYER_COF_INV_3,
    AWB_TAG_NONEBAYER_COF_INV_4,
    AWB_TAG_NONEBAYER_COF_INV_5,
    AWB_TAG_NONEBAYER_COF_INV_6,
    AWB_TAG_NONEBAYER_COF_INV_7,
    AWB_TAG_NONEBAYER_COF_INV_8,
    AWB_TAG_AWB_GAIN_RWB_R,
    AWB_TAG_AWB_GAIN_RWB_G,
    AWB_TAG_AWB_GAIN_RWB_B,
    AWB_TAG_FULL_GAIN_R,
    AWB_TAG_FULL_GAIN_G,
    AWB_TAG_FULL_GAIN_B,
    AWB_TAG_RCCONV_SUPPORT,
    AWB_NVRAM_UNIT_GAIN_R,
    AWB_NVRAM_UNIT_GAIN_G,
    AWB_NVRAM_UNIT_GAIN_B,
    AWB_NVRAM_GOLDEN_GAIN_R,
    AWB_NVRAM_GOLDEN_GAIN_G,
    AWB_NVRAM_GOLDEN_GAIN_B,
    AWB_NVRAM_UNIT_GAIN_R_M,
    AWB_NVRAM_UNIT_GAIN_G_M,
    AWB_NVRAM_UNIT_GAIN_B_M,
    AWB_NVRAM_GOLDEN_GAIN_R_M,
    AWB_NVRAM_GOLDEN_GAIN_G_M,
    AWB_NVRAM_GOLDEN_GAIN_B_M,
    AWB_NVRAM_UNIT_GAIN_R_L,
    AWB_NVRAM_UNIT_GAIN_G_L,
    AWB_NVRAM_UNIT_GAIN_B_L,
    AWB_NVRAM_GOLDEN_GAIN_R_L,
    AWB_NVRAM_GOLDEN_GAIN_G_L,
    AWB_NVRAM_GOLDEN_GAIN_B_L,
    AWB_NVRAM_TUNING_UNIT_GAIN_R,
    AWB_NVRAM_TUNING_UNIT_GAIN_G,
    AWB_NVRAM_TUNING_UNIT_GAIN_B,
    AWB_NVRAM_D65_GAIN_R,
    AWB_NVRAM_D65_GAIN_G,
    AWB_NVRAM_D65_GAIN_B,
    AWB_NVRAM_UNIT_VALUE_R,
    AWB_NVRAM_UNIT_VALUE_GB,
    AWB_NVRAM_UNIT_VALUE_GR,
    AWB_NVRAM_UNIT_VALUE_B,
    AWB_NVRAM_GOLDEN_VALUE_R,
    AWB_NVRAM_GOLDEN_VALUE_GB,
    AWB_NVRAM_GOLDEN_VALUE_GR,
    AWB_NVRAM_GOLDEN_VALUE_B,
    AWB_NVRAM_UNIT_VALUE_R_M,
    AWB_NVRAM_UNIT_VALUE_GB_M,
    AWB_NVRAM_UNIT_VALUE_GR_M,
    AWB_NVRAM_UNIT_VALUE_B_M,
    AWB_NVRAM_GOLDEN_VALUE_R_M,
    AWB_NVRAM_GOLDEN_VALUE_GB_M,
    AWB_NVRAM_GOLDEN_VALUE_GR_M,
    AWB_NVRAM_GOLDEN_VALUE_B_M,
    AWB_NVRAM_UNIT_VALUE_R_L,
    AWB_NVRAM_UNIT_VALUE_GB_L,
    AWB_NVRAM_UNIT_VALUE_GR_L,
    AWB_NVRAM_UNIT_VALUE_B_L,
    AWB_NVRAM_GOLDEN_VALUE_R_L,
    AWB_NVRAM_GOLDEN_VALUE_GB_L,
    AWB_NVRAM_GOLDEN_VALUE_GR_L,
    AWB_NVRAM_GOLDEN_VALUE_B_L,
    AWB_NVRAM_STB_XO,
    AWB_NVRAM_STB_YO,
    AWB_NVRAM_HORIZON_XO,
    AWB_NVRAM_HORIZON_YO,
    AWB_NVRAM_A_XO,
    AWB_NVRAM_A_YO,
    AWB_NVRAM_TL84_XO,
    AWB_NVRAM_TL84_YO,
    AWB_NVRAM_CWF_XO,
    AWB_NVRAM_CWF_YO,
    AWB_NVRAM_DNP_XO,
    AWB_NVRAM_DNP_YO,
    AWB_NVRAM_D65_XO,
    AWB_NVRAM_D65_YO,
    AWB_NVRAM_DF_XO,
    AWB_NVRAM_DF_YO,
    AWB_NVRAM_STB_XR,
    AWB_NVRAM_STB_YR,
    AWB_NVRAM_HORIZON_XR,
    AWB_NVRAM_HORIZON_YR,
    AWB_NVRAM_A_XR,
    AWB_NVRAM_A_YR,
    AWB_NVRAM_TL84_XR,
    AWB_NVRAM_TL84_YR,
    AWB_NVRAM_CWF_XR,
    AWB_NVRAM_CWF_YR,
    AWB_NVRAM_DNP_XR,
    AWB_NVRAM_DNP_YR,
    AWB_NVRAM_D65_XR,
    AWB_NVRAM_D65_YR,
    AWB_NVRAM_DF_XR,
    AWB_NVRAM_DF_YR,
    AWB_NVRAM_STROBE_AWB_GAIN_R,
    AWB_NVRAM_STROBE_AWB_GAIN_G,
    AWB_NVRAM_STROBE_AWB_GAIN_B,
    AWB_NVRAM_HORIZON_AWB_GAIN_R,
    AWB_NVRAM_HORIZON_AWB_GAIN_G,
    AWB_NVRAM_HORIZON_AWB_GAIN_B,
    AWB_NVRAM_A_AWB_GAIN_R,
    AWB_NVRAM_A_AWB_GAIN_G,
    AWB_NVRAM_A_AWB_GAIN_B,
    AWB_NVRAM_TL84_AWB_GAIN_R,
    AWB_NVRAM_TL84_AWB_GAIN_G,
    AWB_NVRAM_TL84_AWB_GAIN_B,
    AWB_NVRAM_CWF_AWB_GAIN_R,
    AWB_NVRAM_CWF_AWB_GAIN_G,
    AWB_NVRAM_CWF_AWB_GAIN_B,
    AWB_NVRAM_DNP_AWB_GAIN_R,
    AWB_NVRAM_DNP_AWB_GAIN_G,
    AWB_NVRAM_DNP_AWB_GAIN_B,
    AWB_NVRAM_D65_AWB_GAIN_R,
    AWB_NVRAM_D65_AWB_GAIN_G,
    AWB_NVRAM_D65_AWB_GAIN_B,
    AWB_NVRAM_DF_AWB_GAIN_R,
    AWB_NVRAM_DF_AWB_GAIN_G,
    AWB_NVRAM_DF_AWB_GAIN_B,
    AWB_NVRAM_ROTATION_ANGLE,
    AWB_NVRAM_ROTATION_COS,
    AWB_NVRAM_ROTATION_SIN,
    AWB_NVRAM_SLPOE_NUMERATOR,
    AWB_NVRAM_SLPOE_DENOMINATOR,
    AWB_NVRAM_PREDICTOR_L_GAIN_R,
    AWB_NVRAM_PREDICTOR_L_GAIN_G,
    AWB_NVRAM_PREDICTOR_L_GAIN_B,
    AWB_NVRAM_PREDICTOR_H_GAIN_R,
    AWB_NVRAM_PREDICTOR_H_GAIN_G,
    AWB_NVRAM_PREDICTOR_H_GAIN_B,
    AWB_NVRAM_PREDICTOR_G_GAIN_R,
    AWB_NVRAM_PREDICTOR_G_GAIN_G,
    AWB_NVRAM_PREDICTOR_G_GAIN_B,
    AWB_NVRAM_STROBE_RIGHT,
    AWB_NVRAM_STROBE_LEFT,
    AWB_NVRAM_STROBE_UPPER,
    AWB_NVRAM_STROBE_LOWER,
    AWB_NVRAM_TUNGSTEN_RIGHT,
    AWB_NVRAM_TUNGSTEN_LEFT,
    AWB_NVRAM_TUNGSTEN_UPPER,
    AWB_NVRAM_TUNGSTEN_LOWER,
    AWB_NVRAM_WF_RIGHT,
    AWB_NVRAM_WF_LEFT,
    AWB_NVRAM_WF_UPPER,
    AWB_NVRAM_WF_LOWER,
    AWB_NVRAM_FLUORESCENT_RIGHT,
    AWB_NVRAM_FLUORESCENT_LEFT,
    AWB_NVRAM_FLUORESCENT_UPPER,
    AWB_NVRAM_FLUORESCENT_LOWER,
    AWB_NVRAM_CWF_RIGHT,
    AWB_NVRAM_CWF_LEFT,
    AWB_NVRAM_CWF_UPPER,
    AWB_NVRAM_CWF_LOWER,
    AWB_NVRAM_DAYLIGHT_RIGHT,
    AWB_NVRAM_DAYLIGHT_LEFT,
    AWB_NVRAM_DAYLIGHT_UPPER,
    AWB_NVRAM_DAYLIGHT_LOWER,
    AWB_NVRAM_SHADE_RIGHT,
    AWB_NVRAM_SHADE_LEFT,
    AWB_NVRAM_SHADE_UPPER,
    AWB_NVRAM_SHADE_LOWER,
    AWB_NVRAM_DF_RIGHT,
    AWB_NVRAM_DF_LEFT,
    AWB_NVRAM_DF_UPPER,
    AWB_NVRAM_DF_LOWER,
    PWB_NVRAM_REFERENCE_RIGHT,
    PWB_NVRAM_REFERENCE_LEFT,
    PWB_NVRAM_REFERENCE_UPPER,
    PWB_NVRAM_REFERENCE_LOWER,
    PWB_NVRAM_DAYLIGHT_RIGHT,
    PWB_NVRAM_DAYLIGHT_LEFT,
    PWB_NVRAM_DAYLIGHT_UPPER,
    PWB_NVRAM_DAYLIGHT_LOWER,
    PWB_NVRAM_CLOUDY_DAYLIGHT_RIGHT,
    PWB_NVRAM_CLOUDY_DAYLIGHT_LEFT,
    PWB_NVRAM_CLOUDY_DAYLIGHT_UPPER,
    PWB_NVRAM_CLOUDY_DAYLIGHT_LOWER,
    PWB_NVRAM_SHADE_RIGHT,
    PWB_NVRAM_SHADE_LEFT,
    PWB_NVRAM_SHADE_UPPER,
    PWB_NVRAM_SHADE_LOWER,
    PWB_NVRAM_TWILIGHT_RIGHT,
    PWB_NVRAM_TWILIGHT_LEFT,
    PWB_NVRAM_TWILIGHT_UPPER,
    PWB_NVRAM_TWILIGHT_LOWER,
    PWB_NVRAM_FLUORESCENT_RIGHT,
    PWB_NVRAM_FLUORESCENT_LEFT,
    PWB_NVRAM_FLUORESCENT_UPPER,
    PWB_NVRAM_FLUORESCENT_LOWER,
    PWB_NVRAM_WARM_FLUORESCENT_RIGHT,
    PWB_NVRAM_WARM_FLUORESCENT_LEFT,
    PWB_NVRAM_WARM_FLUORESCENT_UPPER,
    PWB_NVRAM_WARM_FLUORESCENT_LOWER,
    PWB_NVRAM_WARM_INCANDESCENT_RIGHT,
    PWB_NVRAM_WARM_INCANDESCENT_LEFT,
    PWB_NVRAM_WARM_INCANDESCENT_UPPER,
    PWB_NVRAM_WARM_INCANDESCENT_LOWER,
    PWB_NVRAM_DEF_GAIN_R_DAYLIGHT,
    PWB_NVRAM_DEF_GAIN_G_DAYLIGHT,
    PWB_NVRAM_DEF_GAIN_B_DAYLIGHT,
    PWB_NVRAM_DEF_GAIN_R_CLOUDY_DAYLIGHT,
    PWB_NVRAM_DEF_GAIN_G_CLOUDY_DAYLIGHT,
    PWB_NVRAM_DEF_GAIN_B_CLOUDY_DAYLIGHT,
    PWB_NVRAM_DEF_GAIN_R_SHADE,
    PWB_NVRAM_DEF_GAIN_G_SHADE,
    PWB_NVRAM_DEF_GAIN_B_SHADE,
    PWB_NVRAM_DEF_GAIN_R_TWILIGHT,
    PWB_NVRAM_DEF_GAIN_G_TWILIGHT,
    PWB_NVRAM_DEF_GAIN_B_TWILIGHT,
    PWB_NVRAM_DEF_GAIN_R_FLUORESCENT,
    PWB_NVRAM_DEF_GAIN_G_FLUORESCENT,
    PWB_NVRAM_DEF_GAIN_B_FLUORESCENT,
    PWB_NVRAM_DEF_GAIN_R_WARM_FLUORESCENT,
    PWB_NVRAM_DEF_GAIN_G_WARM_FLUORESCENT,
    PWB_NVRAM_DEF_GAIN_B_WARM_FLUORESCENT,
    PWB_NVRAM_DEF_GAIN_R_INCANDESCENT,
    PWB_NVRAM_DEF_GAIN_G_INCANDESCENT,
    PWB_NVRAM_DEF_GAIN_B_INCANDESCENT,
    AWB_NVRAM_PREF_COLOR_OFFSET_THR_T,
    AWB_NVRAM_PREF_COLOR_OFFSET_THR_WF,
    AWB_NVRAM_PREF_COLOR_OFFSET_THR_S,
    AWB_NVRAM_SUNSET_AREA_XR_THR,
    AWB_NVRAM_SUNSET_AREA_YR_THR,
    AWB_NVRAM_SHADE_F_METHOD,
    AWB_NVRAM_SHADE_F_AREA_XR_THR,
    AWB_NVRAM_SHADE_F_AREA_YR_THR,
    AWB_NVRAM_SHADE_F_VERTEX_XR_THR,
    AWB_NVRAM_SHADE_F_VERTEX_YR_THR,
    AWB_NVRAM_SHADE_CWF_METHOD,
    AWB_NVRAM_SHADE_CWF_AREA_XR_THR,
    AWB_NVRAM_SHADE_CWF_AREA_YR_THR,
    AWB_NVRAM_SHADE_CWF_VERTEX_XR_THR,
    AWB_NVRAM_SHADE_CWF_VERTEX_YR_THR,
    AWB_NVRAM_PB_WEIGHT_ENBALE,
    AWB_NVRAM_PB_WEIGHT_SCALE_FACTOR,
    AWB_NVRAM_PREDICTOR_INIT_LV_THR_L,
    AWB_NVRAM_PREDICTOR_INIT_LV_THR_H,
    AWB_NVRAM_TEMPORAL_ENQ_NEUTRAL_BLK_THR,
    AWB_NVRAM_TEMPORAL_ENQ_CWF_DF_BLK_THR,
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
    AWB_NVRAM_CCT_HORIZON,
    AWB_NVRAM_CCT_A,
    AWB_NVRAM_CCT_TL84,
    AWB_NVRAM_CCT_DNP,
    AWB_NVRAM_CCT_D65,
    AWB_NVRAM_XR_HORIZON,
    AWB_NVRAM_XR_A,
    AWB_NVRAM_XR_TL84,
    AWB_NVRAM_XR_DNP,
    AWB_NVRAM_XR_D65,
    AWB_TAG_PROJ_CODE,
    AWB_TAG_MODEL,
    AWB_TAG_DATE,
    AWB_TAG_INFO_0,
    AWB_TAG_INFO_1,
    AWB_TAG_INFO_2,
    AWB_TAG_INFO_3,
    AWB_TAG_INFO_4,
    AWB_TAG_INFO_5,
    AWB_TAG_INFO_6,
    AWB_TAG_INFO_7,
    AWB_TAG_INFO_8,
    AWB_TAG_INFO_9,
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
    // END_OF_EXIF_TAG
};

typedef enum
{
    AWB_TAG_95_K2 = 0,
    AWB_TAG_D1_D2_D3,
    AWB_TAG_95_K2_F_CWF_SMOOTH,
    AWB_TAG_JADE,
    AWB_TAG_EVEREST,
	AWB_TAG_OLYMPUS,
    AWB_TAG_KIBOPLUS
} AWB_TAG_VER_E;

#define AWB_DEBUG_TAG_VERSION   (AWB_TAG_KIBOPLUS)
#define AWB_DEBUG_TAG_SUBVERSION   (0)
#define AWB_DEBUG_TAG_VERSION_DP ((AWB_DEBUG_TAG_SUBVERSION << 16) | AWB_DEBUG_TAG_VERSION)

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
