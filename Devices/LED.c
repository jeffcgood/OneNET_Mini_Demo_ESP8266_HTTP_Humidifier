#include "LED.h"
#include "stm32f10x.h"
/*
-----------------------------------------------------------------------
  函数名称：void LED_Init(void)
  函数功能：初始化LED_1--LED_4 GPIO控制端口
  输入形参：无  	
  返回值：无
  led1=PB6
  led2=PE7
  led3=PE8
  led4=PE9
-----------------------------------------------------------------------
*/	
void LED_Init(void)
{
/*第一步 开启GPIOB和GPIOE时钟*/
 RCC->APB2ENR|=1<<3;//PORTB
/*第二步 配置LED控制端口工作模式*/	
/*LED_3  PB8    LED_3  PB9*/ 
 GPIOB->CRH&=0xFFFFFF00;//这一句话的作用是将控制PB8,PB9的四个位全部清0以便后续的赋值工作
 GPIOB->CRH|=0x00000033;//用四位的二进制表示就是0x0011，结合上一句话配置到寄存器中表示将PB10配置为速度为50MHZ的“推挽输出”
/*LED_1  PB6    LED_2  PB7*/  
 GPIOB->CRL&=0x00FFFFFF;
 GPIOB->CRL|=0x33000000;
	
}
