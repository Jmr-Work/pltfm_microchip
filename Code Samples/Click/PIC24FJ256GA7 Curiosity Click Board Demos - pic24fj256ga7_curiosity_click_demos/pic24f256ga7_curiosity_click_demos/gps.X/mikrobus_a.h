/*******************************************************************************
Copyright 2016 Microchip Technology Inc. (www.microchip.com)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*******************************************************************************/

#ifndef MIKROBUS_A_H
#define MIKROBUS_A_H

#include <stdbool.h>
#include <stdint.h>

uint8_t MIKROBUS_A_UART_Read(void);
bool MIKROBUS_A_UART_ReceiveBufferIsEmpty(void);
inline void MIKROBUS_A_RST_SetHigh(void);
inline void MIKROBUS_A_RST_SetLow(void);

#endif