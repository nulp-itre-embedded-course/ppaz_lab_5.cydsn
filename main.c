/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    uint8 compare = 0;
    uint8 buf[1];
    buf[0] = 0;
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    I2C_Start();
    UART_Start();
    I2C_SetBuffer1(1, 1, buf);
    
    for(;;)
    {
        if(compare != buf[0])
        {
            compare = buf[0];
            UART_PutChar(compare);
        }
    }
}

/* [] END OF FILE */
