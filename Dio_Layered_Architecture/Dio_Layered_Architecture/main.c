/*
 * Dio_Layered_Architecture.c
 *Files:
 *STD_Types(unit8..level type)
 *Dio_hw.h(register addresses DDRA,,,)
 *Dio_types.h(channel type,dio port type)
 *Dio.h(services:dio_,write,read..)
 *dio.c
 *dio_cfg.h(structure of pin type...)
 *dio_cfg.c(dio_INt()...)
 * Created: 4/6/2020 9:24:30 PM
 * Author : Omar
 */ 

#define F_CPU 16000000
#include <util/delay.h>
#include "dio_cfg.h"
#include "Dio.h"

int main(void)
{
   Dio_init();
    while (1) 
    {
		Dio_WriteChannel(Dio_channelA3,STD_High); //buzzer
		_delay_ms(100);
    }
}

