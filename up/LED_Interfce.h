/* ******************************************************************** */
/* Author  : Mina Morise Demian
           */
/* date    : 9/2/2019                                                   */
/* Version :      v.2                                                   */
/* ******************************************************************** */

/* ******************************************************************** */
/* Describtion :  this code guide the upper layer engineer hot to use   */
/* LED APIs														        */
/* ******************************************************************** */

#ifndef LED_INTERFCE_H_
#define LED_INTERFCE_H_

/* ******************************************************************** */
/* 			pins of portA  												*/
/* ******************************************************************** */
#define LED_PIN0 (u8)0
#define LED_PIN1 (u8)1
#define LED_PIN2 (u8)2
#define LED_PIN3 (u8)3
#define LED_PIN4 (u8)4
#define LED_PIN5 (u8)5
#define LED_PIN6 (u8)6
#define LED_PIN7 (u8)7
/* ******************************************************************** */
/* 			pins of portB  												*/
/* ******************************************************************** */

#define LED_PIN8  (u8)8
#define LED_PIN9  (u8)9
#define LED_PIN10 (u8)10
#define LED_PIN11 (u8)11
#define LED_PIN12 (u8)12
#define LED_PIN13 (u8)13
#define LED_PIN14 (u8)14
#define LED_PIN15 (u8)15
/* ******************************************************************** */
/* 			pins of portC  												*/
/* ******************************************************************** */
#define LED_PIN16 (u8)16
#define LED_PIN17 (u8)17
#define LED_PIN18 (u8)18
#define LED_PIN19 (u8)19
#define LED_PIN20 (u8)20
#define LED_PIN21 (u8)21
#define LED_PIN22 (u8)22
#define LED_PIN23 (u8)23
/* ******************************************************************** */
/* 			pins of portD  												*/
/* ******************************************************************** */
#define LED_PIN24 (u8)24
#define LED_PIN25 (u8)25
#define LED_PIN26 (u8)26
#define LED_PIN27 (u8)27
#define LED_PIN28 (u8)28
#define LED_PIN29 (u8)29
#define LED_PIN30 (u8)30
#define LED_PIN31 (u8)31



/* ******************************************************************** */
/* 			initialization of LED configuration  						*/
/* ******************************************************************** */
void VoidLedInitial(void);


/* ******************************************************************** */
/* 			make a specific LED turn on			  						*/
/* ******************************************************************** */
u8 u8Led_On(u8 u8PinNB);

/* ******************************************************************** */
/* 			make a specific LED turn off		  						*/
/* ******************************************************************** */
u8 u8Led_OFF(u8 u8PinNB);

#endif /* LED_INTERFCE_H_ */
