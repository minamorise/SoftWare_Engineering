/*

 * main.c
 *
 *  Created on: Jan 31, 2019
 *      Author: minam
 */
#include "DIO_Bit.h"
#include "STD_Types.h"

#include "DIO_interfaces.h"

#include <util/delay.h>

#include "DIO_Configertion.h"

#define DDRD (((Register*)0x31)->ByteAccess)
#define PORTD (((Register*)0x32)->ByteAccess)




u8 main(void)
{
/****************************************************************/
/* local  variable store the error level value 					*/
/****************************************************************/

	u8 Local_u8Error;




	return Local_u8Error;
}
