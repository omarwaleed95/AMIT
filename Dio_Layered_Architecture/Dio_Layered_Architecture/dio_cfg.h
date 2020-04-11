/*
 * dio_cfg.h
 *
 * Created: 4/6/2020 10:27:27 PM
 *  Author: Omar
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_
#include "Dio_types.h"
#include "std_types.h"
#define PINCOUNT  32
typedef struct{
	Dio_DirType pinDirection;
	STD_LevelType pinState;
	}pin_ConfigType;
	extern const pin_ConfigType pin_config[];
void Dio_init();



#endif /* DIO_CFG_H_ */