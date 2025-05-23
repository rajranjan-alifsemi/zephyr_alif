/* Copyright (c) 2024 Alif Semiconductor
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_ZEPHYR_DT_BINDINGS_CLOCK_ALIF_BALLETTO_CLOCKS_H_
#define ZEPHYR_INCLUDE_ZEPHYR_DT_BINDINGS_CLOCK_ALIF_BALLETTO_CLOCKS_H_

#include "alif_clocks_common.h"

/* soc specific registers */
#define ALIF_OSPI_CTRL_REG             0x3CU /* PER_SLV_CLKCTL module */
#define ALIF_RTCA_CLK_EN_REG           0x10U /* VBAT_CLKCTL module */
#define ALIF_RTCB_CLK_EN_REG           0x14U /* VBAT_CLKCTL module */
/* end of soc specific registers */

/* CDC200 pixel clocks */
#define ALIF_CDC200_PIX_SYST_ACLK  \
	ALIF_CLK_CFG(PER_MST, CDC200_PIXCLK_CTRL, 0U, 1U, 0U, 1U, 4U)
#define ALIF_CDC200_PIX_PLL_CLK3   \
	ALIF_CLK_CFG(PER_MST, CDC200_PIXCLK_CTRL, 0U, 1U, 1U, 1U, 4U)

/* CPI clocks */
#define ALIF_CPI_CLK                \
	ALIF_CLK_CFG(PER_MST, PERIPH_CLK_ENA, 0U, 1U, 0U, 0U, 0U)
#define ALIF_LPCPI_CLK              \
	ALIF_CLK_CFG(M55HE, HE_CLK_ENA, 12U, 1U, 0U, 0U, 0U)
#define ALIF_LPCPI_PXL_CLK          \
	ALIF_CLK_CFG(M55HE, HE_CAMERA_PIXCLK, 0U, 1U, 0U, 0U, 0U)

/* DPI clock */
#define ALIF_DPI_CLK                \
	ALIF_CLK_CFG(PER_MST, PERIPH_CLK_ENA, 1U, 1U, 0U, 0U, 0U)

/* DSI clock */
#define ALIF_DSI_CLK                \
	ALIF_CLK_CFG(PER_MST, PERIPH_CLK_ENA, 28U, 1U, 0U, 0U, 0U)

/* GPU clock */
#define ALIF_GPU_CLK                \
	ALIF_CLK_CFG(PER_MST, PERIPH_CLK_ENA, 8U, 1U, 0U, 0U, 0U)

/* Ethernet clocks */
#define ALIF_ETH_RMII_REFCLK_PIN    \
	ALIF_CLK_CFG(PER_MST, ETH_CTRL, 0U, 0U, 0U, 1U, 4U)
#define ALIF_ETH_RMII_PLL_CLK_50M    \
	ALIF_CLK_CFG(PER_MST, ETH_CTRL, 0U, 0U, 1U, 1U, 4U)

/* SD clock */
#define ALIF_SDC_CLK                \
	ALIF_CLK_CFG(PER_MST, PERIPH_CLK_ENA, 16U, 1U, 0U, 0U, 0U)

/* USB clock */
#define ALIF_USB_CLK                \
	ALIF_CLK_CFG(PER_MST, PERIPH_CLK_ENA, 20U, 1U, 0U, 0U, 0U)

/* MIPI clocks */
#define ALIF_MIPI_TXDPHY_CLK        \
	ALIF_CLK_CFG(PER_MST, MIPI_CKEN, 0U, 1U, 0U, 0U, 0U)
#define ALIF_MIPI_PLLREF_CLK        \
	ALIF_CLK_CFG(PER_MST, MIPI_CKEN, 8U, 1U, 0U, 0U, 0U)
#define ALIF_MIPI_BYPASS_CLK        \
	ALIF_CLK_CFG(PER_MST, MIPI_CKEN, 12U, 1U, 0U, 0U, 0U)

/* Backup SRAM clock */
#define ALIF_BACKUP_RAM_CLK         \
	ALIF_CLK_CFG(PER_SLV, EXPMST0_CTRL, 4U, 1U, 0U, 0U, 0U)

/* PDM clocks */
#define ALIF_LPPDM_76M8_CLK         \
	ALIF_CLK_CFG(M55HE, HE_CLK_ENA, 8U, 1U, 0U, 0U, 0U)

/* UART clocks */
#define ALIF_UART0_38M4_CLK         \
	ALIF_CLK_CFG(PER_SLV, UART_CTRL, 0U, 1U, 0U, 1U, 8U)
#define ALIF_UART0_SYST_PCLK        \
	ALIF_CLK_CFG(PER_SLV, UART_CTRL, 0U, 1U, 1U, 1U, 8U)
