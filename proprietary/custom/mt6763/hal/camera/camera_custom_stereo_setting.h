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
#ifndef CAMERA_CUSTOM_STEREO_SETTING_H_
#define CAMERA_CUSTOM_STEREO_SETTING_H_
const char *DEFAULT_STEREO_SETTING =
"{"
    "\"Sensors\": ["
        "{"
            "\"UID\": \"0x386\","
            "\"Name\": \"IMX386_MIPI_RAW\","
            "\"Capture Size\": {"
                "\"4:3\": ["
                    "\"4160x3120\""
                "],"
                "\"16:9\": ["
                    "\"4096x2304\""
                "]"
            "},"
            "\"IMGOYUV Size\": {"
                "\"4:3\": \"4032x3016\","
                "\"16:9\": \"4032x2268\""
            "},"
            "\"RRZOYUV Size\": {"
                "\"4:3\": \"2016x1508\","
                "\"16:9\": \"2016x1134\""
            "},"
            "\"SensorScenarioZSD\": {"
                "\"3rdParty\": \"Capture\","
                "\"Zoom\": \"Capture\","
                "\"Multicam\": \"Capture\""
            "},"
            "\"SensorScenarioRecording\": {"
                "\"3rdParty\": \"Preview\","
                "\"Zoom\": \"Capture\","
                "\"Multicam\": \"Preview\""
            "},"
            "\"FOV\": {"
                "\"H\": 65.4,"
                "\"V\": 51.4"
            "},"
            "\"Calibration\": {"
                "\"Macro Distance\": 100,"
                "\"Infinite Distance\": 5000"
            "}"
        "},"
        "{"
            "\"UID\": \"0x30D3\","
            "\"Name\": \"S5K3M3_MIPI_RAW\","
            "\"Capture Size\": {"
                "\"4:3\": ["
                    "\"4160x3120\""
                "],"
                "\"16:9\": ["
                    "\"4096x2304\""
                "]"
            "},"
            "\"IMGOYUV Size\": {"
                "\"4:3\": \"4176x3120\","
                "\"16:9\": \"4176x2348\""
            "},"
            "\"RRZOYUV Size\": {"
                "\"4:3\": \"2088x1560\","
                "\"16:9\": \"2080x1170\""
            "},"
            "\"SensorScenarioZSD\": {"
                "\"3rdParty\": \"Preview\","
                "\"Zoom\": \"Capture\","
                "\"Multicam\": \"Preview\""
            "},"
            "\"SensorScenarioRecording\": {"
                "\"3rdParty\": \"Preview\","
                "\"Zoom\": \"Capture\","
                "\"Multicam\": \"Preview\""
            "},"
            "\"FOV\": {"
                "\"H\": 38.4,"
                "\"V\": 29.1"
            "},"
            "\"Calibration\": {"
                "\"Macro Distance\": 300,"
                "\"Infinite Distance\": 5000"
            "}"
        "},"
        "{"
            "\"UID\": \"0x20880\","
            "\"Name\": \"OV20880_MIPI_RAW\","
            "\"Capture Size\": {"
                "\"4:3\": ["
                    "\"5120x3840\""
                "],"
                "\"16:9\": ["
                    "\"5120x2880\""
                "]"
            "},"
            "\"IMGOYUV Size\": {"
                "\"4:3\": \"5120x3840\","
                "\"16:9\": \"5120x2880\""
            "},"
            "\"RRZOYUV Size\": {"
                "\"4:3\": \"2560x1920\","
                "\"16:9\": \"2560x1440\""
            "},"
            "\"SensorScenarioZSD\": {"
                "\"StereoCapture\": \"Capture\","
                "\"VSDoF\": \"Capture\","
                "\"3rdParty\": \"Capture\""
            "},"
            "\"SensorScenarioRecording\": {"
                "\"StereoCapture\": \"Preview\","
                "\"VSDoF\": \"Preview\","
                "\"3rdParty\": \"Preview\""
            "},"
            "\"FOV\": {"
                "\"H\": 66.4,"
                "\"V\": 52.3"
            "}"
        "},"
        "{"
            "\"UID\": \"0x2107\","
            "\"Name\": \"S5K2P7_MIPI_RAW\","
            "\"Capture Size\": {"
                "\"4:3\": ["
                    "\"4608x3456\""
                "],"
                "\"16:9\": ["
                    "\"4608x2592\""
                "]"
            "},"
            "\"IMGOYUV Size\": {"
                "\"4:3\": \"4608x3456\","
                "\"16:9\": \"4608x2592\""
            "},"
            "\"RRZOYUV Size\": {"
                "\"4:3\": \"2304x1728\","
                "\"16:9\": \"2304x1296\""
            "},"
            "\"SensorScenarioZSD\": {"
                "\"StereoCapture\": \"Capture\","
                "\"VSDoF\": \"Capture\","
                "\"3rdParty\": \"Capture\""
            "},"
            "\"SensorScenarioRecording\": {"
                "\"StereoCapture\": \"Preview\","
                "\"VSDoF\": \"Preview\","
                "\"3rdParty\": \"Preview\""
            "},"
            "\"FOV\": {"
                "\"H\": 66.3,"
                "\"V\": 52.3"
            "},"
            "\"Calibration\": {"
                "\"Macro Distance\": 100,"
                "\"Infinite Distance\": 5000"
            "}"
        "},"
        "{"
            "\"UID\": \"0x885A\","
            "\"Name\": \"OV8856_MIPI_RAW\","
                "\"Capture Size\": {"
                "\"4:3\": ["
                    "\"3264x2448\""
                "],"
                "\"16:9\": ["
                    "\"3264x1836\""
                "]"
            "},"
            "\"IMGOYUV Size\": {"
                "\"4:3\": \"3264x2448\","
                "\"16:9\": \"3264x1836\""
            "},"
            "\"RRZOYUV Size\": {"
                "\"4:3\": \"1632x1224\","
                "\"16:9\": \"1632x918\""
            "},"
            "\"SensorScenarioZSD\": {"
                "\"StereoCapture\": \"Preview\","
                "\"VSDoF\": \"Preview\","
                "\"3rdParty\": \"Preview\""
            "},"
            "\"SensorScenarioRecording\": {"
                "\"StereoCapture\": \"Preview\","
                "\"VSDoF\": \"Preview\","
                "\"3rdParty\": \"Preview\""
            "},"
            "\"FOV\": {"
                "\"H\": 71.6,"
                "\"V\": 56.7"
            "}"
        "},"
        "{"
            "\"UID\": \"0x885B\","
            "\"Name\": \"OV8856F_MIPI_RAW\","
            "\"Capture Size\": {"
                "\"4:3\": ["
                    "\"3264x2448\""
                "],"
                "\"16:9\": ["
                    "\"3264x1836\""
                "]"
            "},"
            "\"IMGOYUV Size\": {"
                "\"4:3\": \"3264x2448\","
                "\"16:9\": \"3264x1836\""
            "},"
            "\"RRZOYUV Size\": {"
                "\"4:3\": \"1632x1224\","
                "\"16:9\": \"1632x918\""
            "},"
            "\"SensorScenarioZSD\": {"
                "\"StereoCapture\": \"Preview\","
                "\"VSDoF\": \"Preview\","
                "\"3rdParty\": \"Preview\""
            "},"
            "\"SensorScenarioRecording\": {"
                "\"StereoCapture\": \"Preview\","
                "\"VSDoF\": \"Preview\","
                "\"3rdParty\": \"Preview\""
            "},"
            "\"FOV\": {"
                "\"H\": 71.6,"
                "\"V\": 56.7"
            "}"
        "},"
        "{"
            "\"UID\": \"0x885C\","
            "\"Name\": \"OV8856R_MIPI_RAW\","
            "\"Capture Size\": {"
                "\"4:3\": ["
                    "\"3264x2448\""
                "],"
                "\"16:9\": ["
                    "\"3264x1836\""
                "]"
            "},"
            "\"IMGOYUV Size\": {"
                "\"4:3\": \"3264x2448\","
                "\"16:9\": \"3264x1836\""
            "},"
            "\"RRZOYUV Size\": {"
                "\"4:3\": \"1632x1224\","
                "\"16:9\": \"1632x918\""
            "},"
            "\"SensorScenarioZSD\": {"
                "\"StereoCapture\": \"Preview\","
                "\"VSDoF\": \"Preview\","
                "\"3rdParty\": \"Preview\""
            "},"
            "\"SensorScenarioRecording\": {"
                "\"StereoCapture\": \"Preview\","
                "\"VSDoF\": \"Preview\","
                "\"3rdParty\": \"Preview\""
            "},"
            "\"FOV\": {"
                "\"H\": 71.6,"
                "\"V\": 56.7"
            "}"
        "},"
        "{"
            "\"UID\": \"0x5025\","
            "\"Name\": \"GC5025_MIPI_RAW\","
            "\"Capture Size\": {"
                "\"4:3\": ["
                    "\"2592x1944\""
                "],"
                "\"16:9\": ["
                    "\"2592x1458\""
                "]"
            "},"
            "\"IMGOYUV Size\": {"
                "\"4:3\": \"2592x1944\","
                "\"16:9\": \"2592x1460\""
            "},"
            "\"RRZOYUV Size\": {"
                "\"4:3\": \"1296x972\","
                "\"16:9\": \"1296x730\""
            "},"
            "\"SensorScenarioZSD\": {"
                "\"3rdParty\": \"Capture\""
            "},"
            "\"SensorScenarioRecording\": {"
                "\"3rdParty\": \"Preview\""
            "}"
        "}"
    "],"
    "\"Sensor Combinations\": ["
        "{"
            "\"Logical Device\":{"
                "\"Name\": \"bayerbayer\","
                "\"Features\": [\"3rdParty\"]"
            "},"
            "\"Sensors\": [ \"IMX386_MIPI_RAW\", \"S5K3M3_MIPI_RAW\"],"
            "\"Module Type\": 3,"
            "\"Baseline\": 0.95,"
            "\"Depthmap Size\": {"
                "\"4:3\": \"480x360\","
                "\"16:9\": \"480x272\""
            "},"
            "\"LDC\": []"
        "}"
    "],"
    "\"Callback Buffer List\": {"
        "\"//\": [\"ci: Clean Image, bi: Bokeh Image, mbd: MTK Bokeh Depth, mdb: MTK Debug Buffer, mbm: MTK Bokeh Metadata\","
           "\"Value must <= 91 bytes\"],"
        "\"Value\": \"ci\""
    "}"
"}";
#endif
