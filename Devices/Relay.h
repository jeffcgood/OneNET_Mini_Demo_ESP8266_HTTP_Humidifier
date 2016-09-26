#ifndef __RELAY_H__
#define __RELAY_H__  
/*Relay1相关*/ 
#define Relay1_ON	    GPIOA->ODR|=(1<<0)
#define Relay1_OFF	    GPIOA->ODR&=~(1<<0) 

/*初始化函数*/
void Relay_Init(void);
#endif