#define ALIF_UART1_38M4_CLK         \
	ALIF_CLK_CFG(PER_SLV, UART_CTRL, 1U, 1U, 0U, 1U, 9U)
#define ALIF_UART1_SYST_PCLK        \
	ALIF_CLK_CFG(PER_SLV, UART_CTRL, 1U, 1U, 1U, 1U, 9U)
#define ALIF_UART2_38M4_CLK         \
	ALIF_CLK_CFG(PER_SLV, UART_CTRL, 2U, 1U, 0U, 1U, 10U)
#define ALIF_UART2_SYST_PCLK        \
	ALIF_CLK_CFG(PER_SLV, UART_CTRL, 2U, 1U, 1U, 1U, 10U)
#define ALIF_UART3_38M4_CLK         \
	ALIF_CLK_CFG(PER_SLV, UART_CTRL, 3U, 1U, 0U, 1U, 11U)
#define ALIF_UART3_SYST_PCLK        \
	ALIF_CLK_CFG(PER_SLV, UART_CTRL, 3U, 1U, 1U, 1U, 11U)
#define ALIF_UART4_38M4_CLK         \
	ALIF_CLK_CFG(PER_SLV, UART_CTRL, 4U, 1U, 0U, 1U, 12U)
#define ALIF_UART4_SYST_PCLK        \
	ALIF_CLK_CFG(PER_SLV, UART_CTRL, 4U, 1U, 1U, 1U, 12U)
#define ALIF_UART5_38M4_CLK         \
	ALIF_CLK_CFG(PER_SLV, UART_CTRL, 5U, 1U, 0U, 1U, 13U)
#define ALIF_UART5_SYST_PCLK        \
	ALIF_CLK_CFG(PER_SLV, UART_CTRL, 5U, 1U, 1U, 1U, 13U)
#define ALIF_LPUART_CLK             \
	ALIF_CLK_CFG(AON, RTSS_HE_LPUART_CKEN, 0U, 1U, 0U, 0U, 0U)

/* CAN-FD clocks */
#define ALIF_CANFD0_HFOSC_CLK        \
	ALIF_CLK_CFG(PER_SLV, CANFD_CTRL, 8U, 1U, 0U, 1U, 9U)
#define ALIF_CANFD0_160M_CLK         \
	ALIF_CLK_CFG(PER_SLV, CANFD_CTRL, 8U, 1U, 1U, 1U, 9U)
#define ALIF_CANFD1_HFOSC_CLK        \
	ALIF_CLK_CFG(PER_SLV, CANFD_CTRL, 24U, 1U, 0U, 1U, 25U)
#define ALIF_CANFD1_160M_CLK         \
	ALIF_CLK_CFG(PER_SLV, CANFD_CTRL, 24U, 1U, 1U, 1U, 25U)

/* I2S clocks */
#define ALIF_I2S0_76M8_CLK          \
	ALIF_CLK_CFG(PER_SLV, I2S0_CTRL, 12U, 1U, 0U, 0U, 0U)
#define ALIF_I2S1_76M8_CLK          \
	ALIF_CLK_CFG(PER_SLV, I2S1_CTRL, 12U, 1U, 0U, 0U, 0U)
#define ALIF_LPI2S_76M8_CLK         \
	ALIF_CLK_CFG(M55HE, HE_I2S_CTRL, 12U, 1U, 0U, 0U, 0U)

/* I3C clock */
#define ALIF_I3C_CLK                \
	ALIF_CLK_CFG(PER_SLV, I3C_CTRL, 0U, 1U, 0U, 0U, 0U)

/* ADC clocks */
#define ALIF_ADC0_CLK               \
	ALIF_CLK_CFG(PER_SLV, ADC_CTRL, 0U, 1U, 0U, 0U, 0U)
#define ALIF_ADC1_CLK               \
	ALIF_CLK_CFG(PER_SLV, ADC_CTRL, 4U, 1U, 0U, 0U, 0U)

/* DAC clock */
#define ALIF_DAC0_CLK               \
	ALIF_CLK_CFG(PER_SLV, DAC_CTRL, 0U, 1U, 0U, 0U, 0U)

/* Comparator clocks */
#define ALIF_CMP0_CLK               \
	ALIF_CLK_CFG(PER_SLV, CMP_CTRL, 0U, 1U, 0U, 0U, 0U)
#define ALIF_CMP1_CLK               \
	ALIF_CLK_CFG(PER_SLV, CMP_CTRL, 4U, 1U, 0U, 0U, 0U)

/* OSPI clock */
#define ALIF_OSPI_CLK               \
	ALIF_CLK_CFG(PER_SLV, OSPI_CTRL, 0U, 1U, 0U, 0U, 0U)

/* I2C clocks */
#define ALIF_I2C0_CLK               \
	ALIF_CLK_CFG(PER_SLV, I2C0_CTRL, 0U, 1U, 0U, 0U, 0U)
