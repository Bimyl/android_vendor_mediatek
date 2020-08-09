/* Copyright Statement:
*
* This software/firmware and related documentation ("MediaTek Software") are
* protected under relevant copyright laws. The information contained herein
* is confidential and proprietary to MediaTek Inc. and/or its licensors.
* Without the prior written permission of MediaTek inc. and/or its licensors,
* any reproduction, modification, use or disclosure of MediaTek Software,
* and information contained herein, in whole or in part, shall be strictly prohibited.
*/
/* MediaTek Inc. (C) 2017. All rights reserved.
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
* have been modified by MediaTek Inc. All revisions are subject to any receiver\'s
* applicable license agreements with MediaTek Inc.
*/

#ifndef _PLAT_SMC_ID_TABLE_H_
#define _PLAT_SMC_ID_TABLE_H_

#define MTK_SIP_BL_INIT								0x82000100
#define MTK_SIP_LK_DAPC_INIT						0x82000101
#define MTK_SIP_LK_MD_REG_WRITE						0x82000102
#define MTK_SIP_LK_RPMB_INIT						0x82000103
#define MTK_SIP_LK_RPMB_UNINIT						0x82000104
#define MTK_SIP_LK_RPMB_HMAC						0x82000105
#define MTK_SIP_LK_WDT								0x82000106
#define MTK_SIP_LK_LASTBUS							0x82000107
#define MTK_SIP_LK_PLAT_DEBUG						0x82000108
#define MTK_SIP_LK_LASTPC							0x82000109
#define MTK_SIP_LK_DUMP_ATF_LOG_INFO				0x8200010A
#define MTK_SIP_LK_CRYPTO_HW_ENGINE_INIT			0x8200010B
#define MTK_SIP_LK_CRYPTO_HW_ENGINE_DISABLE			0x8200010C
#define MTK_SIP_LK_CRYPTO_SHA256_INIT				0x8200010D
#define MTK_SIP_LK_CRYPTO_SHA256_PROCESS			0x8200010E
#define MTK_SIP_LK_CRYPTO_SHA256_DONE				0x8200010F
#define MTK_SIP_LK_GET_RND							0x82000110
#define MTK_SIP_LK_AMMS_MD_BASE_ADDR_AARCH32		0x82000112
#define MTK_SIP_LK_AMMS_GET_MD_BASE_ADDR_AARCH32	0x82000113
#define MTK_SIP_RAM_DUMP_ADDR						0x82000114
#define MTK_SIP_KERNEL_BOOT							0x82000115
#define MTK_SIP_LK_LASTPC_FOR_BIG					0x82000116
#define MTK_SIP_LK_ROOT_OF_TRUST					0x82000120
#define MTK_SIP_LK_AMMS_MD_POS_ADDR_AARCH32 		0x82000121
#define MTK_SIP_LK_AMMS_MD_POS_LENGTH_AARCH32	 	0x82000122
#define MTK_SIP_LK_AMMS_GET_MD_POS_ADDR_AARCH32 	0x82000123
#define MTK_SIP_LK_AMMS_GET_MD_POS_LENGTH_AARCH32 	0x82000124
#define MTK_SIP_LK_AMMS_MD_POS_MD_VIEW_ADDR_AARCH32 0x82000125
#define MTK_SIP_LK_AMMS_GET_MD_POS_MD_VIEW_ADDR_AARCH32 0x82000126

#define MTK_SIP_KERNEL_MCDI_ARGS			0x82000231
#define MTK_SIP_KERNEL_EMIMPU_SET           0x82000262
#define MTK_SIP_KERNEL_EMIMPU_CLEAR         0x82000263
#define MTK_SIP_KERNEL_DCM					0x82000230
#define MTK_SIP_KERNEL_SPM_ARGS				0x8200022A

#endif				/* _PLAT_SMC_ID_TABLE_H_ */