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

#include <stdbool.h>

#include "mikrobus_a.h"
#include "mcc_generated_files/mcc.h"

inline uint8_t MIKROBUS_A_UART_Read(void){
    return UART1_Read();
}

inline bool MIKROBUS_A_UART_ReceiveBufferIsEmpty(void){
    return UART1_ReceiveBufferIsEmpty();
}

inline void MIKROBUS_A_RST_SetHigh(void)
{
    LATAbits.LATA13 = 1;
}

inline void MIKROBUS_A_RST_SetLow(void)
{
    LATAbits.LATA13 = 0;
}