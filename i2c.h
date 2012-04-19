
/* I2C address of CAT24C256 e2prom */
#define  I2C_SLAVE_ADDR         (0xA0 >> 1)

/* Higher byte address (i.e A8-A15) */
#define  E2PROM_ADDR_MSB         0x00

/* Lower byte address (i.e A0-A7) */
#define  E2PROM_ADDR_LSB         0x00

// I2C Addresses of Pic Board
#define I2C_ADDR_PIC_TEMP       (0x92 >> 1)
#define I2C_ADDR_PIC_EXPAND     (0x40 >> 1)
#define I2C_ADDR_PIC_ADC        (0x9A >> 1)
#define I2C_ADDR_PIC_DAC        (0x90 >> 1)
#define I2C_ADDR_PIC_EEPROM     (0xA0 >> 1)

// I2C Addresses of Custom Proto
#define I2C_ADDR_CUSTOM_EXP0    (0x48 >> 1)
#define I2C_ADDR_CUSTOM_EXP1    (0x4A >> 1)
#define I2C_ADDR_CUSTOM_UART0   (0x90 >> 1)
#define I2C_ADDR_CUSTOM_UART1   (0x92 >> 1)

void expanderSend( unsigned char data );
void E2promRead(unsigned char *data);
void tempSensorRead( unsigned char *data );

void I2C0Isr( void );
void I2C1Isr( void );
void InitI2C( void );
void SetupI2C( unsigned int channel, unsigned int slaveAddr );
void CleanUpInterrupts( unsigned int regBase );
void SetupI2CTransmit( unsigned int channel, unsigned int dcount );
void SetupI2CReception( unsigned int channel,
                        unsigned int xcount, unsigned int dcount );

void i2cTest();
