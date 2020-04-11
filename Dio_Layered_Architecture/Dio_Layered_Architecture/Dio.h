/*
 * Dio.h
 *
 * Created: 4/6/2020 10:02:28 PM
 *  Author: omar
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "dio_types.h"
#include "std_types.h"
void Dio_WriteChannel(Dio_channelType channelId,STD_LevelType level);
STD_LevelType Dio_ReadChannel(Dio_channelType channelId);



#endif /* DIO_H_ */