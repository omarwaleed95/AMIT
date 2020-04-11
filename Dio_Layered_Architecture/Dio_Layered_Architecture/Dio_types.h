/*
 * Dio_types.h
 *
 * Created: 4/6/2020 9:56:37 PM
 *  Author: Omar
 */ 


#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_
//channel_type
typedef enum{
	Dio_channelA0=0,
	Dio_channelA1,
	Dio_channelA2,
	Dio_channelA3,
	Dio_channelA4,
	Dio_channelA5,
	Dio_channelA6,
	Dio_channelA7,
	
	Dio_channelB0,
	Dio_channelB1,
	Dio_channelB2,
	Dio_channelB3,
	Dio_channelB4,
	Dio_channelB5,
	Dio_channelB6,
	Dio_channelB7,
	
	Dio_channelC0,
	Dio_channelC1,
	Dio_channelC2,
	Dio_channelC3,
	Dio_channelC4,
	Dio_channelC5,
	Dio_channelC6,
	Dio_channelC7,
	
	Dio_channelD0,
	Dio_channelD1,
	Dio_channelD2,
	Dio_channelD3,
	Dio_channelD4,
	Dio_channelD5,
	Dio_channelD6,
	Dio_channelD7
	}Dio_channelType;

//Dio port type
typedef enum{
	Dio_PortA=0,
	Dio_PortB,
	Dio_PortC,
	Dio_PortD
	}Dio_PortType;
	
	typedef enum{
		Input=0,
		output
		}Dio_DirType;


#endif /* DIO_TYPES_H_ */