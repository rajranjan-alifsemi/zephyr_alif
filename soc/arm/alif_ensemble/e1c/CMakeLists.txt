# Copyright (c) 2024 Alif Semiconductor
#
# SPDX-License-Identifier: Apache-2.0
zephyr_sources_ifdef(CONFIG_SOC_E1C_DK_RTSS_HE soc_e1c_dk_rtss_he.c)

set(SOC_LINKER_SCRIPT ${ZEPHYR_BASE}/include/zephyr/arch/arm/cortex_m/scripts/linker.ld CACHE INTERNAL "")
