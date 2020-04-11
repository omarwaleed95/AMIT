/*
 * dio_cfg.c
 *
 * Created: 4/6/2020 10:32:31 PM
 *  Author: Omar
 */ 
#include "dio_cfg.h"
#include "Dio_hw.h"
#include "bit_math.h"
const pin_ConfigType pin_config[]={
	/*PA0*/{output,STD_Low},
	/*PA1*/{output,STD_Low},
           {output,STD_Low},
           {output,STD_Low},
	       {output,STD_Low},
		   {output,STD_Low},
		   {output,STD_Low},
		   {output,STD_Low},
		   
		   {output,STD_Low},
		   {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
		   {output,STD_Low},
	       {output,STD_Low},
	       
		   {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low},
	       {output,STD_Low}
	};
	void Dio_init(){
		uint8 counter;
		Dio_PortType portx;
		Dio_channelType channelPos;
		for(counter=Dio_channelA0;counter<PINCOUNT;counter++){
			portx=counter/8;
			channelPos=counter%8;
			if(pin_config[counter].pinDirection==output){
				switch(portx){
					case Dio_PortA:
					SET_BIT(DDRA_REG,channelPos);
					break;
					case Dio_PortB:
					SET_BIT(DDRB_REG,channelPos);
					break;
					case Dio_PortC:
					SET_BIT(DDRC_REG,channelPos);
					break;
					case Dio_PortD:
					SET_BIT(DDRD_REG,channelPos);
					break;
				}
		}else

		{

			switch (portx)

			{

				case Dio_PortA:

				CLEAR_BIT(DDRA_REG,channelPos);

				break;

				case Dio_PortB:

				CLEAR_BIT(DDRB_REG,channelPos);

				break;

				case Dio_PortC:

				CLEAR_BIT(DDRC_REG,channelPos);

				break;

				case Dio_PortD:

				CLEAR_BIT(DDRD_REG,channelPos);

				break;

			}

			

		}
		}
	}