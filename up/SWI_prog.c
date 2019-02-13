/*
 * SWI_prog.c
 *
 *  Created on: Feb 7, 2019
 *      Author: minam
 */

#include "STD_Types.h"
#include "DIO_Bit.h"
#include "DIO_interfaces.h"

#include "SWI_private.h"
#include "SWI_config.h"


#define F_Dim 0
#define S_Dim 1



void SWI_Init(void)
{
	u8 Copy_u8counter;

           for(Copy_u8counter=0;Copy_u8counter<SWI_NUMB;Copy_u8counter++)
                 {
        	   DIO_u8SetPinDirection(Au8SwiConfig[Copy_u8counter][F_Dim],0) ;
                 }


}





/* function to get the value of a pin */
u8 SWI_u8GetSwitchState(u8 Copy_u8SwitchNb,u8 * Pu8PinValue)
{
	u8 Local_u8Error=0;
			if(Au8SwiConfig[Copy_u8SwitchNb][S_Dim]==PULL_UP)
				{


					u8Get_Pin_Value( Au8SwiConfig[Copy_u8SwitchNb][F_Dim], Pu8PinValue)		;

						if(*Pu8PinValue==0)
							{*Pu8PinValue=PRESSED;}
						else{*Pu8PinValue=RELEASED;}


				}
			else{

				u8Get_Pin_Value( Au8SwiConfig[Copy_u8SwitchNb][F_Dim] , Pu8PinValue)			;
					if(*Pu8PinValue==0)
						{
						* Pu8PinValue=RELEASED;
						}
					else{
						* Pu8PinValue=PRESSED;
					}


				}
return Local_u8Error;
}