#define ALIF_I2C1_CLK               \
	ALIF_CLK_CFG(PER_SLV, I2C1_CTRL, 0U, 1U, 0U, 0U, 0U)

/* GPIO Debounce clocks */
#define ALIF_GPIO0_DB_CLK           \
	ALIF_CLK_CFG(PER_SLV, GPIO0_CTRL, 12U, 1U, 0U, 0U, 0U)
#define ALIF_GPIO1_DB_CLK           \
	ALIF_CLK_CFG(PER_SLV, GPIO1_CTRL, 12U, 1U, 0U, 0U, 0U)
#define ALIF_GPIO2_DB_CLK           \
	ALIF_CLK_CFG(PER_SLV, GPIO2_CTRL, 12U, 1U, 0U, 0U, 0U)
#define ALIF_GPIO3_DB_CLK           \
	ALIF_CLK_CFG(PER_SLV, GPIO3_CTRL, 12U, 1U, 0U, 0U, 0U)
#define ALIF_GPIO4_DB_CLK           \
	ALIF_CLK_CFG(PER_SLV, GPIO4_CTRL, 12U, 1U, 0U, 0U, 0U)
#define ALIF_GPIO5_DB_CLK           \
	ALIF_CLK_CFG(PER_SLV, GPIO5_CTRL, 12U, 1U, 0U, 0U, 0U)
#define ALIF_GPIO6_DB_CLK           \
	ALIF_CLK_CFG(PER_SLV, GPIO6_CTRL, 12U, 1U, 0U, 0U, 0U)
#define ALIF_GPIO7_DB_CLK           \
	ALIF_CLK_CFG(PER_SLV, GPIO7_CTRL, 12U, 1U, 0U, 0U, 0U)
#define ALIF_GPIO8_DB_CLK           \
	ALIF_CLK_CFG(PER_SLV, GPIO8_CTRL, 12U, 1U, 0U, 0U, 0U)
#define ALIF_GPIO9_DB_CLK           \
	ALIF_CLK_CFG(PER_SLV, GPIO9_CTRL, 12U, 1U, 0U, 0U, 0U)

/* LPTIMER clocks */
#define ALIF_LPTIMER0_S32K_CLK      \
	ALIF_CLK_CFG(VBAT, TIMER_CLKSEL, 0U, 0U, 0U, 3U, 0U)
#define ALIF_LPTIMER0_128K_CLK      \
	ALIF_CLK_CFG(VBAT, TIMER_CLKSEL, 0U, 0U, 1U, 3U, 0U)
#define ALIF_LPTIMER0_LPTMR0_IO_PIN \
	ALIF_CLK_CFG(VBAT, TIMER_CLKSEL, 0U, 0U, 2U, 3U, 0U)
#define ALIF_LPTIMER1_S32K_CLK      \
	ALIF_CLK_CFG(VBAT, TIMER_CLKSEL, 0U, 0U, 0U, 3U, 4U)
#define ALIF_LPTIMER1_128K_CLK      \
	ALIF_CLK_CFG(VBAT, TIMER_CLKSEL, 0U, 0U, 1U, 3U, 4U)
#define ALIF_LPTIMER1_LPTMR1_IO_PIN \
	ALIF_CLK_CFG(VBAT, TIMER_CLKSEL, 0U, 0U, 2U, 3U, 4U)
#define ALIF_LPTIMER1_CASCADE_CLK   \
	ALIF_CLK_CFG(VBAT, TIMER_CLKSEL, 0U, 0U, 3U, 3U, 4U)

/* LPRTC clocks */
#define ALIF_LPRTCA_CLK              \
	ALIF_CLK_CFG(VBAT, RTCA_CLK_EN, 0U, 1U, 0U, 0U, 0U)
#define ALIF_LPRTCB_CLK              \
	ALIF_CLK_CFG(VBAT, RTCB_CLK_EN, 0U, 1U, 0U, 0U, 0U)

/* LPSPI clock */
#define ALIF_LPSPI_CLK              \
	ALIF_CLK_CFG(M55HE, HE_CLK_ENA, 16U, 1U, 0U, 0U, 0U)

/* NPU clocks */
#define ALIF_NPU_HE_CLK             \
	ALIF_CLK_CFG(M55HE, HE_CLK_ENA, 0U, 1U, 0U, 0U, 0U)

/* DMA clock */
#define ALIF_DMA2_CLK               \
	ALIF_CLK_CFG(M55HE, HE_CLK_ENA, 4U, 1U, 0U, 0U, 0U)

/* UTIMER clocks */
#define ALIF_UTIMER_CLK             ALIF_CLK(1U)

#endif /* ZEPHYR_INCLUDE_ZEPHYR_DT_BINDINGS_CLOCK_ALIF_BALLETTO_CLOCKS_H_ */
