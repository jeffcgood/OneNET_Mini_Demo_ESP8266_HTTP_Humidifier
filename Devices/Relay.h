#ifndef __RELAY_H__
#define __RELAY_H__  
/*Relay1���*/ 
#define Relay1_ON	    GPIOA->ODR|=(1<<0)
#define Relay1_OFF	    GPIOA->ODR&=~(1<<0) 

/*��ʼ������*/
void Relay_Init(void);
#endif
