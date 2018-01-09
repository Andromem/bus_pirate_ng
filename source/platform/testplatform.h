

// development test platform

// SPI hardware (HW-SPI)
#define BPSPIPORT	SPI1
#define BPSPICLK	RCC_SPI1
#define BPSPIMISOPORT	GPIOA
#define BPSPIMOSIPORT	GPIOA
#define BPSPICSPORT	GPIOA
#define BPSPICLKPORT	GPIOA
#define BPSPIMISOPIN	GPIO6
#define BPSPIMOSIPIN	GPIO7
#define BPSPICSPIN	GPIO4
#define BPSPICLKPIN	GPIO5

// AUX/PWM/freq counter
#define BPAUXPORT	GPIOC
#define BPAUXPIN	GPIO13

#define BPPWMPORT	GPIOA
#define BPPWMPIN	GPIO8
#define BPPWMTIMER	TIM1
#define BPPWMCHAN	TIM_OC1

#define BPFREQPORT	GPIOA
#define BPFREQPIN	GPIO0
#define BPFREQTIMER	TIM2
#define BPFREQCLK	RCC_TIM2
#define BPFREQNVIC	NVIC_TIM2_IRQ


// ADC's
#define BPADC		ADC1
#define BPADCCLK	RCC_ADC1
#define BPADCCHAN	0		//pa0
#define BP3V3CHAN	0
#define BP5V0CHAN	0
#define BPVPUCHAN	0

// debug USART
#define DEBUGTXPORT	GPIOA
#define DEBUGTXPIN	GPIO_USART1_TX
#define DEBUGUSART	USART1
#define DEBUGUSARTCLK	RCC_USART1

// regular USART (HW-USART)
#define BPUSARTTXPORT	GPIOA
#define BPUSARTRXPORT	GPIOA
#define BPUSARTTXPIN	GPIO2
#define BPUSARTRXPIN	GPIO3
#define BPUSARTCLK	RCC_USART2
#define BPUSART		USART2

// hw-i2c
#define BPI2C		I2C2
#define BPI2CCLK	RCC_I2C2
#define BPHWI2CSDAPORT	GPIOB
#define BPHWI2CCLKPORT	GPIOB
#define BPHWI2CSDAPIN	GPIO11
#define BPHWI2CCLKPIN	GPIO10

// logic analyzer
#define BPLABUFFSIZE	2048

// SW 2wire (SW2W)
#define BPSW2WMOSIPORT	GPIOA
#define BPSW2WCLKPORT	GPIOA
#define BPSW2WMOSIPIN	GPIO7
#define BPSW2WCLKPIN	GPIO5

// SW 3wire (SW3W)
#define BPSW3WMISOPORT	GPIOA
#define BPSW3WMOSIPORT	GPIOA
#define BPSW3WCSPORT	GPIOA
#define BPSW3WCLKPORT	GPIOA
#define BPSW3WMISOPIN	GPIO6
#define BPSW3WMOSIPIN	GPIO7
#define BPSW3WCSPIN	GPIO4
#define BPSW3WCLKPIN	GPIO5


// voltage regulators and pullupvoltages
#define BPPSUENPORT	GPIOC
#define BPPSUENPIN	GPIO13
#define BPVPUENPORT	GPIOC
#define BPVPUENPIN	GPIO13
#define BPVPU33ENPORT	GPIOC
#define BPVPU33ENPIN	GPIO13
#define BPVPU50ENPORT	GPIOC
#define BPVPU50ENPIN	GPIO13




