#include <utils/Log.h>
#include <fcntl.h>
#include <cutils/log.h>
#include <string.h>

#include "camera_custom_nvram.h"
#include "camera_custom_sensor.h"
#include "image_sensor.h"
#include "kd_imgsensor_define.h"
#include "algorithm/ccu_ae_param.h"

//camera_info_header
#include "camera_info_imx386mipiraw.h"

#if MTK_CAM_NEW_NVRAM_SUPPORT
    #include INCLUDE_FILENAME_TUNING_MAPPING
#endif

typedef NSFeature::AECustomTransform<SENSOR_ID, MODULE_INDEX> SensorInfoSingleton_T;

namespace NSFeature {

UINT32 transBinSum_imx386mipiraw(VOID* const pData);
UINT32 transATR_imx386mipiraw(VOID* const pData);

template <>
UINT32
SensorInfoSingleton_T::
impAECustomTransform(AE_CUSTOM_TRANSFORM_ENUM const AECusFuncType, VOID* const pData) const
{
    switch(AECusFuncType)
    {
        case AE_CUSTOM_TRANSFORM_BINSUM:
            transBinSum_imx386mipiraw(pData);
            break;
        case AE_CUSTOM_TRANSFORM_ATR:
            transATR_imx386mipiraw(pData);
            break;
        default:
            ALOGD("[impAECustomTransform] undefined function type");
            break;
    }
    return 0;
}

UINT32 transBinSum_imx386mipiraw(VOID* const pData)
{
    strBinningSumTrans* pAEData = (strBinningSumTrans*)pData;
    // to do for Binning Sum customization
    return 0;
}

UINT32 transATR_imx386mipiraw(VOID* const pData)
{
    CCU_strAEOutput* pAEData = (CCU_strAEOutput*)pData;
    // to do for ATR customization
    return 0;
}

};  //  NSFeature