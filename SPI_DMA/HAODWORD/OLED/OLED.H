#ifndef __OLED_H
#define __OLED_H
	
#include "sys.h"
#include "delay.h"

#define OLED_SPI


 //====================================================begin===========================================//
#define OLED_CS   PBout(5)				//Ƭѡ
#define OLED_RST  PBout(6)				// ��λ

#define DC_EN    PBout(8)			//����/����

#define OLED_SCLK	PAout(5)
#define OLED_SDI	PAout(7)
#define OLED_SDO	PAin(2)


#define OLED_LED   PBout(7)				//




 //==============tgl add ===============
#define OLED_CMD  0	//д����
#define OLED_DATA 1	//д����
#define SIZE 16
#define XLevelL		0x00
#define XLevelH		0x10
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF 
#define X_WIDTH 	128
#define Y_WIDTH 	64	 


//OLED�����ú���
//void OLED_WR_Byte(u8 dat,u8 cmd);
void OLED_WR_Byte(u8 dat,u8 cmd);
void OLED_Clear(void);
void OLED_Set_Pos(unsigned char x, unsigned char y);
void OLED_ShowCHinese(u8 x,u8 y,u8 no);
void OLED_ShowChar(u8 x,u8 y,u8 chr);
void OLED_ShowString(u8 x,u8 y,u8 *chr);
u32 oled_pow(u8 m,u8 n);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size);

void led_test(void);
//****************************��Ҫ��������************************************

			
void esbusini(void);					//��ʼ�����߳���
void POART_Init(void);
void ini_oled(void);            		//OLED��ʼ��

void display_cls(unsigned int ch);  //����




#endif