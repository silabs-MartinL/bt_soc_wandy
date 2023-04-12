/***************************************************************************//**
 * @file
 * @brief Application interface provided to main().
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/
#ifndef APP_H
#define APP_H

// Includes --------------------------------------------------------------------
#include "em_common.h"
#include "sl_status.h"

// Defines ---------------------------------------------------------------------
#define APP_STATE_NONE           0
#define APP_STATE_SCAN           1
#define APP_STATE_SERVICE        2
#define APP_STATE_CHARACTERISTIC 3
#define APP_STATE_CONNECTED      4
#define APP_STATE_OFF            5
#define APP_STATE_ON             6

/**************************************************************************//**
 * Application Init.
 *****************************************************************************/
void app_init(void);

/**************************************************************************//**
 * Application Process Action.
 *****************************************************************************/
void app_process_action(void);

/**************************************************************************//**
 * Application Set State.
 *****************************************************************************/
sl_status_t app_set_state(uint8_t);

/**************************************************************************//**
 * Application Get State.
 *****************************************************************************/
uint8_t app_get_state(void);

#endif // APP_H