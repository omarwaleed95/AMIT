/*
 * std_types.h
 
 * Created: 4/5/2020 10:12:52 PM
 *  Author: Omar
 */ 


#ifndef STD_TYPES_H_
#define STD_TYPES_H_
typedef unsigned char uint8;
typedef unsigned short int uint16; //2bytes
typedef unsigned long int uint32; 
typedef  float float16;

//signed

 typedef char int8;
 typedef short int int16; //2bytes
 typedef long int int32;


typedef enum{
	STD_Low=0,
	STD_High
	}STD_LevelType;

#endif /* STD_TYPES_H_ */