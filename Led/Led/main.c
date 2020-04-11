/*
 * Led.c
 * Created: 4/4/2020 11:11:51 AM
 * Author : Omar
 */ 

#define F_CPU 1600000
#include <avr/io.h>
#include <util/delay.h>
#include "bit_math.h"



int main()
{
	CLEAR_BIT(DDRB,0);
	CLEAR_BIT(DDRB,4);
	CLEAR_BIT(DDRD,2);
	SET_BIT(DDRC,2);
	SET_BIT(DDRC,7);
	SET_BIT(DDRD,3);
 /*   DDRB &=~(1<<0); //clear bit (input)
	DDRB &=~(1<<4); //clear bit (input)
	DDRD &=~(1<<2); //clear bit (input)
	DDRC |=(1<<2); //set bit (output)
	DDRC |=(1<<7); //set bit (output)
	DDRD |=(1<<3); //set bit (output)*/
    while (1) 
    {
		//if(((PINB>>0)&1) == 1){
			if (GET_BIT(PINB,0)==1) {
			_delay_ms(30);
		//	PORTC |=(1<<2);
		     SET_BIT(PORTC,2);
			_delay_ms(100);
		}
		else{
		//PORTC &=~(1<<2);
		CLEAR_BIT(PORTC,2);
		_delay_ms(100);
		}
		//if(((PINB>>4)&1) == 1){
			if(GET_BIT(PINB,4)==1){
			_delay_ms(30);
			//PORTC |=(1<<7);
			SET_BIT(PORTC,7);
			_delay_ms(100);	
    }
	else{
		//PORTC &=~(1<<7);
		CLEAR_BIT(PORTC,7);
		_delay_ms(100);
	}
	 //if(((PIND>>2)&1) == 1){
		 if(GET_BIT(PIND,2)==1){
		_delay_ms(30);
		//PORTD |=(1<<3);
		SET_BIT(PORTD,3);
		_delay_ms(100);
	}
	else{
		//PORTD &=~(1<<3);
		CLEAR_BIT(PORTD,3);
		_delay_ms(100);
	}
}
             
}

