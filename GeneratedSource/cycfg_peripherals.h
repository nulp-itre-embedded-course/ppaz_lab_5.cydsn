/*******************************************************************************
* File Name: cycfg_peripherals.h
*
* Description:
* Peripheral Hardware Block configuration
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_scb_i2c.h"
#include "cy_sysclk.h"
#if defined (CY_USING_HAL)
	#include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cy_scb_uart.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define I2C_ENABLED 1U
#define I2C_HW SCB3
#define I2C_IRQ scb_3_interrupt_IRQn
#define UART_ENABLED 1U
#define UART_HW SCB5
#define UART_IRQ scb_5_interrupt_IRQn

extern const cy_stc_scb_i2c_config_t I2C_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t I2C_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_scb_uart_config_t UART_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t UART_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
