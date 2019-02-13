/* ******************************************************************** */
/* Author  : Mina Morise Demian
                             */
/* date    : 9/2/2019                                                   */
/* Version :      v.3                                                  */
/* ******************************************************************** */

/* ******************************************************************** */
/* Describtion :  this code contain the interfaces needed by the higher */
/*  abstrction layer to be able to use this driver					    */
/* ******************************************************************** */

/* 	file guard 															*/
#ifndef DIO_INTERFACES_H_
#define DIO_INTERFACES_H_




/* ******************************************************************** */
/* 			pins of portA  												*/
/* ******************************************************************** */
/*(u8)num is casting of the number for a specific type				    */
/* this type can't be used in preprocessing concatination 			    */
#define DIO_PIN0 (u8)0
#define DIO_PIN1 (u8)1
#define DIO_PIN2 (u8)2
#define DIO_PIN3 (u8)3
#define DIO_PIN4 (u8)4
#define DIO_PIN5 (u8)5
#define DIO_PIN6 (u8)6
#define DIO_PIN7 (u8)7


/* ******************************************************************** */
/* 			pins of portB  												*/
/* ******************************************************************** */

#define DIO_PIN8  (u8)8
#define DIO_PIN9  (u8)9
#define DIO_PIN10 (u8)10
#define DIO_PIN11 (u8)11
#define DIO_PIN12 (u8)12
#define DIO_PIN13 (u8)13
#define DIO_PIN14 (u8)14
#define DIO_PIN15 (u8)15

/* ******************************************************************** */
/* 			pins of portC  												*/
/* ******************************************************************** */
#define DIO_PIN16 (u8)16
#define DIO_PIN17 (u8)17
#define DIO_PIN18 (u8)18
#define DIO_PIN19 (u8)19
#define DIO_PIN20 (u8)20
#define DIO_PIN21 (u8)21
#define DIO_PIN22 (u8)22
#define DIO_PIN23 (u8)23


/* ******************************************************************** */
/* 			pins of portD  												*/
/* ******************************************************************** */
#define DIO_PIN24 (u8)24
#define DIO_PIN25 (u8)25
#define DIO_PIN26 (u8)26
#define DIO_PIN27 (u8)27
#define DIO_PIN28 (u8)28
#define DIO_PIN29 (u8)29
#define DIO_PIN30 (u8)30
#define DIO_PIN31 (u8)31


/*this define the max number of pins of AVR to be used in APIs of this driver  */
#define DIO_MAXPINNB (u8)32
/* define the max and min number of ports of the target (AVR)*/
#define DIO_MAXPORT 4
#define DIO_MINPORT 0

/*  high and low values												    */
#define HIGH 1
#define LOW 0

/* ******************************************************************** */
/* 	function of the main configurations of the DIO						*/
/* ******************************************************************** */
void DIO_VoidSetDefaut(void)											;
/* ******************************************************************** */
/* 				API to set pin direction								*/
/* ******************************************************************** */



u8 DIO_u8SetPinDirection(u8 Copy_u8PinNB,u8 Copy_u8Direction)			;

/* ******************************************************************** */
/* 				API to get pin direction								*/
/* ******************************************************************** */


u8 DIO_u8GetPinValue(u8 Copy_u8PinNB ,u8 * DIO_Pu8Value)				;

/* ******************************************************************** */
/* 				API to set pin value									*/
/* ******************************************************************** */
u8 DIO_u8SetPinValue(u8 Copy_u8PinNB,u8 Copy_u8Value)					;

/* ******************************************************************** */
/* 				API to set PORT DIRECTION								*/
/* ******************************************************************** */
u8 DIO_u8SetPortDirection(u8 Copy_u8_PortNB,u8 Copy_u8_PortDirection)	;


/* ******************************************************************** */
/* 				API to set PORT value									*/
/* ******************************************************************** */
u8 DIO_u8SetPortValue(u8 Copy_u8_PortNB,u8 Copy_u8_PortValue)				;

/* ******************************************************************** */
/* 				API to set PORT value									*/
/* ******************************************************************** */
u8 DIO_u8GetPortValue(u8 Copy_u8_PortNB,u8 * DIO_Pu8PortValue)			;

u8 DIO_u8Assign_Port_Value(u8 Copy_u8_PortNB,u8 Copy_u8_PortValue);
#endif
/* DIO_INTERFACES_H_ */
