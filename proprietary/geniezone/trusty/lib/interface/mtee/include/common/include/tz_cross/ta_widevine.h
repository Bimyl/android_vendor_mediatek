/*
* Copyright (c) 2015 MediaTek Inc.
*
* Permission is hereby granted, free of charge, to any person obtaining
* a copy of this software and associated documentation files
* (the "Software"), to deal in the Software without restriction,
* including without limitation the rights to use, copy, modify, merge,
* publish, distribute, sublicense, and/or sell copies of the Software,
* and to permit persons to whom the Software is furnished to do so,
* subject to the following conditions:
*
* The above copyright notice and this permission notice shall be
* included in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef __TRUSTZONE_TA_WIDEVINE__
#define __TRUSTZONE_TA_WIDEVINE__

#define TZ_TA_WIDEVINE_UUID   "ff33a6e0-8635-11e2-9e96-0800200c9a00"

/* Data Structure for Widevine TA */
/* You should define data structure used both in REE/TEE here
   N/A for Widevine TA */

/* Command for Widevine TA */

#define TZCMD_WIDEVINE_INIT                              1
#define TZCMD_WIDEVINE_TERMINATE                         2
#define TZCMD_WIDEVINE_SET_ENTITLEMENT_KEY               3
#define TZCMD_WIDEVINE_DEVICE_CONTROL                    4
#define TZCMD_WIDEVINE_DECRYPT_VIDEO                     5
#define TZCMD_WIDEVINE_DECRYPT_AUDIO                     6
#define TZCMD_WIDEVINE_INSTALL_KEYBOX                    7
#define TZCMD_WIDEVINE_IS_KEYBOX_VALID                   8
#define TZCMD_WIDEVINE_GET_DEVICE_ID                     9
#define TZCMD_WIDEVINE_GET_KEY_DATA                      10
#define TZCMD_WIDEVINE_RANDOM                            11
#define TZCMD_WIDEVINE_TEST                              12
#define TZCMD_WIDEVINE_READ_NAL                          13
//Disable or enable debug level log in tee
#define TZCMD_WIDEVINE_SET_DEBUG_LOG                     14

typedef enum TEE_MTK_CryptoResult
{
    TEE_MTK_Crypto_SUCCESS = 0,
    TEE_MTK_Crypto_ERROR_INIT_FAILED,
    TEE_MTK_Crypto_ERROR_TERMINATE_FAILED,
    TEE_MTK_Crypto_ERROR_ENTER_SECURE_PLAYBACK_FAILED,
    TEE_MTK_Crypto_ERROR_EXIT_SECURE_PLAYBACK_FAILED,
    TEE_MTK_Crypto_ERROR_SHORT_BUFFER,
    TEE_MTK_Crypto_ERROR_NO_DEVICE_KEY,
    TEE_MTK_Crypto_ERROR_NO_ASSET_KEY,
    TEE_MTK_Crypto_ERROR_KEYBOX_INVALID,
    TEE_MTK_Crypto_ERROR_NO_KEYDATA,
    TEE_MTK_Crypto_ERROR_NO_CW,
    TEE_MTK_Crypto_ERROR_DECRYPT_FAILED,
    TEE_MTK_Crypto_ERROR_WRITE_KEYBOX,
    TEE_MTK_Crypto_ERROR_WRAP_KEYBOX,
    TEE_MTK_Crypto_ERROR_BAD_MAGIC,
    TEE_MTK_Crypto_ERROR_BAD_CRC,
    TEE_MTK_Crypto_ERROR_NO_DEVICEID,
    TEE_MTK_Crypto_ERROR_RNG_FAILED,
    TEE_MTK_Crypto_ERROR_RNG_NOT_SUPPORTED,
    TEE_MTK_Crypto_ERROR_SETUP,
    TEE_MTK_Crypto_LEFT_NAL
} TEE_MTK_CryptoResult;
#endif /* __TRUSTZONE_TA_WIDEVINE__ */