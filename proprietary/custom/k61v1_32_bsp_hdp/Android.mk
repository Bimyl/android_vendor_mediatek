LOCAL_PATH:= $(call my-dir)
ifeq ($(MTK_PROJECT), k61v1_32_bsp_hdp)
include $(call all-makefiles-under,$(LOCAL_PATH))
endif