/* ******************************************************************** */
/* Author  : Mina Morise Demian
                                  */
/* date    : 3/2/2019                                                   */
/* Version :      1.0                                                   */
/* ******************************************************************** */

/* ******************************************************************** */
/* Describtion : this code include any thing only related to AVR32      */
/* 																        */
/* ******************************************************************** */



#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_




#define DIO_u8_INIT_DEFAULT 1

/* ******************************************************************** */
/*                 masking the DDRA adress to ByteAcess                 */
/* ******************************************************************** */
/* ******************    Rule no 1                     **************** */
/*                  never use a number without casting    			    */
/* ******************************************************************** */
/* ******************    Rule no 2                     **************** */
/*                  suffix is casting for pre-processor       	        */
/*                #define pin1 (u8)1 ------> ERROR                      */
/*                  casting like #define pin1 1U   ----> un-singed      */
#define DDRA (((Register*)0x3A)->ByteAccess)
#define DDRB (((Register*)0x37)->ByteAccess)
#define DDRC (((Register*)0x34)->ByteAccess)
#define DDRD (((Register*)0x31)->ByteAccess)

/* ********************************************************************** */
/*      masking the PORTA adress with type ByteAcess   					  */
/* ********************************************************************** */

#define PORTA (((Register*)0x3B)->ByteAccess)
#define PORTB (((Register*)0x38)->ByteAccess)
#define PORTC (((Register*)0x35)->ByteAccess)
#define PORTD (((Register*)0x32)->ByteAccess)

/* ********************************************************************** */
/*     	  masking the PINA adress with type ByteAcess    				  */
/* ********************************************************************** */

#define PINA  (((Register*)0x39)->ByteAccess)
#define PINB  (((Register*)0x36)->ByteAccess)
#define PINC  (((Register*)0x33)->ByteAccess)
#define PIND  (((Register*)0x30)->ByteAccess)




#define PORT_SIZE 8



#endif /* DIO_PRIVATE_H_ */
