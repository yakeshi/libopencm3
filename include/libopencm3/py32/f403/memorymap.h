/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2024 Tan Bin <tarnbin@gmail.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBOPENCM3_MEMORYMAP_H
#define LIBOPENCM3_MEMORYMAP_H

#include <libopencm3/cm3/memorymap.h>

/* --- GD32 specific peripheral definitions ------------------------------- */

/* Memory map for all buses */
#define FLASH_BASE			(0x08000000U)
#define PERIPH_BASE			(0x40000000U)
#define INFO_BASE			(0x1ffff000U)
#define PERIPH_BASE_APB1		(PERIPH_BASE + 0x00000)
#define PERIPH_BASE_APB2		(PERIPH_BASE + 0x10000)
#define PERIPH_BASE_AHB1		(PERIPH_BASE + 0x18000)
#define PERIPH_BASE_AHB2		(PERIPH_BASE + 0x8000000)

/* Register boundary addresses */

/* APB1 */
#define TIM2_BASE			(PERIPH_BASE_APB1 + 0x0000)
#define TIM3_BASE			(PERIPH_BASE_APB1 + 0x0400)
#define TIM4_BASE			(PERIPH_BASE_APB1 + 0x0800)
#define TIM5_BASE			(PERIPH_BASE_APB1 + 0x0c00)
#define TIM6_BASE			(PERIPH_BASE_APB1 + 0x1000)
#define TIM7_BASE			(PERIPH_BASE_APB1 + 0x1400)
#define TIM12_BASE			(PERIPH_BASE_APB1 + 0x1800)
#define TIM13_BASE			(PERIPH_BASE_APB1 + 0x1c00)
#define TIM14_BASE			(PERIPH_BASE_APB1 + 0x2000)
/* PERIPH_BASE_APB1 + 0x2400 (0x4000 2400 - 0x4000 27FF): Reserved */
#define RTC_BASE			(PERIPH_BASE_APB1 + 0x2800)
#define WWDG_BASE			(PERIPH_BASE_APB1 + 0x2c00)
#define IWDG_BASE			(PERIPH_BASE_APB1 + 0x3000)
/* PERIPH_BASE_APB1 + 0x3400 (0x4000 3400 - 0x4000 37FF): Reserved */
#define SPI2_BASE			(PERIPH_BASE_APB1 + 0x3800)
#define SPI3_BASE			(PERIPH_BASE_APB1 + 0x3c00)
/* PERIPH_BASE_APB1 + 0x4000 (0x4000 4000 - 0x4000 3FFF): Reserved */
#define USART2_BASE			(PERIPH_BASE_APB1 + 0x4400)
#define USART3_BASE			(PERIPH_BASE_APB1 + 0x4800)
#define USART4_BASE			(PERIPH_BASE_APB1 + 0x4c00)
#define USART5_BASE			(PERIPH_BASE_APB1 + 0x5000)
#define I2C1_BASE			(PERIPH_BASE_APB1 + 0x5400)
#define I2C2_BASE			(PERIPH_BASE_APB1 + 0x5800)

#define USB_DEV_FS_BASE			(PERIPH_BASE_APB1 + 0x5c00)
#define CAN_SRAM_BASE			(PERIPH_BASE_APB1 + 0x6000)
#define USB_SRAM_BASE			(PERIPH_BASE_APB1 + 0x6000)
#define CAN_BASE          (PERIPH_BASE_APB1 + 0x6400)
/* PERIPH_BASE_APB1 + 0x6800 (0x4000 6800 - 0x4000 6BFF): Reserved */
#define BACKUP_REGS_BASE      (PERIPH_BASE_APB1 + 0x6c00)
#define POWER_CONTROL_BASE		(PERIPH_BASE_APB1 + 0x7000)
/* PERIPH_BASE_APB1 + 0x7400 (0x4000 7400 - 0x4000 C7FF): Reserved */
#define CTC_BASE              (PERIPH_BASE_APB1 + 0xc800)
/* PERIPH_BASE_APB1 + 0xcc00 (0x4000 CC00 - 0x4000 FFFF): Reserved */

