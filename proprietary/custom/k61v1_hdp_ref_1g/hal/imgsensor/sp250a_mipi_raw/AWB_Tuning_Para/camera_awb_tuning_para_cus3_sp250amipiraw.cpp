#include "camera_custom_nvram.h"
#include "camera_awb_tuning_para_sp250amipiraw.h"

#define NVRAM_TUNING_PARAM_NUM  6511001

template <>
AWB_NVRAM_T const&
getAWBNVRAM_sp250amipiraw<CAM_SCENARIO_CUSTOM3>() // VT
{
    static AWB_NVRAM_T  g_rAWBNVRAM =
    AWB_NVRAM_START
    {
   {
  // AWB calibration data
  {
    // rUnitGain (unit gain: 1.0 = 512)
    {
      0,  // i4R
      0,  // i4G
      0 // i4B
    },
    // rGoldenGain (golden sample gain: 1.0 = 512)
    {
      0,  // i4R
      0,  // i4G
      0 // i4B
    },
                            // rUnitGain TL84 (unit gain: 1.0 = 512)
                            {
                                0,    // i4R
                                0,    // i4G
                                0     // i4B
                            },
                            // rGoldenGain TL84 (golden sample gain: 1.0 = 512)
                            {
                                0,    // i4R
                                0,    // i4G
                                0     // i4B
                            },
                             // rUnitGain Alight (unit gain: 1.0 = 512)
                            {
                                0,    // i4R
                                0,    // i4G
                                0     // i4B
                            },
                            // rGoldenGain Alight (golden sample gain: 1.0 = 512)
                            {
                                0,    // i4R
                                0,    // i4G
                                0     // i4B
                            },
    // rTuningUnitGain (Tuning sample unit gain: 1.0 = 512)
    {
      0,  // i4R
      0,  // i4G
      0 // i4B
    },
				// rD65Gain
				{
					756,  // i4R
					512,  // i4G
					591  // i4B
				}
			},
			// rOriginalXY
			{
				// rStrobe
				{
					91,  // i4X
					-197  // i4Y
				},
				// rHorizon
				{
					-378,  // i4X
					-123  // i4Y
				},
				// rA
				{
					-279,  // i4X
					-153  // i4Y
				},
				// rTL84
				{
					-127,  // i4X
					-242  // i4Y
				},
				// rCWF
				{
					-91,  // i4X
					-293  // i4Y
				},
				// rDNP
				{
					-49,  // i4X
					-204  // i4Y
				},
				// rD65
				{
					91,  // i4X
					-197  // i4Y
				},
				// rDF
				{
					0,  // i4X
					0  // i4Y
				}
			},
			// rRotatedXY
			{
				// rStrobe
				{
					111,  // i4X
					-187  // i4Y
				},
				// rHorizon
				{
					-364,  // i4X
					-162  // i4Y
				},
				// rA
				{
					-262,  // i4X
					-182  // i4Y
				},
				// rTL84
				{
					-101,  // i4X
					-254  // i4Y
				},
				// rCWF
				{
					-60,  // i4X
					-301  // i4Y
				},
				// rDNP
				{
					-27,  // i4X
					-208  // i4Y
				},
				// rD65
				{
					111,  // i4X
					-187  // i4Y
				},
				// rDF
				{
					90,  // i4X
					-287  // i4Y
				}
			},
			// rLightAWBGain
			{
				// rStrobe
				{
					756,  // i4R
					512,  // i4G
					591  // i4B
				},
				// rHorizon
				{
					512,  // i4R
					723,  // i4G
					1423  // i4B
				},
				// rA
				{
					512,  // i4R
					607,  // i4G
					1089  // i4B
				},
				// rTL84
				{
					598,  // i4R
					512,  // i4G
					844  // i4B
				},
				// rCWF
				{
					673,  // i4R
					512,  // i4G
					860  // i4B
				},
				// rDNP
				{
					631,  // i4R
					512,  // i4G
					721  // i4B
				},
				// rD65
				{
					756,  // i4R
					512,  // i4G
					591  // i4B
				},
				// rDF
				{
					512,  // i4R
					512,  // i4G
					512  // i4B
				}
			},
			// rRotationMatrix
			{
				-6,  // i4RotationAngle
				255,  // i4Cos
				-27  // i4Sin
			},
			// rDaylightLocus
			{
				-102,  // i4SlopeNumerator
				128  // i4SlopeDenominator
			},
			// rPredictorGain
			{
				101,  // i4PrefRatio100
				// rSpatial_DaylightLocus_L
				{
					726,  // i4R
					530,  // i4G
					611  // i4B
				},
				// rSpatial_DaylightLocus_H
				{
					633,  // i4R
					512,  // i4G
					681  // i4B
				},
				// rTemporal_General
				{
					756,  // i4R
					512,  // i4G
					591  // i4B
				},
				// rAWBGain_LSC
				{
					598,  // i4R
					512,  // i4G
					715  // i4B
				}
			},
			// rAWBLightArea
			{
				// rStrobe
				{
					161,  // i4RightBound
					61,  // i4LeftBound
					-137,  // i4UpperBound
					-237  // i4LowerBound
				},
				// rTungsten
				{
					-165,  // i4RightBound
					-764,  // i4LeftBound
					-107,  // i4UpperBound
					-218  // i4LowerBound
				},
				// rWarmFluorescent
				{
					-165,  // i4RightBound
					-764,  // i4LeftBound
					-218,  // i4UpperBound
					-391  // i4LowerBound
				},
				// rFluorescent
				{
					-51,  // i4RightBound
					-165,  // i4LeftBound
					-127,  // i4UpperBound
					-278  // i4LowerBound
				},
				// rCWF
				{
					6,  // i4RightBound
					-165,  // i4LeftBound
					-278,  // i4UpperBound
					-356  // i4LowerBound
				},
				// rDaylight
				{
					141,  // i4RightBound
					-51,  // i4LeftBound
					-127,  // i4UpperBound
					-278  // i4LowerBound
				},
				// rShade
				{
					471,  // i4RightBound
					141,  // i4LeftBound
					-127,  // i4UpperBound
					-233  // i4LowerBound
				},
				// rDaylightFluorescent
				{
					141,  // i4RightBound
					6,  // i4LeftBound
					-278,  // i4UpperBound
					-356  // i4LowerBound
				}
			},
			// rPWBLightArea
			{
				// rReferenceArea
				{
					471,  // i4RightBound
					-764,  // i4LeftBound
					-82,  // i4UpperBound
					-391  // i4LowerBound
				},
				// rDaylight
				{
					166,  // i4RightBound
					-51,  // i4LeftBound
					-127,  // i4UpperBound
					-278  // i4LowerBound
				},
				// rCloudyDaylight
				{
					266,  // i4RightBound
					91,  // i4LeftBound
					-127,  // i4UpperBound
					-278  // i4LowerBound
				},
				// rShade
				{
					366,  // i4RightBound
					91,  // i4LeftBound
					-127,  // i4UpperBound
					-278  // i4LowerBound
				},
				// rTwilight
				{
					-51,  // i4RightBound
					-211,  // i4LeftBound
					-127,  // i4UpperBound
					-278  // i4LowerBound
				},
				// rFluorescent
				{
					161,  // i4RightBound
					-201,  // i4LeftBound
					-137,  // i4UpperBound
					-351  // i4LowerBound
				},
				// rWarmFluorescent
				{
					-162,  // i4RightBound
					-362,  // i4LeftBound
					-137,  // i4UpperBound
					-351  // i4LowerBound
				},
				// rIncandescent
				{
					-162,  // i4RightBound
					-362,  // i4LeftBound
					-127,  // i4UpperBound
					-278  // i4LowerBound
				},
				// rGrayWorld
				{
					5000,  // i4RightBound
					-5000,  // i4LeftBound
					5000,  // i4UpperBound
					-5000  // i4LowerBound
				}
			},
			// rPWBDefaultGain
			{
				// rDaylight
				{
					711,  // i4R
					512,  // i4G
					646  // i4B
				},
				// rCloudyDaylight
				{
					851,  // i4R
					512,  // i4G
					558  // i4B
				},
				// rShade
				{
					917,  // i4R
					512,  // i4G
					526  // i4B
				},
				// rTwilight
				{
					538,  // i4R
					512,  // i4G
					810  // i4B
				},
				// rFluorescent
				{
					666,  // i4R
					512,  // i4G
					754  // i4B
				},
				// rWarmFluorescent
				{
					465,  // i4R
					512,  // i4G
					1008  // i4B
				},
				// rIncandescent
				{
					442,  // i4R
					512,  // i4G
					948  // i4B
				},
				// rGrayWorld
				{
					512,  // i4R
					512,  // i4G
					512  // i4B
				}
			},
			// rPreferenceColor
			{
				// rTungsten
				{
					40,  // i4SliderValue
					3979  // i4OffsetThr
				},
				// rWarmFluorescent
				{
					40,  // i4SliderValue
					3979  // i4OffsetThr
				},
				// rShade
				{
					50,  // i4SliderValue
					911  // i4OffsetThr
				},
				// rSunsetArea
				{
					-8,  // i4BoundXrThr
					-208  // i4BoundYrThr
				},
				// rShadeFArea
				{
					-165,  // i4BoundXrThr
					-258  // i4BoundYrThr
				},
				// rShadeFVerTex
				{
					-108,  // i4BoundXrThr
					-268  // i4BoundYrThr
				},
				// rShadeCWFArea
				{
					-165,  // i4BoundXrThr
					-305  // i4BoundYrThr
				},
				// rShadeCWFVerTex
				{
					-80,  // i4BoundXrThr
					-331  // i4BoundYrThr
				}
  },
  // CCT estimation
  {
    // CCT
    {
      2300, // CCT0
      2850, // CCT1
      3750, // CCT2
      5100, // CCT3
      6500     // CCT4
    },
    // Rotated X coordinate
    {
					-475, -373, -212, -138, 0
    }
  }
            },

                // Algorithm Tuning Paramter
                {
                    // AWB Backup Enable
                    0,

                    // Daylight locus offset LUTs for tungsten
                {
                    21, // i4Size: LUT dimension
                    {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000}, // i4LUTIn
                    {0, 350,  800, 1222, 1444, 1667, 1889, 2111, 2333, 2556, 2778, 3000, 3222, 3444, 3667, 3889, 4111, 4333, 4556, 4778,  5000} // i4LUTOut
                },

                // Daylight locus offset LUTs for WF
                {
                    21, // i4Size: LUT dimension
                    {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000}, // i4LUTIn
                    {0, 350, 700, 1000, 1444, 1667, 1889, 2111, 2333, 2556, 2778, 3000, 3222, 3444, 3667, 3889, 4111, 4333, 4556, 4778, 5000} // i4LUTOut
                },

                // Daylight locus offset LUTs for shade
                {
                    21, // i4Size: LUT dimension
                    {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000}, // i4LUTIn
                    {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000} // i4LUTOut
                },
                // Preference gain for each light source
                {
                    //        LV0              LV1              LV2              LV3              LV4              LV5              LV6              LV7              LV8              LV9
                    {
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512},
                    //        LV10             LV11             LV12             LV13             LV14             LV15             LV16             LV17             LV18
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                  }, // STROBE
                  {
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512},
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                  }, // TUNGSTEN
                  {
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512},
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                  }, // WARM F
                  {
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512},
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}
                    }, // F
                    {
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512},
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                    }, // CWF
                    {
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512},
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}
                    }, // DAYLIGHT
                    {
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512},
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                    }, // SHADE
                    {
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512},
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                    } // DAYLIGHT F
                },
                    // Parent block weight parameter
                    {
                        1,      // bEnable
                        6           // i4ScalingFactor: [6] 1~12, [7] 1~6, [8] 1~3, [9] 1~2, [>=10]: 1
                    },
                    // AWB LV threshold for predictor
                    {
                            115,    // i4InitLVThr_L
                            155,    // i4InitLVThr_H
                            100      // i4EnqueueLVThr
                    },
                    // AWB number threshold for temporal predictor
                    {
                            65,     // i4Neutral_ParentBlk_Thr
                        //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   2,   2,   2,   2,   2,   2,   2}  // (%) i4CWFDF_LUTThr
                    },
                    // AWB light neutral noise reduction for outdoor
                    {
                        //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                        // Non neutral
                    { 3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // Flurescent
                {   0,   0,   0,   0,   0,   3,   5,   5,   5,   5,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // CWF
                {   0,   0,   0,   0,   0,   3,   5,   5,   5,   5,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // Daylight
                    { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2,  2,  2,  2},  // (%)
                    // DF
                    { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    },
                    // AWB feature detection
                    {
                        // Sunset Prop
                        {
                            1,      // i4Enable
                            120,        // i4LVThr_L
                          130,        // i4LVThr_H
                            10,         // i4SunsetCountThr
                            0,          // i4SunsetCountRatio_L
                            171         // i4SunsetCountRatio_H
                        },

                        // Shade F Detection
                        {
                            1,      // i4Enable
                        50,        // i4LVThr_L
					90,  // i4LVThr_H
                            128         // i4DaylightProb
                        },

                        // Shade CWF Detection
                        {
                            1,        // i4Enable
                        50,        // i4LVThr_L
					90,  // i4LVThr_H
                        192         // i4DaylightProb
                        }
                },

                    // AWB non-neutral probability for spatial and temporal weighting look-up table (Max: 100; Min: 0)
                    {
                        //LV0   1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                    {   0,  33,  66, 100, 100, 100, 100, 100, 100, 100, 100,  70,  30,  20,  10,   0,   0,   0,   0}
                    },

                    // AWB daylight locus probability look-up table (Max: 100; Min: 0)
                    {
            //LV0    1     2     3      4     5     6     7     8      9      10     11    12   13     14    15   16    17    18
                    { 100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  100,  50,  25,  0,  0,  0,  0}, // Strobe
                { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  25,   0,   0,   0}, // Tungsten
                { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  25,  25,  25,   0,   0,   0}, // Warm fluorescent
                { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  95,  75,  50,  25,  25,  25,   0,   0,   0}, // Fluorescent
                {  90,  90,  90,  90,  90,  90,  90,  90,  90,  90,  80,  55,  30,  30,  30,  30,   0,   0,   0}, // CWF
                { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  40,  30,  20}, // Daylight
                { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  25,   0,   0,   0,   0}, // Shade
                {  90,  90,  90,  90,  90,  90,  90,  90,  90,  90,  80,  55,  30,  30,  30,  30,   0,   0,   0} // Daylight fluorescent
                },

                // AWB tuning information
                {
                    6735,       // project code
                    5588,       // model
                    20150624,   // date
                    0,          // reserved 0
                    1,          // reserved 1
                    2,          // reserved 2
                    3,          // reserved 3
                    4,          // reserved 4
                },
       }
};
    return g_rAWBNVRAM;
};