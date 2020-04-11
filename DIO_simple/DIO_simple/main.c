/*
 * DIO_simple.c
 *
 * Created: 4/3/2020 11:11:18 AM
 * Author : Omar
 */ 
#define F_CPU 1600000
#include <avr/io.h>
#include <util/delay.h>
#include <bit_math.h>



int main(void)
{
	CLEAR_BIT(DDRB,0);
	SET_BIT(DDRA,1);
	//DDRB &=~(1<<0); //clear bit (input)
	//DDRA |=(1<<1); //set bit (output)
    while (1) 
    {
	//if(((PINB>>1)&1) == 1){
		if((GET_BIT(PINB,1)) == 1){
		_delay_ms(30);
	//PORTA |=(1<<1); 
	SET_BIT(PORTA,1);
	_delay_ms(100);
	}
	else{
	//PORTA &=~(1<<3);
	CLEAR_BIT(PORTA,3);
	_delay_ms(100);
	}
    }
	
}

