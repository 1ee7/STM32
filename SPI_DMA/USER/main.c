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

     	delay_init();	    	 //延时函数初始化	  
		NVIC_Configuration(); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级 	LED_Init();			     //LED端口初始化

 	 POART_Init();
	 ini_oled();
    OLED_Clear();

	// led_test();
	 t=' ';
     while(1)
	 {
	  //  OLED_Clear();
	  //  led_test();
		OLED_ShowCHinese(0,0,0);//中
		OLED_ShowCHinese(18,0,1);//景
		OLED_ShowCHinese(36,0,2);//园
		OLED_ShowCHinese(54,0,3);//电
		OLED_ShowCHinese(72,0,4);//子
		OLED_ShowCHinese(90,0,5);//科
		OLED_ShowCHinese(108,0,6);//技

		OLED_ShowString(0,3,"1.3' OLED TEST");
		OLED_ShowString(0,6,"ASCII:");  
		OLED_ShowString(63,6,"CODE:");  
		OLED_ShowChar(48,6,t);//显示ASCII字符

	
		
	//	OLED_Clear();

		delay_ms(800);
		 
	 }

	 return 0;


 }
