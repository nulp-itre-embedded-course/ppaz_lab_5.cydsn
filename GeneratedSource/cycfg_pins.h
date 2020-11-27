/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.2.0.2801
* latest-v2.X 2.0.0.6211
* personalities 3.0.0.0
* udd 3.0.0.562
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#include "cycfg_routing.h"
#if defined (CY_USING_HAL)
	#include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#if defined (CY_USING_HAL)
	#define CYBSP_SPI_MOSI (P12_0)
	#define CYBSP_D11 CYBSP_SPI_MOSI
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_MISO (P12_1)
	#define CYBSP_D12 CYBSP_SPI_MISO
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_CLK (P12_2)
	#define CYBSP_D13 CYBSP_SPI_CLK
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SPI_CS (P12_3)
	#define CYBSP_D10 CYBSP_SPI_CS
#endif //defined (CY_USING_HAL)
#define ioss_0_port_5_pin_0_ENABLED 1U
#define ioss_0_port_5_pin_0_PORT GPIO_PRT5
#define ioss_0_port_5_pin_0_PORT_NUM 5U
#define ioss_0_port_5_pin_0_PIN 0U
#define ioss_0_port_5_pin_0_NUM 0U
#define ioss_0_port_5_pin_0_DRIVEMODE CY_GPIO_DM_HIGHZ
#define ioss_0_port_5_pin_0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_5_pin_0_HSIOM
	#define ioss_0_port_5_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_5_pin_0_IRQ ioss_interrupts_gpio_5_IRQn
#if defined (CY_USING_HAL)
	#define ioss_0_port_5_pin_0_HAL_PORT_PIN P5_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_5_pin_0 P5_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_5_pin_0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_5_pin_0_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_5_pin_0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif //defined (CY_USING_HAL)
#define ioss_0_port_5_pin_1_ENABLED 1U
#define ioss_0_port_5_pin_1_PORT GPIO_PRT5
#define ioss_0_port_5_pin_1_PORT_NUM 5U
#define ioss_0_port_5_pin_1_PIN 1U
#define ioss_0_port_5_pin_1_NUM 1U
#define ioss_0_port_5_pin_1_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define ioss_0_port_5_pin_1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_5_pin_1_HSIOM
	#define ioss_0_port_5_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_5_pin_1_IRQ ioss_interrupts_gpio_5_IRQn
#if defined (CY_USING_HAL)
	#define ioss_0_port_5_pin_1_HAL_PORT_PIN P5_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_5_pin_1 P5_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_5_pin_1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_5_pin_1_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_5_pin_1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_6_pin_0_ENABLED 1U
#define ioss_0_port_6_pin_0_PORT GPIO_PRT6
#define ioss_0_port_6_pin_0_PORT_NUM 6U
#define ioss_0_port_6_pin_0_PIN 0U
#define ioss_0_port_6_pin_0_NUM 0U
#define ioss_0_port_6_pin_0_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define ioss_0_port_6_pin_0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_0_HSIOM
	#define ioss_0_port_6_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_6_pin_0_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
	#define ioss_0_port_6_pin_0_HAL_PORT_PIN P6_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_6_pin_0 P6_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_6_pin_0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_6_pin_0_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_6_pin_0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif //defined (CY_USING_HAL)
#define ioss_0_port_6_pin_1_ENABLED 1U
#define ioss_0_port_6_pin_1_PORT GPIO_PRT6
#define ioss_0_port_6_pin_1_PORT_NUM 6U
#define ioss_0_port_6_pin_1_PIN 1U
#define ioss_0_port_6_pin_1_NUM 1U
#define ioss_0_port_6_pin_1_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define ioss_0_port_6_pin_1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_1_HSIOM
	#define ioss_0_port_6_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_6_pin_1_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
	#define ioss_0_port_6_pin_1_HAL_PORT_PIN P6_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_6_pin_1 P6_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_6_pin_1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_6_pin_1_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_6_pin_1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_PORT GPIO_PRT6
#define CYBSP_SWDIO_PORT_NUM 6U
#define CYBSP_SWDIO_PIN 6U
#define CYBSP_SWDIO_NUM 6U
#define CYBSP_SWDIO_DRIVEMODE CY_GPIO_DM_PULLUP
#define CYBSP_SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_6_pin_6_HSIOM
	#define ioss_0_port_6_pin_6_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDIO_HSIOM ioss_0_port_6_pin_6_HSIOM
#define CYBSP_SWDIO_IRQ ioss_interrupts_gpio_6_IRQn
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_PORT_PIN P6_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO P6_6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLUP
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDCK_ENABLED 1U
#define CYBSP_J2_18_ENABLED CYBSP_SWDCK_ENABLED
#define CYBSP_SWDCK_PORT GPIO_PRT6
#define CYBSP_J2_18_PORT CYBSP_SWDCK_PORT
#define CYBSP_SWDCK_PORT_NUM 6U
#define CYBSP_J2_18_PORT_NUM CYBSP_SWDCK_PORT_NUM
#define CYBSP_SWDCK_PIN 7U
#define CYBSP_J2_18_PIN CYBSP_SWDCK_PIN
#define CYBSP_SWDCK_NUM 7U
#define CYBSP_J2_18_NUM CYBSP_SWDCK_NUM
#define CYBSP_SWDCK_DRIVEMODE CY_GPIO_DM_PULLDOWN
#define CYBSP_J2_18_DRIVEMODE CYBSP_SWDCK_DRIVEMODE
#define CYBSP_SWDCK_INIT_DRIVESTATE 1
#define CYBSP_J2_18_INIT_DRIVESTATE CYBSP_SWDCK_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_7_HSIOM
	#define ioss_0_port_6_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDCK_HSIOM ioss_0_port_6_pin_7_HSIOM
#define CYBSP_J2_18_HSIOM CYBSP_SWDCK_HSIOM
#define CYBSP_SWDCK_IRQ ioss_interrupts_gpio_6_IRQn
#define CYBSP_J2_18_IRQ CYBSP_SWDCK_IRQ
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_PORT_PIN P6_7
	#define CYBSP_J2_18_HAL_PORT_PIN CYBSP_SWDCK_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK P6_7
	#define CYBSP_J2_18 CYBSP_SWDCK
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
	#define CYBSP_J2_18_HAL_IRQ CYBSP_SWDCK_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
	#define CYBSP_J2_18_HAL_DIR CYBSP_SWDCK_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_PULLDOWN
	#define CYBSP_J2_18_HAL_DRIVEMODE CYBSP_SWDCK_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t ioss_0_port_5_pin_0_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ioss_0_port_5_pin_0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_5_pin_1_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ioss_0_port_5_pin_1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_6_pin_0_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ioss_0_port_6_pin_0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_6_pin_1_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ioss_0_port_6_pin_1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_SWDIO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config;
#define CYBSP_J2_18_config CYBSP_SWDCK_config
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_SWDCK_obj;
	#define CYBSP_J2_18_obj CYBSP_SWDCK_obj
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
