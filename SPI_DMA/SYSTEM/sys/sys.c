#include "sys.h"



void NVIC_Configuration(void)
{

    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	//����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�

}

//tgl changed 
//�������·���ʵ��ִ�л��ָ��WFI  
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

//�ر������ж�
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
//���������ж�
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
//����ջ����ַ
//addr:ջ����ַ
__asm void MSR_MSP(u32 addr) 
{
    MSR MSP, r0 			//set Main Stack value
    BX r14
}