/* APB2 */
#define SYSCFG_COMP_BASE      (PERIPH_BASE_APB2 + 0x0000)
#define EXTI_BASE             (PERIPH_BASE_APB1 + 0x0400)
/* PERIPH_BASE_APB2 + 0x0800 (0x4001 0800 - 0x4001 23FF): Reserved */
#define ADC1_BASE			        (PERIPH_BASE_APB2 + 0x2400)
#define ADC2_BASE			        (PERIPH_BASE_APB2 + 0x2800)
#define TIM1_BASE		        	(PERIPH_BASE_APB2 + 0x2c00)
#define SPI1_BASE		        	(PERIPH_BASE_APB2 + 0x3000)
#define TIM8_BASE		        	(PERIPH_BASE_APB2 + 0x3400)
#define USART1_BASE			      (PERIPH_BASE_APB2 + 0x3800)
#define ADC2_BASE			        (PERIPH_BASE_APB2 + 0x3c00)
/* PERIPH_BASE_APB2 + 0x4000 (0x4001 4000 - 0x4001 4BFF): Reserved */
#define TIM9_BASE			        (PERIPH_BASE_APB2 + 0x4c00)
#define TIM10_BASE			      (PERIPH_BASE_APB2 + 0x5000)
#define TIM11_BASE			      (PERIPH_BASE_APB2 + 0x5400)
/* PERIPH_BASE_APB2 + 0x5800 (0x4001 5800 - 0x4001 7FFF): Reserved */


/* AHB1 */
#define SDIO_BASE     (PERIPH_BASE_AHB1 + 0x0000)
/* PERIPH_BASE_AHB1 + 0x0400 (0x4001 8400 - 0x4001 FFFF): Reserved */
#define DMA1_BASE			(PERIPH_BASE_AHB1 + 0x8000)
#define DMA2_BASE			(PERIPH_BASE_AHB1 + 0x8400)
/* PERIPH_BASE_AHB1 + 0x8800 (0x4002 0800 - 0x4002 0FFF): Reserved */
#define RCC_BASE			(PERIPH_BASE_AHB1 + 0x9000)
/* PERIPH_BASE_AHB1 + 0x9400 (0x4002 1400 - 0x4002 1FFF): Reserved */
#define FLASH_MEM_INTERFACE_BASE	(PERIPH_BASE_AHB1 + 0xa000)
/* PERIPH_BASE_AHB1 + 0xa400 (0x4002 1400 - 0x4002 2FFF): Reserved */
#define CRC_BASE			(PERIPH_BASE_AHB1 + 0xb000)
/* PERIPH_BASE_AHB1 + 0xb400 (0x4002 3400 - 0x47FF FFFF): Reserved */


/* AHB 2 */
#define GPIO_PORT_A_BASE		(PERIPH_BASE_AHB2 + 0x0000)
#define GPIO_PORT_B_BASE		(PERIPH_BASE_AHB2 + 0x0400)
#define GPIO_PORT_C_BASE		(PERIPH_BASE_AHB2 + 0x0800)
#define GPIO_PORT_D_BASE		(PERIPH_BASE_AHB2 + 0x0c00)
#define GPIO_PORT_E_BASE		(PERIPH_BASE_AHB2 + 0x1000)

/* Device Electronic Signature */
#define DESIG_FLASH_SIZE_BASE		(INFO_BASE + 0x7e0)
#define DESIG_UNIQUE_ID_BASE		(INFO_BASE + 0x7ac)
/* Ignore the "reserved for future use" half of the first word */
#define DESIG_UNIQUE_ID0		MMIO32(DESIG_UNIQUE_ID_BASE)
#define DESIG_UNIQUE_ID1		MMIO32(DESIG_UNIQUE_ID_BASE + 4)
#define DESIG_UNIQUE_ID2		MMIO32(DESIG_UNIQUE_ID_BASE + 8)


#endif
