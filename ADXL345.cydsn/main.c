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
#include <project.h>
#include <stdio.h>

#define     ADXL345_Addr    0x53
#define     RA_BW_RATE          0x2C    // R/W   0x0A   Data rate and power mode control
#define 	RA_DATA_FORMAT 	    0x31 	// R/W 	 0   	Data format control
#define 	RA_POWER_CTL 	    0x2D 	// R/W 	 0   	Power-saving features control
#define 	RA_DATAX0 	        0x32 	// R 	 0 	    X-Axis Data 0
#define 	RA_DATAX1 	        0x33 	// R 	 0 	    X-Axis Data 1
#define 	RA_DATAY0 	        0x34 	// R 	 0 	    Y-Axis Data 0
#define 	RA_DATAY1 	        0x35 	// R 	 0 	    Y-Axis Data 1
#define 	RA_DATAZ0 	        0x36 	// R 	 0 	    Z-Axis Data 0
#define 	RA_DATAZ1 	        0x37 	// R 	 0 	    Z-Axis Data 1
#define     RA_OFSX             0x1E    // R/W   0      X-axis offset
#define     RA_OFSY             0x1F    // R/W   0      Y-axis offset
#define     RA_OFSZ             0x20    // R/W   0      Z-axis offset

#define SCALE_FACTOR 3.9f               // convert raw x,y,z values to corresponding g-values

float cal_X = 0, cal_Y = 0, cal_Z = 0;  // x,y,z values for offset calibration

char buffer[50];                        // buffer to convert numbers to strings
int16 x, y, z;
float xg, yg, zg;

unsigned char Read_I2C(unsigned char BusAddress , unsigned char reg)
{  
    unsigned char data;

    I2C_MasterSendStart(BusAddress,I2C_WRITE_XFER_MODE);    // Initialize a transaction for writing
    I2C_MasterWriteByte(reg);                                // Indicate which register you want to write to
    I2C_MasterSendRestart(BusAddress,I2C_READ_XFER_MODE);   // Initialize a transaction for reading
    
    CyDelay(1u);
    
    data = I2C_MasterReadByte(I2C_ACK_DATA);       // Read from register
    //I2C_MasterReadByte(I2C_NAK_DATA);            // Read from register, last byte is NAKed (optional)
    I2C_MasterSendStop();                           // End of transaction
    return data;
}

void Write_I2C(unsigned char BusAddress , unsigned char reg , unsigned char data)
{
    I2C_MasterSendStart(BusAddress,I2C_WRITE_XFER_MODE);     // Initialize a transaction for writing
    I2C_MasterWriteByte(reg);                                // Indicate which register you want to write to
    I2C_MasterWriteByte(data);                              // Write to register
    I2C_MasterSendStop();                                   // End of transaction
}

void ADXL345_Init(void)
{
    CyDelay(2u);
    Write_I2C(ADXL345_Addr,RA_BW_RATE, 0x09);       //  50 Hz
    Write_I2C(ADXL345_Addr,RA_DATA_FORMAT, 0x0);   //  +/-2g , 10-BIT MODE
    Write_I2C(ADXL345_Addr,RA_POWER_CTL, 0x08);     //  START MEASUREMENT
    CyDelay(2u);
}

void Get_Accel_Values(void)
{
    x = ((Read_I2C(ADXL345_Addr, RA_DATAX1) << 8) | Read_I2C(ADXL345_Addr, RA_DATAX0)); 
    y = ((Read_I2C(ADXL345_Addr, RA_DATAY1) << 8) | Read_I2C(ADXL345_Addr, RA_DATAY0)); 
    z = ((Read_I2C(ADXL345_Addr, RA_DATAZ1) << 8) | Read_I2C(ADXL345_Addr, RA_DATAZ0)); 
    
    xg = SCALE_FACTOR * (float)x / 1000.0;
    yg = SCALE_FACTOR * (float)y / 1000.0;
    zg = SCALE_FACTOR * (float)z / 1000.0;   
}

void Offset_Calibration(void)
{
    cal_X = -1 * ((Read_I2C(ADXL345_Addr, RA_DATAX1) << 8) | Read_I2C(ADXL345_Addr, RA_DATAX0));
    cal_Y = -1 * ((Read_I2C(ADXL345_Addr, RA_DATAY1) << 8) | Read_I2C(ADXL345_Addr, RA_DATAY0));
    cal_Z = -1 * ((Read_I2C(ADXL345_Addr, RA_DATAZ1) << 8) | Read_I2C(ADXL345_Addr, RA_DATAZ0));
    
    Write_I2C(ADXL345_Addr, RA_OFSX, cal_X);
    Write_I2C(ADXL345_Addr, RA_OFSY, cal_Y);
    Write_I2C(ADXL345_Addr, RA_OFSZ, cal_Z);
}

int main()
{    
    CyGlobalIntEnable; /* Enable global interrupts. */

    I2C_Start();
    UART_Start();
    LCD_Init();
    
    ADXL345_Init();
    //Offset_Calibration();
    
    UART_PutString("***ADXL345***");
    UART_PutString("\r\n");
    
    for(;;)
    {
        Get_Accel_Values();
        
        LCD_Position(0, 0);

        sprintf(buffer,"X: %3d   ", x);
        UART_PutString(buffer);
        LCD_PrintString(buffer);

        sprintf(buffer,"Y: %3d   ", y);
        UART_PutString(buffer);
        LCD_PrintString(buffer);
        
        LCD_Position(1, 0);

        sprintf(buffer,"Z: %3d   ", z);
        UART_PutString(buffer);
        LCD_PrintString(buffer);
        
        sprintf(buffer,"Xg: %.2f   ", xg);
        UART_PutString(buffer);

        sprintf(buffer,"Yg: %.2f   ", yg);
        UART_PutString(buffer);

        sprintf(buffer,"Zg: %.2f   ", zg);
        UART_PutString(buffer);
        
        UART_PutString("\r\n");
        
        CyDelay(500);
    }
}

/* [] END OF FILE */
