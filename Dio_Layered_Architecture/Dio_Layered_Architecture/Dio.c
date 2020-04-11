/*
 * Dio.c
 *
 * Created: 4/6/2020 10:07:20 PM
 *  Author: Omar
 */ 
#include "Dio.h"
#include "Dio_hw.h"
#include "bit_math.h"

STD_LevelType Dio_ReadChannel(Dio_channelType channelId){
	Dio_PortType portx=channelId/8;
	Dio_channelType channelPos=channelId%8;
	STD_LevelType level;
	switch (portx)
	{
		case Dio_PortA:
		level=GET_BIT(PINA_REG,channelPos);
		break;
		case Dio_PortB:
		level=GET_BIT(PINB_REG,channelPos);
		break;
		case Dio_PortC:
		level=GET_BIT(PINC_REG,channelPos);
		break;
		case Dio_PortD:
		level=GET_BIT(PIND_REG,channelPos);
		break;
	}
	return level;
}

void Dio_WriteChannel(Dio_channelType channelId,STD_LevelType level){
//which port
Dio_PortType portx=channelId/8;
//which pin inside the port
Dio_channelType channelPos=channelId%8;
switch (portx)
{
	case Dio_PortA:
	        if(level==STD_High){
				SET_BIT(PORTA_REG,channelPos);
				
			}
			else {
				CLEAR_BIT(PORTA_REG,channelPos);
			}
			break;
			case Dio_PortB:
			if(level==STD_High){
				SET_BIT(PORTB_REG,channelPos);
				
			}
			else {
				CLEAR_BIT(PORTB_REG,channelPos);
			}
			break;
			case Dio_PortC:
			if(level==STD_High){
				SET_BIT(PORTC_REG,channelPos);
				
			}
			else {
				CLEAR_BIT(PORTC_REG,channelPos);
			}
			break;
			case Dio_PortD:
			if(level==STD_High){
				SET_BIT(PORTD_REG,channelPos);
				
			}
			else {
				CLEAR_BIT(PORTD_REG,channelPos);
			}
			break;
}
}