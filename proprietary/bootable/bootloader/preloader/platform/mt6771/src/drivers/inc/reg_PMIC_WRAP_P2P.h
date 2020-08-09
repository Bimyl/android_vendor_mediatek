#ifndef __PMIC_WRAP_P2P_REGS_H__
#define __PMIC_WRAP_P2P_REGS_H__

#define PMIC_WRAP_P2P_BASE (0x109AB000)

#define PMIC_WRAP_P2P_WACS_P2P_EN           ((UINT32P)(PMIC_WRAP_P2P_BASE+0x200))
#define PMIC_WRAP_P2P_INIT_DONE_P2P         ((UINT32P)(PMIC_WRAP_P2P_BASE+0x204))
#define PMIC_WRAP_P2P_WACS_P2P_CMD          ((UINT32P)(PMIC_WRAP_P2P_BASE+0x208))
#define PMIC_WRAP_P2P_WACS_P2P_RDATA        ((UINT32P)(PMIC_WRAP_P2P_BASE+0x20C))
#define PMIC_WRAP_P2P_WACS_P2P_VLDCLR       ((UINT32P)(PMIC_WRAP_P2P_BASE+0x210))

#endif //__PMIC_WRAP_P2P_REGS_H__
