#include "Relay.h"
#include "stm32f10x.h"
/*
-----------------------------------------------------------------------
  函数名称：void Relay_Init(void)
  函数功能：初始化Relay_1--LED_1 GPIO控制端口
  输入形参：无  	
  返回值：无
  Relay1=PA0
-----------------------------------------------------------------------
*/	
void Relay_Init(void)
{
/*第一步 开启GPIOA的时钟*/
 RCC->APB2ENR|=1<<2;//PORTA
/*第二步 配置Relay控制端口工作模式*/	
/*Relay1  PA0    LED_3  PB9*/ 
 GPIOA->CRL&=0xFFFFFFF0;//这一句话的作用是将控制PA0的四个位全部清0以便后续的赋值工作
 GPIOA->CRL|=0x00000003;//用四位的二进制表示就是0x0011，结合上一句话配置到寄存器中表示将PA0配置为速度为50MHZ的“推挽输出”	
}
