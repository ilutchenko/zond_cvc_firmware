#define LED_PORT 2
#define LED1 0
#define LED2 1
#define OP_AMP_PORT 2
#define OP_AMP_PIN 13
#define ADC 18		//like a cs pins
#define DAC 29
#define WRITE_CONF_REG 0x10
#define WRITE_MODE_REG 0x08
#define READ_DATA_REG 0x58
#define WRITE_OFFSET_REG 0x38

#define CONF_REG_VAL 0x1010 //with buffer
#define MODE_REG_VAL 0x0005
#define OFFSET_REG_VAL 0x8000 //0x8000 - default

#define DAC_LOAD_CMD 0x1000
