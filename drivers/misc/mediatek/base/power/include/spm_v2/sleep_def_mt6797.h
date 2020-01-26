/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __sleep_def_h__
#define __sleep_def_h__

/*
 * Auto generated by DE, please DO NOT modify this file directly.
 */

/* --- SPM Flag Define --- */
#define SPM_FLAG_DIS_CPU_PDN                  (1U << 0)
#define SPM_FLAG_DIS_INFRA_PDN                (1U << 1)
#define SPM_FLAG_DIS_DDRPHY_PDN               (1U << 2)
#define SPM_FLAG_DIS_VCORE_DVS                (1U << 3)
#define SPM_FLAG_DIS_VCORE_DFS                (1U << 4)
#define SPM_FLAG_DIS_DPD                      (1U << 5)
#define SPM_FLAG_DIS_BUS_CLOCK_OFF            (1U << 6)
#define SPM_FLAG_DIS_MD_INFRA_PDN             (1U << 7)
#define SPM_FLAG_KEEP_CSYSPWRUPACK_HIGH       (1U << 8)
#define SPM_FLAG_DIS_VPROC_VSRAM_DVS          (1U << 9)
#define SPM_FLAG_RUN_COMMON_SCENARIO          (1U << 10)
#define SPM_FLAG_EN_MET_DBG_FOR_VCORE_DVFS    (1U << 11)
#define SPM_FLAG_SODI_CG_MODE                 (1U << 12)
#define SPM_FLAG_SODI_NO_EVENT                (1U << 13)
#define SPM_FLAG_ENABLE_SODI3                 (1U << 14)
#define SPM_FLAG_DIS_SRCCLKEN_LOW             (1U << 15)
#define SPM_FLAG_DIS_SYSRAM_SLEEP             (1U << 16)
#define SPM_FLAG_EN_HPM_SODI                  (1U << 17)

#if defined(CONFIG_ARCH_MT6755)
#define SPM_FLAG_DIS_MCDI_FLOW                (1U << 18)
#elif defined(CONFIG_ARCH_MT6797)
#define SPM_FLAG_EN_SEGMENT2                  (1U << 18)
#endif

#define SPM_FLAG_NOT_USED_IN_EN_LPMP3_WITH_DMA   (1U << 19)
#define SPM_FLAG_EN_NFC_CLOCK_BUF_CTRL        (1U << 20)
#define SPM_FLAG_EN_CONN_CLOCK_BUF_CTRL       (1U << 21)
#define SPM_FLAG_DONT_TOUCH_DFS_ACTIVE        (1U << 22)
#define SPM_FLAG_DONT_TOUCH_DVFS_STATE_0        (1U << 23)
#define SPM_FLAG_DONT_TOUCH_DVFS_STATE_1        (1U << 24)
#define SPM_FLAG_DONT_TOUCH_CONN_CLK_STATE    (1U << 25)
#define SPM_FLAG_DONT_TOUCH_NFC_CLK_STATE     (1U << 26)
#define SPM_FLAG_DONT_TOUCH_26M_STATE         (1U << 27)
#define SPM_FLAG_DONT_TOUCH_INFRA_STATE       (1U << 28)
#define SPM_FLAG_DONT_TOUCH_APSRC_STATE       (1U << 29)
#define SPM_FLAG_DONT_TOUCH_VRF18_STATE       (1U << 30)
#define SPM_FLAG_DONT_TOUCH_DDREN_STATE       (1U << 31)
/* --- SPM DEBUG Define --- */
#define SPM_DBG_DEBUG_IDX_26M_WAKE            (1U << 0)
#define SPM_DBG_DEBUG_IDX_26M_SLEEP           (1U << 1)
#define SPM_DBG_DEBUG_IDX_INFRA_WAKE          (1U << 2)
#define SPM_DBG_DEBUG_IDX_INFRA_SLEEP         (1U << 3)
#define SPM_DBG_DEBUG_IDX_APSRC_WAKE          (1U << 4)
#define SPM_DBG_DEBUG_IDX_APSRC_SLEEP         (1U << 5)
#define SPM_DBG_DEBUG_IDX_VRF18_WAKE          (1U << 6)
#define SPM_DBG_DEBUG_IDX_VRF18_SLEEP         (1U << 7)
#define SPM_DBG_DEBUG_IDX_DDREN_WAKE          (1U << 8)
#define SPM_DBG_DEBUG_IDX_DDREN_SLEEP         (1U << 9)
#define SPM_DBG_DEBUG_IDX_NFC_CKBUF_ON        (1U << 10)
#define SPM_DBG_DEBUG_IDX_NFC_CKBUF_OFF       (1U << 11)
#define SPM_DBG_DEBUG_IDX_CPU_PDN             (1U << 12)
#define SPM_DBG_DEBUG_IDX_DPD                 (1U << 13)
#define SPM_DBG_DEBUG_IDX_CONN_CKBUF_ON       (1U << 14)
#define SPM_DBG_DEBUG_IDX_CONN_CKBUF_OFF      (1U << 15)
#define SPM_DBG_DEBUG_IDX_VCORE_DVFS_START    (1U << 16)
#define SPM_DBG_RESERVED_BIT17                (1U << 17)
#define SPM_DBG_RESERVED_BIT18                (1U << 18)
#define SPM_DBG_RESERVED_BIT19                (1U << 19)
#define SPM_DBG_RESERVED_BIT20                (1U << 20)
#define SPM_DBG_RESERVED_BIT21                (1U << 21)
#define SPM_DBG_RESERVED_BIT22                (1U << 22)
#define SPM_DBG_RESERVED_BIT23                (1U << 23)
#define SPM_DBG_RESERVED_BIT24                (1U << 24)
#define SPM_DBG_RESERVED_BIT25                (1U << 25)
#define SPM_DBG_RESERVED_BIT26                (1U << 26)
#define SPM_DBG_RESERVED_BIT27                (1U << 27)
#define SPM_DBG_RESERVED_BIT28                (1U << 28)
#define SPM_DBG_RESERVED_BIT29                (1U << 29)
#define SPM_DBG_RESERVED_BIT30                (1U << 30)
#define SPM_DBG_RESERVED_BIT31                (1U << 31)

/*
 * Macro and Inline
 */
#define is_cpu_pdn(flags)		(!((flags) & SPM_FLAG_DIS_CPU_PDN))
#define is_infra_pdn(flags)		(!((flags) & SPM_FLAG_DIS_INFRA_PDN))
#define is_ddrphy_pdn(flags)		(!((flags) & SPM_FLAG_DIS_DDRPHY_PDN))

#endif /* __sleep_def_h__ */
