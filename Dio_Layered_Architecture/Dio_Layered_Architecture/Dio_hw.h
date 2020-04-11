/*
 * Dio_hw.h
 *
 * Created: 4/6/2020 9:42:09 PM
 *  Author: Omar
 */ 


#ifndef DIO_HW_H_
#define DIO_HW_H_

#include "std_types.h"
//datasheet

#define PORTA_REG    *((volatile uint8*)0x3B)
#define PORTB_REG	 *((volatile uint8*)0x38)
#define PORTC_REG	 *((volatile uint8*)0x35)
#define PORTD_REG	 *((volatile uint8*)0x32)


#define DDRA_REG     *((volatile uint8*)0x3A)
#define DDRB_REG	 *((volatile uint8*)0x37)
#define DDRC_REG	 *((volatile uint8*)0x34)
#define DDRD_REG	 *((volatile uint8*)0x31)


#define PINA_REG     *((volatile uint8*)0x39)
#define PINB_REG	 *((const volatile uint8*)0x36 )
#define PINC_REG	 *((const volatile uint8*)0x33 )
#define PIND_REG	 *((const volatile uint8*)0x30 )





#endif /* DIO_HW_H_ */