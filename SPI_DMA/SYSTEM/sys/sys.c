#include "sys.h"



void NVIC_Configuration(void)
{

    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	//设置NVIC中断分组2:2位抢占优先级，2位响应优先级

}

//tgl changed 
//采用如下方法实现执行汇编指令WFI  
/*
void WFI_SET(void)
{
 __ASM volatile("wfi");	
 // WFI;	  
}
*/
__asm void WFI_SET(void)
{
   WFI;
}

//关闭所有中断
/*
void INTX_DISABLE(void)
{		  
	__ASM volatile("cpsid i");
//	CPSID I;
}
*/

__asm void INTX_DISABLE(void)
{		  
	CPSID I;
}
//开启所有中断
/*
void INTX_ENABLE(void)
{
	__ASM volatile("cpsie i");
//     CPSIE I;		  
}
*/
__asm void INTX_ENABLE(void)
{
     CPSIE I;		  
}
//设置栈顶地址
//addr:栈顶地址
__asm void MSR_MSP(u32 addr) 
{
    MSR MSP, r0 			//set Main Stack value
    BX r14
}
