/*

 * LED.

c
 *
 *  Created on: Jan 31, 2019
 *      Author: minam
 */


/*    using DIO_Bit.h which define operations taken on AVR ports        */
#include "DIO_Bit.h"
#include "DIO_Configertion.h"


/*    using STD_Types.h to define my own "known size"  data types       */
#include "STD_Types.h"

/*    using DIO_interfaces to define the API s used by the upper layer  */
#include "DIO_interfaces.h"

/*    using configeration.h to define the initial condition of the DIO  */
#include "DIO_Private.h"
#include "LED_Interfce.h"
#include "LED_private.h"
#include "LED_config.h"
#define min_PIN 0
#define max_PIN 31
#define LED_HIGH 1
#define LED_LOW 0


void VoidLedInitial(void)
{
	u8 Local_u8Error;
	u8 Local_u8Counter=0;

        for(	Local_u8Counter=0	;	Local_u8Counter<=LED_u8Number	;	Local_u8Counter++	)
        {
        			  /* checking the TYPE and State of a LED				    */
                  if( (	Au8LedMap[Local_u8Counter][1]	==	ACTIV_HIGH	)	&&	(	Au8LedMap[Local_u8Counter][2]	==	LED_ON	)	)
                  {
                	  /*		setting LED Direction							*/
                	  Local_u8Error=DIO_u8SetPinDirection(Au8LedMap[Local_u8Counter][0],LED_HIGH);

                	  /*		setting LED State								*/

                	  Local_u8Error=DIO_u8SetPinValue(Au8LedMap[Local_u8Counter][0],LED_HIGH);
                  }



                  else if(  (	Au8LedMap[Local_u8Counter][1]==ACTIV_HIGH	)	&&	(	Au8LedMap[Local_u8Counter][2]==LED_OFF	)  )
                  {
                	  /*		setting LED Direction							*/

                	  Local_u8Error=DIO_u8SetPinDirection(Au8LedMap[Local_u8Counter][0],LED_HIGH);
                	  /*		setting LED State								*/

                	  Local_u8Error=DIO_u8SetPinValue(Au8LedMap[Local_u8Counter][0],LED_LOW);

                  }
                  else if( (	Au8LedMap[Local_u8Counter][1]==ACTIV_LOW	)	&&	(	Au8LedMap[Local_u8Counter][2]==LED_ON	)	)
                  {
                	  /*		setting LED Direction							*/

                	  Local_u8Error=DIO_u8SetPinDirection(Au8LedMap[Local_u8Counter][0],LED_HIGH);
                	  /*		setting LED State								*/

                	  Local_u8Error=DIO_u8SetPinValue(Au8LedMap[Local_u8Counter][0],LED_LOW);
                  }
                  else
                  {
                	  /*		setting LED Direction							*/

                	  Local_u8Error=DIO_u8SetPinDirection(Au8LedMap[Local_u8Counter][0],LED_HIGH);
                	  /*		setting LED State								*/

                	  Local_u8Error=DIO_u8SetPinValue(Au8LedMap[Local_u8Counter][0],LED_HIGH);
                  }
        }

}


u8 u8Led_On(u8 u8PinNB)
{

	u8 Local_u8Error=0;

	if(	(	u8PinNB<min_PIN	)	||	(	u8PinNB	>	max_PIN	)	)
	{
		Local_u8Error=1;
	}
	else {

                              if(	Au8LedMap[u8PinNB][1]	==	ACTIV_HIGH	)
                              {
                              		Local_u8Error	=	DIO_u8SetPinDirection(	Au8LedMap[u8PinNB][0]	,	LED_HIGH	)	;

                              		Local_u8Error	=	DIO_u8SetPinValue(	Au8LedMap[u8PinNB][0]		,	LED_HIGH		)	;
                              }
                              else
                              {

                            		Local_u8Error	=	DIO_u8SetPinDirection(	Au8LedMap[u8PinNB][0]	,	LED_HIGH	)	;

                            		Local_u8Error	=	DIO_u8SetPinValue(	Au8LedMap[u8PinNB][0]		,	LED_HIGH		)	;


                              }

    	}
    	return Local_u8Error ;
}

u8 u8Led_OFF(u8 u8PinNB)
{
	u8 Local_u8Error;


	if((u8PinNB<min_PIN)||(u8PinNB>max_PIN))
		{
		Local_u8Error=1;
		}
		else {


			Local_u8Error=DIO_u8SetPinDirection(Au8LedMap[u8PinNB][0],LED_HIGH);

			Local_u8Error=DIO_u8SetPinValue(Au8LedMap[u8PinNB][0],LED_LOW);


	    	}



	return Local_u8Error ;
}

