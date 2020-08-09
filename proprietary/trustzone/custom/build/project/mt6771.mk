MTK_ATF_SUPPORT=yes
MTK_TEE_SUPPORT=no
TRUSTONIC_TEE_SUPPORT=no
TRUSTONIC_TEE_VERSION=410
MTK_MACH_TYPE=mt6771
MTK_ATF_VERSION=v1.3
MTK_TEE_DRAM_SIZE=0x1300000
SECURE_DEINT_SUPPORT=no
MTK_STACK_PROTECTOR=yes
DRAM_EXTENSION_SUPPORT=yes
#ATF_BYPASS_DRAM=yes
#0x13A00-64 byte
ATF_SRAM_IMG_SIZE := 80320
ATF_DRAM_START_ADDR := 0x54600000
MICROTRUST_TEE_SUPPORT=no
MICROTRUST_TEE_VERSION=300
MTK_FIQ_CACHE_SUPPORT=yes
MTK_INDIRECT_ACCESS_SUPPORT=no
MTK_GIC_VERSION=500
KEYMASTER_RPMB=no
KEYMASTER_WRAPKEY=yes
MTK_DRCC=yes
MTK_CM_MGR=yes
MTK_ENABLE_GENIEZONE=no
MTK_ENABLE_MPU_HAL_SUPPORT=yes
ifeq ($(TARGET_BUILD_VARIANT), user)
  MTK_DEBUGSYS_LOCK = yes
endif
MTK_ACAO_SUPPORT=yes