#ifndef __LED_H__
#define __LED_H__  
/*LED_1���*/ 
#define LED1_OFF	GPIOB->ODR|=(1<<6)
#define LED1_ON	    GPIOB->ODR&=~(1<<6) 
/*LED_2���*/
#define LED2_OFF	GPIOB->ODR|=(1<<7)
#define LED2_ON	    GPIOB->ODR&=~(1<<7)
/*LED_3���*/
#define LED3_OFF	GPIOB->ODR|=(1<<8)
#define LED3_ON	    GPIOB->ODR&=~(1<<8)
/*LED_4���*/	
#define LED4_OFF	GPIOB->ODR|=(1<<9)
#define LED4_ON 	GPIOB->ODR&=~(1<<9)
/*��ʼ������*/
void LED_Init(void);
#endif
