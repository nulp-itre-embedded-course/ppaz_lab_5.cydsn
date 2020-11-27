#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"
#include "stdio.h"


#define BUFFER_SIZE                             (20U)
#define I2C_INT_PRIORITY                        (7U)

uint8_t bufferRead[BUFFER_SIZE];
uint8_t bufferWrite[BUFFER_SIZE];
cy_stc_scb_i2c_context_t I2C_context;

cy_stc_sysint_t I2C_intConf = 
{
    .intrPriority = I2C_INT_PRIORITY,
    .intrSrc = I2C_IRQ,
};

void I2C_IntHandler(void)
{
    Cy_SCB_I2C_SlaveInterrupt(I2C_HW, &I2C_context);
}


int main(void)
{
    cy_rslt_t result;
    char str[100U];

    /* Initialize the device and board peripherals */
    result = cybsp_init() ;
    if (result != CY_RSLT_SUCCESS)
    {
        CY_ASSERT(0);
    }

    __enable_irq();

    /* Enable UART for debug */
    Cy_SCB_UART_Init(UART_HW, &UART_config, NULL);
    Cy_SCB_UART_Enable(UART_HW);

    Cy_SCB_UART_PutString(UART_HW, "Start\n\r");

    /* Generate data for read buffer */
    for (uint32_t i = 0U; i < BUFFER_SIZE; i++)
    {
        bufferRead[i] = i;
    }

    /* Init I2C */
    Cy_SCB_I2C_Init(I2C_HW, &I2C_config, &I2C_context);

    /* Config read and write buffer */
    Cy_SCB_I2C_SlaveConfigReadBuf(I2C_HW, bufferRead, BUFFER_SIZE, &I2C_context);
    Cy_SCB_I2C_SlaveConfigWriteBuf(I2C_HW, bufferWrite, BUFFER_SIZE, &I2C_context);

    /* Config interrupt */
    Cy_SysInt_Init(&I2C_intConf, I2C_IntHandler);
    NVIC_EnableIRQ(I2C_intConf.intrSrc);

    /* Enable I2C */
    Cy_SCB_I2C_Enable(I2C_HW);

    while (BUFFER_SIZE != Cy_SCB_I2C_SlaveGetWriteTransferCount(I2C_HW, &I2C_context))
    {

    }

    Cy_SCB_UART_PutString(UART_HW, "Write data\n\r");
    Cy_SCB_UART_PutString(UART_HW, "Number: \t\t Data:\n\r");
    for (uint32_t i = 0U; i < BUFFER_SIZE; i++)
    {
        sprintf(str, "%ld = %d\n\r", i, bufferWrite[i]);
        Cy_SCB_UART_PutString(UART_HW, str);
    }

    Cy_SCB_UART_PutString(UART_HW, "Stop\n\r");

    for (;;)
    {
    }
}

/* [] END OF FILE */