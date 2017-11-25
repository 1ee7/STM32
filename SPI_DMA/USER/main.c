#include "stm32f10x.h"
#include "OLED.H"
#include "delay.H"
#include "usart.h"
#include "sys.h"


 int main(void)
 {	
     u8 t;
//	 uart_init(115200);
 //    delay_init();

     	delay_init();	    	 //��ʱ������ʼ��	  
		NVIC_Configuration(); 	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ� 	LED_Init();			     //LED�˿ڳ�ʼ��

 	 POART_Init();
	 ini_oled();
    OLED_Clear();

	// led_test();
	 t=' ';
     while(1)
	 {
	  //  OLED_Clear();
	  //  led_test();
		OLED_ShowCHinese(0,0,0);//��
		OLED_ShowCHinese(18,0,1);//��
		OLED_ShowCHinese(36,0,2);//԰
		OLED_ShowCHinese(54,0,3);//��
		OLED_ShowCHinese(72,0,4);//��
		OLED_ShowCHinese(90,0,5);//��
		OLED_ShowCHinese(108,0,6);//��

		OLED_ShowString(0,3,"1.3' OLED TEST");
		OLED_ShowString(0,6,"ASCII:");  
		OLED_ShowString(63,6,"CODE:");  
		OLED_ShowChar(48,6,t);//��ʾASCII�ַ�

	
		
	//	OLED_Clear();

		delay_ms(800);
		 
	 }

	 return 0;


 }
