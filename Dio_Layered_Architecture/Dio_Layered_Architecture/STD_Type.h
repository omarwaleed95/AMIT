/*
 * STD_Type.h
 *
 * Created: 4/6/2020 10:59:54 PM
 *  Author: omar
 */ 


#ifndef STD_TYPE_H_
#define STD_TYPE_H_

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



#endif /* STD_TYPE_H_ */