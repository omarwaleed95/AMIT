/*
 * bit_math.h
 *
 * Created: 4/5/2020 9:10:36 PM
 *  Author: omar
 */ 


#ifndef BIT_MATH_H_

#define BIT_MATH_H_
#define GET_BIT(var,bit)    ((var>>bit)&1)
#define SET_BIT(var,bit)    (var |=(1<<bit))
#define CLEAR_BIT(var,bit)     (var &=~(1<<bit))
#define TOGGLE_BIT(var,bit)   (var^=(1<<bit))

#endif /* BIT_MATH_H_ */