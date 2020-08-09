/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2019. All rights reserved.
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
.COMM =
{
    .COLOR =
    {
        .COLOR_Method =
        {
            1,
        }
    },
    .CCM =
    {
        .dynamic_CCM=
        {
            {.set={
                0x1ECE034E, 0x00001FE4, 0x02BD1FBE, 0x00001F85, 0x1F000008, 0x000002F8
            }},
            {.set={
                0x1E8D03C2, 0x00001FB1, 0x02C41F87, 0x00001FB5, 0x1EC9000B, 0x0000032C
            }},
            {.set={
                0x1DF00417, 0x00001FDE, 0x02B01F7A, 0x00001FD6, 0x1ECE0012, 0x00000320
            }},
            {.set={
                0x1F4302FD, 0x00001FC0, 0x02761F9E, 0x00001FEC, 0x1E331FF4, 0x000003D9
            }}
        },

        .dynamic_CCM_AWBGain=
        {
            {
              1342,
              512,
              647
            },
            {
              978,
              512,
              915
            },
            {
              1114,
              512,
              1021
            },
            {
              681,
              512,
              1207
            }
        }
    }
},
.CCM = {
    s5k3p8sxmipiraw_CCM_0000[0],s5k3p8sxmipiraw_CCM_0000[1],s5k3p8sxmipiraw_CCM_0000[2],s5k3p8sxmipiraw_CCM_0000[3],s5k3p8sxmipiraw_CCM_0000[4],s5k3p8sxmipiraw_CCM_0000[5],s5k3p8sxmipiraw_CCM_0006[0],s5k3p8sxmipiraw_CCM_0006[1],s5k3p8sxmipiraw_CCM_0006[2],s5k3p8sxmipiraw_CCM_0006[3],
    s5k3p8sxmipiraw_CCM_0006[4],s5k3p8sxmipiraw_CCM_0006[5],s5k3p8sxmipiraw_CCM_0012[0],s5k3p8sxmipiraw_CCM_0012[1],s5k3p8sxmipiraw_CCM_0012[2],s5k3p8sxmipiraw_CCM_0012[3],s5k3p8sxmipiraw_CCM_0012[4],s5k3p8sxmipiraw_CCM_0012[5],s5k3p8sxmipiraw_CCM_0018[0],s5k3p8sxmipiraw_CCM_0018[1],
    s5k3p8sxmipiraw_CCM_0018[2],s5k3p8sxmipiraw_CCM_0018[3],s5k3p8sxmipiraw_CCM_0018[4],s5k3p8sxmipiraw_CCM_0018[5],s5k3p8sxmipiraw_CCM_0024[0],s5k3p8sxmipiraw_CCM_0024[1],s5k3p8sxmipiraw_CCM_0024[2],s5k3p8sxmipiraw_CCM_0024[3],s5k3p8sxmipiraw_CCM_0024[4],s5k3p8sxmipiraw_CCM_0024[5],
    s5k3p8sxmipiraw_CCM_0030[0],s5k3p8sxmipiraw_CCM_0030[1],s5k3p8sxmipiraw_CCM_0030[2],s5k3p8sxmipiraw_CCM_0030[3],s5k3p8sxmipiraw_CCM_0030[4],s5k3p8sxmipiraw_CCM_0030[5],s5k3p8sxmipiraw_CCM_0036[0],s5k3p8sxmipiraw_CCM_0036[1],s5k3p8sxmipiraw_CCM_0036[2],s5k3p8sxmipiraw_CCM_0036[3],
    s5k3p8sxmipiraw_CCM_0036[4],s5k3p8sxmipiraw_CCM_0036[5],
},
.COLOR_PARAM = {
    s5k3p8sxmipiraw_COLOR_PARAM_0000[0],s5k3p8sxmipiraw_COLOR_PARAM_0001[0],s5k3p8sxmipiraw_COLOR_PARAM_0002[0],s5k3p8sxmipiraw_COLOR_PARAM_0003[0],s5k3p8sxmipiraw_COLOR_PARAM_0004[0],s5k3p8sxmipiraw_COLOR_PARAM_0005[0],s5k3p8sxmipiraw_COLOR_PARAM_0006[0],
},
.COLOR = {
    s5k3p8sxmipiraw_COLOR_0000[0],s5k3p8sxmipiraw_COLOR_0000[1],s5k3p8sxmipiraw_COLOR_0000[2],s5k3p8sxmipiraw_COLOR_0000[3],s5k3p8sxmipiraw_COLOR_0000[4],s5k3p8sxmipiraw_COLOR_0000[5],s5k3p8sxmipiraw_COLOR_0000[6],s5k3p8sxmipiraw_COLOR_0000[7],s5k3p8sxmipiraw_COLOR_0000[8],s5k3p8sxmipiraw_COLOR_0000[9],
    s5k3p8sxmipiraw_COLOR_0000[10],s5k3p8sxmipiraw_COLOR_0000[11],s5k3p8sxmipiraw_COLOR_0000[12],s5k3p8sxmipiraw_COLOR_0000[13],s5k3p8sxmipiraw_COLOR_0000[14],s5k3p8sxmipiraw_COLOR_0000[15],s5k3p8sxmipiraw_COLOR_0000[16],s5k3p8sxmipiraw_COLOR_0000[17],s5k3p8sxmipiraw_COLOR_0000[18],s5k3p8sxmipiraw_COLOR_0000[19],
    s5k3p8sxmipiraw_COLOR_0000[20],s5k3p8sxmipiraw_COLOR_0000[21],s5k3p8sxmipiraw_COLOR_0000[22],s5k3p8sxmipiraw_COLOR_0000[23],s5k3p8sxmipiraw_COLOR_0000[24],s5k3p8sxmipiraw_COLOR_0000[25],s5k3p8sxmipiraw_COLOR_0000[26],s5k3p8sxmipiraw_COLOR_0000[27],s5k3p8sxmipiraw_COLOR_0000[28],s5k3p8sxmipiraw_COLOR_0000[29],
    s5k3p8sxmipiraw_COLOR_0000[30],s5k3p8sxmipiraw_COLOR_0000[31],s5k3p8sxmipiraw_COLOR_0000[32],s5k3p8sxmipiraw_COLOR_0000[33],s5k3p8sxmipiraw_COLOR_0000[34],s5k3p8sxmipiraw_COLOR_0000[35],s5k3p8sxmipiraw_COLOR_0000[36],s5k3p8sxmipiraw_COLOR_0000[37],s5k3p8sxmipiraw_COLOR_0000[38],s5k3p8sxmipiraw_COLOR_0000[39],
    s5k3p8sxmipiraw_COLOR_0000[40],s5k3p8sxmipiraw_COLOR_0000[41],s5k3p8sxmipiraw_COLOR_0000[42],s5k3p8sxmipiraw_COLOR_0000[43],s5k3p8sxmipiraw_COLOR_0000[44],s5k3p8sxmipiraw_COLOR_0000[45],s5k3p8sxmipiraw_COLOR_0000[46],s5k3p8sxmipiraw_COLOR_0000[47],s5k3p8sxmipiraw_COLOR_0000[48],s5k3p8sxmipiraw_COLOR_0000[49],
    s5k3p8sxmipiraw_COLOR_0000[50],s5k3p8sxmipiraw_COLOR_0000[51],s5k3p8sxmipiraw_COLOR_0000[52],s5k3p8sxmipiraw_COLOR_0000[53],s5k3p8sxmipiraw_COLOR_0000[54],s5k3p8sxmipiraw_COLOR_0000[55],s5k3p8sxmipiraw_COLOR_0000[56],s5k3p8sxmipiraw_COLOR_0000[57],s5k3p8sxmipiraw_COLOR_0000[58],s5k3p8sxmipiraw_COLOR_0000[59],
    s5k3p8sxmipiraw_COLOR_0060[0],s5k3p8sxmipiraw_COLOR_0060[1],s5k3p8sxmipiraw_COLOR_0060[2],s5k3p8sxmipiraw_COLOR_0060[3],s5k3p8sxmipiraw_COLOR_0060[4],s5k3p8sxmipiraw_COLOR_0060[5],s5k3p8sxmipiraw_COLOR_0060[6],s5k3p8sxmipiraw_COLOR_0060[7],s5k3p8sxmipiraw_COLOR_0060[8],s5k3p8sxmipiraw_COLOR_0060[9],
    s5k3p8sxmipiraw_COLOR_0060[10],s5k3p8sxmipiraw_COLOR_0060[11],s5k3p8sxmipiraw_COLOR_0060[12],s5k3p8sxmipiraw_COLOR_0060[13],s5k3p8sxmipiraw_COLOR_0060[14],s5k3p8sxmipiraw_COLOR_0060[15],s5k3p8sxmipiraw_COLOR_0060[16],s5k3p8sxmipiraw_COLOR_0060[17],s5k3p8sxmipiraw_COLOR_0060[18],s5k3p8sxmipiraw_COLOR_0060[19],
    s5k3p8sxmipiraw_COLOR_0060[20],s5k3p8sxmipiraw_COLOR_0060[21],s5k3p8sxmipiraw_COLOR_0060[22],s5k3p8sxmipiraw_COLOR_0060[23],s5k3p8sxmipiraw_COLOR_0060[24],s5k3p8sxmipiraw_COLOR_0060[25],s5k3p8sxmipiraw_COLOR_0060[26],s5k3p8sxmipiraw_COLOR_0060[27],s5k3p8sxmipiraw_COLOR_0060[28],s5k3p8sxmipiraw_COLOR_0060[29],
    s5k3p8sxmipiraw_COLOR_0060[30],s5k3p8sxmipiraw_COLOR_0060[31],s5k3p8sxmipiraw_COLOR_0060[32],s5k3p8sxmipiraw_COLOR_0060[33],s5k3p8sxmipiraw_COLOR_0060[34],s5k3p8sxmipiraw_COLOR_0060[35],s5k3p8sxmipiraw_COLOR_0060[36],s5k3p8sxmipiraw_COLOR_0060[37],s5k3p8sxmipiraw_COLOR_0060[38],s5k3p8sxmipiraw_COLOR_0060[39],
    s5k3p8sxmipiraw_COLOR_0060[40],s5k3p8sxmipiraw_COLOR_0060[41],s5k3p8sxmipiraw_COLOR_0060[42],s5k3p8sxmipiraw_COLOR_0060[43],s5k3p8sxmipiraw_COLOR_0060[44],s5k3p8sxmipiraw_COLOR_0060[45],s5k3p8sxmipiraw_COLOR_0060[46],s5k3p8sxmipiraw_COLOR_0060[47],s5k3p8sxmipiraw_COLOR_0060[48],s5k3p8sxmipiraw_COLOR_0060[49],
    s5k3p8sxmipiraw_COLOR_0060[50],s5k3p8sxmipiraw_COLOR_0060[51],s5k3p8sxmipiraw_COLOR_0060[52],s5k3p8sxmipiraw_COLOR_0060[53],s5k3p8sxmipiraw_COLOR_0060[54],s5k3p8sxmipiraw_COLOR_0060[55],s5k3p8sxmipiraw_COLOR_0060[56],s5k3p8sxmipiraw_COLOR_0060[57],s5k3p8sxmipiraw_COLOR_0060[58],s5k3p8sxmipiraw_COLOR_0060[59],
    s5k3p8sxmipiraw_COLOR_0120[0],s5k3p8sxmipiraw_COLOR_0120[1],s5k3p8sxmipiraw_COLOR_0120[2],s5k3p8sxmipiraw_COLOR_0120[3],s5k3p8sxmipiraw_COLOR_0120[4],s5k3p8sxmipiraw_COLOR_0120[5],s5k3p8sxmipiraw_COLOR_0120[6],s5k3p8sxmipiraw_COLOR_0120[7],s5k3p8sxmipiraw_COLOR_0120[8],s5k3p8sxmipiraw_COLOR_0120[9],
    s5k3p8sxmipiraw_COLOR_0120[10],s5k3p8sxmipiraw_COLOR_0120[11],s5k3p8sxmipiraw_COLOR_0120[12],s5k3p8sxmipiraw_COLOR_0120[13],s5k3p8sxmipiraw_COLOR_0120[14],s5k3p8sxmipiraw_COLOR_0120[15],s5k3p8sxmipiraw_COLOR_0120[16],s5k3p8sxmipiraw_COLOR_0120[17],s5k3p8sxmipiraw_COLOR_0120[18],s5k3p8sxmipiraw_COLOR_0120[19],
    s5k3p8sxmipiraw_COLOR_0120[20],s5k3p8sxmipiraw_COLOR_0120[21],s5k3p8sxmipiraw_COLOR_0120[22],s5k3p8sxmipiraw_COLOR_0120[23],s5k3p8sxmipiraw_COLOR_0120[24],s5k3p8sxmipiraw_COLOR_0120[25],s5k3p8sxmipiraw_COLOR_0120[26],s5k3p8sxmipiraw_COLOR_0120[27],s5k3p8sxmipiraw_COLOR_0120[28],s5k3p8sxmipiraw_COLOR_0120[29],
    s5k3p8sxmipiraw_COLOR_0120[30],s5k3p8sxmipiraw_COLOR_0120[31],s5k3p8sxmipiraw_COLOR_0120[32],s5k3p8sxmipiraw_COLOR_0120[33],s5k3p8sxmipiraw_COLOR_0120[34],s5k3p8sxmipiraw_COLOR_0120[35],s5k3p8sxmipiraw_COLOR_0120[36],s5k3p8sxmipiraw_COLOR_0120[37],s5k3p8sxmipiraw_COLOR_0120[38],s5k3p8sxmipiraw_COLOR_0120[39],
    s5k3p8sxmipiraw_COLOR_0120[40],s5k3p8sxmipiraw_COLOR_0120[41],s5k3p8sxmipiraw_COLOR_0120[42],s5k3p8sxmipiraw_COLOR_0120[43],s5k3p8sxmipiraw_COLOR_0120[44],s5k3p8sxmipiraw_COLOR_0120[45],s5k3p8sxmipiraw_COLOR_0120[46],s5k3p8sxmipiraw_COLOR_0120[47],s5k3p8sxmipiraw_COLOR_0120[48],s5k3p8sxmipiraw_COLOR_0120[49],
    s5k3p8sxmipiraw_COLOR_0120[50],s5k3p8sxmipiraw_COLOR_0120[51],s5k3p8sxmipiraw_COLOR_0120[52],s5k3p8sxmipiraw_COLOR_0120[53],s5k3p8sxmipiraw_COLOR_0120[54],s5k3p8sxmipiraw_COLOR_0120[55],s5k3p8sxmipiraw_COLOR_0120[56],s5k3p8sxmipiraw_COLOR_0120[57],s5k3p8sxmipiraw_COLOR_0120[58],s5k3p8sxmipiraw_COLOR_0120[59],
    s5k3p8sxmipiraw_COLOR_0180[0],s5k3p8sxmipiraw_COLOR_0180[1],s5k3p8sxmipiraw_COLOR_0180[2],s5k3p8sxmipiraw_COLOR_0180[3],s5k3p8sxmipiraw_COLOR_0180[4],s5k3p8sxmipiraw_COLOR_0180[5],s5k3p8sxmipiraw_COLOR_0180[6],s5k3p8sxmipiraw_COLOR_0180[7],s5k3p8sxmipiraw_COLOR_0180[8],s5k3p8sxmipiraw_COLOR_0180[9],
    s5k3p8sxmipiraw_COLOR_0180[10],s5k3p8sxmipiraw_COLOR_0180[11],s5k3p8sxmipiraw_COLOR_0180[12],s5k3p8sxmipiraw_COLOR_0180[13],s5k3p8sxmipiraw_COLOR_0180[14],s5k3p8sxmipiraw_COLOR_0180[15],s5k3p8sxmipiraw_COLOR_0180[16],s5k3p8sxmipiraw_COLOR_0180[17],s5k3p8sxmipiraw_COLOR_0180[18],s5k3p8sxmipiraw_COLOR_0180[19],
    s5k3p8sxmipiraw_COLOR_0180[20],s5k3p8sxmipiraw_COLOR_0180[21],s5k3p8sxmipiraw_COLOR_0180[22],s5k3p8sxmipiraw_COLOR_0180[23],s5k3p8sxmipiraw_COLOR_0180[24],s5k3p8sxmipiraw_COLOR_0180[25],s5k3p8sxmipiraw_COLOR_0180[26],s5k3p8sxmipiraw_COLOR_0180[27],s5k3p8sxmipiraw_COLOR_0180[28],s5k3p8sxmipiraw_COLOR_0180[29],
    s5k3p8sxmipiraw_COLOR_0180[30],s5k3p8sxmipiraw_COLOR_0180[31],s5k3p8sxmipiraw_COLOR_0180[32],s5k3p8sxmipiraw_COLOR_0180[33],s5k3p8sxmipiraw_COLOR_0180[34],s5k3p8sxmipiraw_COLOR_0180[35],s5k3p8sxmipiraw_COLOR_0180[36],s5k3p8sxmipiraw_COLOR_0180[37],s5k3p8sxmipiraw_COLOR_0180[38],s5k3p8sxmipiraw_COLOR_0180[39],
    s5k3p8sxmipiraw_COLOR_0180[40],s5k3p8sxmipiraw_COLOR_0180[41],s5k3p8sxmipiraw_COLOR_0180[42],s5k3p8sxmipiraw_COLOR_0180[43],s5k3p8sxmipiraw_COLOR_0180[44],s5k3p8sxmipiraw_COLOR_0180[45],s5k3p8sxmipiraw_COLOR_0180[46],s5k3p8sxmipiraw_COLOR_0180[47],s5k3p8sxmipiraw_COLOR_0180[48],s5k3p8sxmipiraw_COLOR_0180[49],
    s5k3p8sxmipiraw_COLOR_0180[50],s5k3p8sxmipiraw_COLOR_0180[51],s5k3p8sxmipiraw_COLOR_0180[52],s5k3p8sxmipiraw_COLOR_0180[53],s5k3p8sxmipiraw_COLOR_0180[54],s5k3p8sxmipiraw_COLOR_0180[55],s5k3p8sxmipiraw_COLOR_0180[56],s5k3p8sxmipiraw_COLOR_0180[57],s5k3p8sxmipiraw_COLOR_0180[58],s5k3p8sxmipiraw_COLOR_0180[59],
    s5k3p8sxmipiraw_COLOR_0240[0],s5k3p8sxmipiraw_COLOR_0240[1],s5k3p8sxmipiraw_COLOR_0240[2],s5k3p8sxmipiraw_COLOR_0240[3],s5k3p8sxmipiraw_COLOR_0240[4],s5k3p8sxmipiraw_COLOR_0240[5],s5k3p8sxmipiraw_COLOR_0240[6],s5k3p8sxmipiraw_COLOR_0240[7],s5k3p8sxmipiraw_COLOR_0240[8],s5k3p8sxmipiraw_COLOR_0240[9],
    s5k3p8sxmipiraw_COLOR_0240[10],s5k3p8sxmipiraw_COLOR_0240[11],s5k3p8sxmipiraw_COLOR_0240[12],s5k3p8sxmipiraw_COLOR_0240[13],s5k3p8sxmipiraw_COLOR_0240[14],s5k3p8sxmipiraw_COLOR_0240[15],s5k3p8sxmipiraw_COLOR_0240[16],s5k3p8sxmipiraw_COLOR_0240[17],s5k3p8sxmipiraw_COLOR_0240[18],s5k3p8sxmipiraw_COLOR_0240[19],
    s5k3p8sxmipiraw_COLOR_0240[20],s5k3p8sxmipiraw_COLOR_0240[21],s5k3p8sxmipiraw_COLOR_0240[22],s5k3p8sxmipiraw_COLOR_0240[23],s5k3p8sxmipiraw_COLOR_0240[24],s5k3p8sxmipiraw_COLOR_0240[25],s5k3p8sxmipiraw_COLOR_0240[26],s5k3p8sxmipiraw_COLOR_0240[27],s5k3p8sxmipiraw_COLOR_0240[28],s5k3p8sxmipiraw_COLOR_0240[29],
    s5k3p8sxmipiraw_COLOR_0240[30],s5k3p8sxmipiraw_COLOR_0240[31],s5k3p8sxmipiraw_COLOR_0240[32],s5k3p8sxmipiraw_COLOR_0240[33],s5k3p8sxmipiraw_COLOR_0240[34],s5k3p8sxmipiraw_COLOR_0240[35],s5k3p8sxmipiraw_COLOR_0240[36],s5k3p8sxmipiraw_COLOR_0240[37],s5k3p8sxmipiraw_COLOR_0240[38],s5k3p8sxmipiraw_COLOR_0240[39],
    s5k3p8sxmipiraw_COLOR_0240[40],s5k3p8sxmipiraw_COLOR_0240[41],s5k3p8sxmipiraw_COLOR_0240[42],s5k3p8sxmipiraw_COLOR_0240[43],s5k3p8sxmipiraw_COLOR_0240[44],s5k3p8sxmipiraw_COLOR_0240[45],s5k3p8sxmipiraw_COLOR_0240[46],s5k3p8sxmipiraw_COLOR_0240[47],s5k3p8sxmipiraw_COLOR_0240[48],s5k3p8sxmipiraw_COLOR_0240[49],
    s5k3p8sxmipiraw_COLOR_0240[50],s5k3p8sxmipiraw_COLOR_0240[51],s5k3p8sxmipiraw_COLOR_0240[52],s5k3p8sxmipiraw_COLOR_0240[53],s5k3p8sxmipiraw_COLOR_0240[54],s5k3p8sxmipiraw_COLOR_0240[55],s5k3p8sxmipiraw_COLOR_0240[56],s5k3p8sxmipiraw_COLOR_0240[57],s5k3p8sxmipiraw_COLOR_0240[58],s5k3p8sxmipiraw_COLOR_0240[59],
    s5k3p8sxmipiraw_COLOR_0300[0],s5k3p8sxmipiraw_COLOR_0300[1],s5k3p8sxmipiraw_COLOR_0300[2],s5k3p8sxmipiraw_COLOR_0300[3],s5k3p8sxmipiraw_COLOR_0300[4],s5k3p8sxmipiraw_COLOR_0300[5],s5k3p8sxmipiraw_COLOR_0300[6],s5k3p8sxmipiraw_COLOR_0300[7],s5k3p8sxmipiraw_COLOR_0300[8],s5k3p8sxmipiraw_COLOR_0300[9],
    s5k3p8sxmipiraw_COLOR_0300[10],s5k3p8sxmipiraw_COLOR_0300[11],s5k3p8sxmipiraw_COLOR_0300[12],s5k3p8sxmipiraw_COLOR_0300[13],s5k3p8sxmipiraw_COLOR_0300[14],s5k3p8sxmipiraw_COLOR_0300[15],s5k3p8sxmipiraw_COLOR_0300[16],s5k3p8sxmipiraw_COLOR_0300[17],s5k3p8sxmipiraw_COLOR_0300[18],s5k3p8sxmipiraw_COLOR_0300[19],
    s5k3p8sxmipiraw_COLOR_0300[20],s5k3p8sxmipiraw_COLOR_0300[21],s5k3p8sxmipiraw_COLOR_0300[22],s5k3p8sxmipiraw_COLOR_0300[23],s5k3p8sxmipiraw_COLOR_0300[24],s5k3p8sxmipiraw_COLOR_0300[25],s5k3p8sxmipiraw_COLOR_0300[26],s5k3p8sxmipiraw_COLOR_0300[27],s5k3p8sxmipiraw_COLOR_0300[28],s5k3p8sxmipiraw_COLOR_0300[29],
    s5k3p8sxmipiraw_COLOR_0300[30],s5k3p8sxmipiraw_COLOR_0300[31],s5k3p8sxmipiraw_COLOR_0300[32],s5k3p8sxmipiraw_COLOR_0300[33],s5k3p8sxmipiraw_COLOR_0300[34],s5k3p8sxmipiraw_COLOR_0300[35],s5k3p8sxmipiraw_COLOR_0300[36],s5k3p8sxmipiraw_COLOR_0300[37],s5k3p8sxmipiraw_COLOR_0300[38],s5k3p8sxmipiraw_COLOR_0300[39],
    s5k3p8sxmipiraw_COLOR_0300[40],s5k3p8sxmipiraw_COLOR_0300[41],s5k3p8sxmipiraw_COLOR_0300[42],s5k3p8sxmipiraw_COLOR_0300[43],s5k3p8sxmipiraw_COLOR_0300[44],s5k3p8sxmipiraw_COLOR_0300[45],s5k3p8sxmipiraw_COLOR_0300[46],s5k3p8sxmipiraw_COLOR_0300[47],s5k3p8sxmipiraw_COLOR_0300[48],s5k3p8sxmipiraw_COLOR_0300[49],
    s5k3p8sxmipiraw_COLOR_0300[50],s5k3p8sxmipiraw_COLOR_0300[51],s5k3p8sxmipiraw_COLOR_0300[52],s5k3p8sxmipiraw_COLOR_0300[53],s5k3p8sxmipiraw_COLOR_0300[54],s5k3p8sxmipiraw_COLOR_0300[55],s5k3p8sxmipiraw_COLOR_0300[56],s5k3p8sxmipiraw_COLOR_0300[57],s5k3p8sxmipiraw_COLOR_0300[58],s5k3p8sxmipiraw_COLOR_0300[59],
    s5k3p8sxmipiraw_COLOR_0360[0],s5k3p8sxmipiraw_COLOR_0360[1],s5k3p8sxmipiraw_COLOR_0360[2],s5k3p8sxmipiraw_COLOR_0360[3],s5k3p8sxmipiraw_COLOR_0360[4],s5k3p8sxmipiraw_COLOR_0360[5],s5k3p8sxmipiraw_COLOR_0360[6],s5k3p8sxmipiraw_COLOR_0360[7],s5k3p8sxmipiraw_COLOR_0360[8],s5k3p8sxmipiraw_COLOR_0360[9],
    s5k3p8sxmipiraw_COLOR_0360[10],s5k3p8sxmipiraw_COLOR_0360[11],s5k3p8sxmipiraw_COLOR_0360[12],s5k3p8sxmipiraw_COLOR_0360[13],s5k3p8sxmipiraw_COLOR_0360[14],s5k3p8sxmipiraw_COLOR_0360[15],s5k3p8sxmipiraw_COLOR_0360[16],s5k3p8sxmipiraw_COLOR_0360[17],s5k3p8sxmipiraw_COLOR_0360[18],s5k3p8sxmipiraw_COLOR_0360[19],
    s5k3p8sxmipiraw_COLOR_0360[20],s5k3p8sxmipiraw_COLOR_0360[21],s5k3p8sxmipiraw_COLOR_0360[22],s5k3p8sxmipiraw_COLOR_0360[23],s5k3p8sxmipiraw_COLOR_0360[24],s5k3p8sxmipiraw_COLOR_0360[25],s5k3p8sxmipiraw_COLOR_0360[26],s5k3p8sxmipiraw_COLOR_0360[27],s5k3p8sxmipiraw_COLOR_0360[28],s5k3p8sxmipiraw_COLOR_0360[29],
    s5k3p8sxmipiraw_COLOR_0360[30],s5k3p8sxmipiraw_COLOR_0360[31],s5k3p8sxmipiraw_COLOR_0360[32],s5k3p8sxmipiraw_COLOR_0360[33],s5k3p8sxmipiraw_COLOR_0360[34],s5k3p8sxmipiraw_COLOR_0360[35],s5k3p8sxmipiraw_COLOR_0360[36],s5k3p8sxmipiraw_COLOR_0360[37],s5k3p8sxmipiraw_COLOR_0360[38],s5k3p8sxmipiraw_COLOR_0360[39],
    s5k3p8sxmipiraw_COLOR_0360[40],s5k3p8sxmipiraw_COLOR_0360[41],s5k3p8sxmipiraw_COLOR_0360[42],s5k3p8sxmipiraw_COLOR_0360[43],s5k3p8sxmipiraw_COLOR_0360[44],s5k3p8sxmipiraw_COLOR_0360[45],s5k3p8sxmipiraw_COLOR_0360[46],s5k3p8sxmipiraw_COLOR_0360[47],s5k3p8sxmipiraw_COLOR_0360[48],s5k3p8sxmipiraw_COLOR_0360[49],
    s5k3p8sxmipiraw_COLOR_0360[50],s5k3p8sxmipiraw_COLOR_0360[51],s5k3p8sxmipiraw_COLOR_0360[52],s5k3p8sxmipiraw_COLOR_0360[53],s5k3p8sxmipiraw_COLOR_0360[54],s5k3p8sxmipiraw_COLOR_0360[55],s5k3p8sxmipiraw_COLOR_0360[56],s5k3p8sxmipiraw_COLOR_0360[57],s5k3p8sxmipiraw_COLOR_0360[58],s5k3p8sxmipiraw_COLOR_0360[59],
},