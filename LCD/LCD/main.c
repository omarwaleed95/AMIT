/*
 * LCD.c
 *
 * Created: 4/10/2020 11:23:52 AM
 * Author : omar
 */ 

#include <avr/io.h>

#include "lcd.h"

int main(void)

{
	LCD_Init();
	LCD_String("try");	/* Write string on 1st line of LCD*/

	LCD_Command(0xC0);		/* Go to 2nd line*/

	LCD_String("1");	/* Write string on 2nd line*/

	while(1);

}
