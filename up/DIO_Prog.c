/*
 * temp.c
 *
 *  Created on: Feb 3, 2019
 *      Author: minam
 */


/* ******************************************************************** */
/* Author  : Mina Morise Demian                                         */
/* date    : 3/2/2019                                                   */
/* Version :      1.0                                                   */
/* ******************************************************************** */

/* ******************************************************************** */
/* Describtion :  This  code contains the implementation of DIO API     */
/*    for AVR atmega32  micro-controller   			                    */
/*    using STD_Types.h to define my own "known size"  data types       */
/*    using DIO_Bit.h which define operations taken on AVR ports        */
/*    using DIO_interfaces to define the API s used by the upper layer  */
/*    using configeration.h to define the initial condition of the DIO  */
/* ******************************************************************** */

/*    using DIO_Bit.h which define operations taken on AVR ports        */
#include "DIO_Bit.h"
#include "DIO_Configertion.h"

/*    using STD_Types.h to define my own "known size"  data types       */
#include "STD_Types.h"

/*    using DIO_interfaces to define the API s used by the upper layer  */
#include "DIO_interfaces.h"

/*    using configeration.h to define the initial condition of the DIO  */
#include "DIO_Private.h"

/* ********************************************************************** */
/*				 error macros to check the output of functions 			  */
/* ********************************************************************** */
#define ERROR_NOK 1
#define ERROR_OK 0
/* ********************************************************************** */





/* ******************************************************************** */
/*                  the initialization function                         */
/*                                                                      */
/* ******************************************************************** */
void DIO_VoidSetDefaut(void)
{

/* ******************************************************************** */
/*                  concatinating the PORTA direction                   */
/*                                                                      */
/* ******************************************************************** */
/* this is based on Oring and shifting to form 8-bit number from the configs */
   	DDRA =  CONC_PORT(    DIO_OUT_MODE_DIR_CONFIG0   ,       \
		                  DIO_OUT_MODE_DIR_CONFIG1   ,       \
		                  DIO_OUT_MODE_DIR_CONFIG2   ,       \
		                  DIO_OUT_MODE_DIR_CONFIG3   ,       \
		                  DIO_OUT_MODE_DIR_CONFIG4   ,       \
		                  DIO_OUT_MODE_DIR_CONFIG5   ,       \
		                  DIO_OUT_MODE_DIR_CONFIG6   ,       \
		                  DIO_OUT_MODE_DIR_CONFIG7                 );

/* ***********************DIO_OUT_MODE_DIR_CONFIG6********************************************* */
/*                  concatinating the PORTB direction                   */
/*                                                                      */
/* ******************************************************************** */
	DDRB =  CONC_PORT(    DIO_OUT_MODE_DIR_CONFIG8   ,       \
			              DIO_OUT_MODE_DIR_CONFIG9   ,       \
			              DIO_OUT_MODE_DIR_CONFIG10   ,       \
			              DIO_OUT_MODE_DIR_CONFIG11   ,       \
			              DIO_OUT_MODE_DIR_CONFIG12   ,       \
			              DIO_OUT_MODE_DIR_CONFIG13   ,       \
			              DIO_OUT_MODE_DIR_CONFIG14   ,       \
			              DIO_OUT_MODE_DIR_CONFIG15                 );
/* ******************************************************************** */
/*                  concatinating the PORTC direction                   */
/*                                                                      */
/* ******************************************************************** */
	DDRC = CONC_PORT(    DIO_OUT_MODE_DIR_CONFIG16   ,       \
		                 DIO_OUT_MODE_DIR_CONFIG17   ,       \
		                 DIO_OUT_MODE_DIR_CONFIG18   ,       \
		                 DIO_OUT_MODE_DIR_CONFIG19   ,       \
		                 DIO_OUT_MODE_DIR_CONFIG20   ,       \
		                 DIO_OUT_MODE_DIR_CONFIG21   ,       \
		                 DIO_OUT_MODE_DIR_CONFIG22   ,       \
		                 DIO_OUT_MODE_DIR_CONFIG23                 );
/* ******************************************************************** */
/*                  concatinating the PORTD direction                   */
/*                                                                      */
/* ******************************************************************** */
	DDRD = CONC_PORT(    DIO_OUT_MODE_DIR_CONFIG24 ,       \
		                 DIO_OUT_MODE_DIR_CONFIG25 ,       \
		                 DIO_OUT_MODE_DIR_CONFIG26 ,       \
		                 DIO_OUT_MODE_DIR_CONFIG27 ,       \
                         DIO_OUT_MODE_DIR_CONFIG28 ,       \
		                 DIO_OUT_MODE_DIR_CONFIG29 ,       \
		                 DIO_OUT_MODE_DIR_CONFIG30 ,       \
		                 DIO_OUT_MODE_DIR_CONFIG31               );



#if(DIO_OUT_MODE_DIR_CONFIG0 == INPUT) && (DIO_OUT_MODE0 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE0
#define DIO_OUT_MODE0 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG1 == INPUT) && (DIO_OUT_MODE1 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE1
#define DIO_OUT_MODE1 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG2 == INPUT) && (DIO_OUT_MODE2 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE2
#define DIO_OUT_MODE2 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG3 == INPUT) && (DIO_OUT_MODE3 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE3
#define DIO_OUT_MODE3 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG4 == INPUT) && (DIO_OUT_MODE4 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE4
#define DIO_OUT_MODE4 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG5 == INPUT) && (DIO_OUT_MODE5 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE5
#define DIO_OUT_MODE5 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG6 == INPUT) && (DIO_OUT_MODE6 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE6
#define DIO_OUT_MODE6 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG7 == INPUT) && (DIO_OUT_MODE0 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE7
#define DIO_OUT_MODE7 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG8 == INPUT) && (DIO_OUT_MODE8 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE8
#define DIO_OUT_MODE8 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG9 == INPUT) && (DIO_OUT_MODE9 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE9
#define DIO_OUT_MODE9 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG10 == INPUT) && (DIO_OUT_MODE10 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE10
#define DIO_OUT_MODE10 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG11 == INPUT) && (DIO_OUT_MODE11 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE11
#define DIO_OUT_MODE11 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG12 == INPUT) && (DIO_OUT_MODE12 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE12
#define DIO_OUT_MODE12 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG13 == INPUT) && (DIO_OUT_MODE13 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE13
#define DIO_OUT_MODE13 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG14   \
 == INPUT) && (DIO_OUT_MODE14   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE14
#define DIO_OUT_MODE14 DIO_u8_INIT_DEFAULT
#endif


#if(DIO_OUT_MODE_DIR_CONFIG15   \
 == INPUT) && (DIO_OUT_MODE15   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE15
#define DIO_OUT_MODE15 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG16   \
 == INPUT) && (DIO_OUT_MODE16   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE16
#define DIO_OUT_MODE16 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG17   \
 == INPUT) && (DIO_OUT_MODE17   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE17
#define DIO_OUT_MODE17 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG18   \
 == INPUT) && (DIO_OUT_MODE18   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE18
#define DIO_OUT_MODE18 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG19   \
 == INPUT) && (DIO_OUT_MODE19   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE19
#define DIO_OUT_MODE19 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG20  \
 == INPUT) && (DIO_OUT_MODE20  \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE20
#define DIO_OUT_MODE20 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG21   \
 == INPUT) && (DIO_OUT_MODE21   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE21
#define DIO_OUT_MODE21 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG22   \
 == INPUT) && (DIO_OUT_MODE22   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE22
#define DIO_OUT_MODE22 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG23   \
 == INPUT) && (DIO_OUT_MODE23   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE23
#define DIO_OUT_MODE23 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG24   \
 == INPUT) && (DIO_OUT_MODE24   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE24
#define DIO_OUT_MODE24 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG25   \
 == INPUT) && (DIO_OUT_MODE25   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE25
#define DIO_OUT_MODE25 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG26   \
 == INPUT) && (DIO_OUT_MODE26   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE26
#define DIO_OUT_MODE26 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG27   \
 == INPUT) && (DIO_OUT_MODE27   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE27
#define DIO_OUT_MODE27 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG28   \
 == INPUT) && (DIO_OUT_MODE28   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE28
#define DIO_OUT_MODE28 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG29   \
 == INPUT) && (DIO_OUT_MODE29   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE29
#define DIO_OUT_MODE29 DIO_u8_INIT_DEFAULT
#endif

#if(DIO_OUT_MODE_DIR_CONFIG30  \
 == INPUT) && (DIO_OUT_MODE30  \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE30
#define DIO_OUT_MODE30 DIO_u8_INIT_DEFAULT
#endif


#if(DIO_OUT_MODE_DIR_CONFIG31   \
 == INPUT) && (DIO_OUT_MODE31   \
		 	 	 	 	 	 	 	 != DIO_u8_INIT_DEFAULT)

#warning "you are trying to set a value for an input pin!"
#undef  DIO_OUT_MODE31
#define DIO_OUT_MODE31 DIO_u8_INIT_DEFAULT
#endif
/* ******************************************************************** */
/*                  concatinating PORTA    output mode                  */
/*                                                                      */
/* ******************************************************************** */

	PORTA = CONC_PORT(  DIO_OUT_MODE0  ,       \
		            	DIO_OUT_MODE1  ,       \
		            	DIO_OUT_MODE2  ,       \
		            	DIO_OUT_MODE3  ,       \
		            	DIO_OUT_MODE4  ,       \
		            	DIO_OUT_MODE5  ,       \
		            	DIO_OUT_MODE6  ,       \
		            	DIO_OUT_MODE7 	              );
/* ******************************************************************** */
/*                  concatinating PORTB    output mode                  */
/*                                                                      */
/* ******************************************************************** */
	PORTB = CONC_PORT(  DIO_OUT_MODE8  ,        \
			        	DIO_OUT_MODE9  ,        \
			        	DIO_OUT_MODE10  ,       \
			        	DIO_OUT_MODE11  ,       \
                    	DIO_OUT_MODE12  ,       \
			        	DIO_OUT_MODE13  ,       \
			        	DIO_OUT_MODE14  ,       \
			        	DIO_OUT_MODE15 	              );

/* ******************************************************************** */
/*                  concatinating PORTC    output mode                  */
/*                                                                      */
/* ******************************************************************** */
	PORTC = CONC_PORT(  DIO_OUT_MODE16  ,       \
			        	DIO_OUT_MODE17  ,       \
			        	DIO_OUT_MODE18  ,       \
			        	DIO_OUT_MODE19  ,       \
                    	DIO_OUT_MODE20  ,       \
			        	DIO_OUT_MODE21  ,       \
			        	DIO_OUT_MODE22  ,       \
			        	DIO_OUT_MODE23 	              );


/* ******************************************************************** */
/*                  concatinating PORTD    output mode                  */
/*                                                                      */
/* ******************************************************************** */
	PORTD = CONC_PORT(  DIO_OUT_MODE24  ,       \
			        	DIO_OUT_MODE25  ,       \
			        	DIO_OUT_MODE26  ,       \
			        	DIO_OUT_MODE27  ,       \
                    	DIO_OUT_MODE28  ,       \
			        	DIO_OUT_MODE29  ,       \
			        	DIO_OUT_MODE30  ,       \
			        	DIO_OUT_MODE31 	              );


}


/* Description: set pin direction
 * inputs:
 * output:
 *    */
/* only one return in a function */
u8 DIO_u8SetPinDirection(u8 Copy_u8PinNB,u8 Copy_u8Direction)
{
/* ******************************************************************** */
/* 								local variables						    */
/* ******************************************************************** */
u8 u8Error																;
u8 u8PortID																;
u8 u8PinID																;

/* ******************************************************************** */
/* 				checking for errors									    */
/* ******************************************************************** */
if((Copy_u8PinNB>=DIO_MAXPINNB)|| ((Copy_u8Direction !=DIO_OUTPUT)&&(Copy_u8Direction != DIO_INPUT)))
{
u8Error = ERROR_NOK														;
}
else
{
/* ******************************************************************** */
/* 					start of the code	     				            */
/* ******************************************************************** */
/* ******************************************************************** */
/* by dividing 	    input/8 = port number , input%8= pin number         */
/* 					8 is the port size	     				            */
/* ******************************************************************** */




/* ******************************************************************** */
/* 				input/8 = port number		     				        */
/* ******************************************************************** */

u8PortID=Copy_u8PinNB/PORT_SIZE											;


/* ******************************************************************** */
/* 				input/8 = port number		     				        */
/* ******************************************************************** */

u8PinID=Copy_u8PinNB%PORT_SIZE											;



/* ******************************************************************** */
/* switch case for PORT and PIN mapping								    */
/* ******************************************************************** */
switch (u8PortID)
{
case 0:
	if (Copy_u8Direction==HIGH)
	{
			SET_BIT(DDRA,u8PinID)										;
	}
	else
	{
			CLEAR_BIT(DDRA,u8PinID)										;
	}
	break																;
case 1:
	if (Copy_u8Direction==HIGH)
		{
			SET_BIT(DDRB,u8PinID)										;
		}
		else if(Copy_u8Direction==LOW)
		{
			CLEAR_BIT(DDRB,u8PinID)										;
		}
		break 															;
case 2:
	if (Copy_u8Direction==HIGH)
		{
		SET_BIT(DDRC,u8PinID)											;
		}
		else if(Copy_u8Direction==LOW)
		{
		CLEAR_BIT(DDRC,u8PinID)											;
		}
		break															 ;
case 3:
	if (Copy_u8Direction==HIGH)
		{
		SET_BIT(DDRD,u8PinID)											;
		}
		else if(Copy_u8Direction==LOW)
		{
		CLEAR_BIT(DDRD,u8PinID)											;
		}
		break															 ;

}

}
/* ******************************************************************** */
/*						 function return 								*/
/* ******************************************************************** */
return u8Error;
}







u8 DIO_u8SetPinValue(u8 Copy_u8PinNB,u8 u8Value)
{
/* ******************************************************************** */
/* 					local variable 										*/
/* ******************************************************************** */
u8 Local_u8Error																;
u8 Local_u8PortID																;
u8 Local_u8PinID																;

/* ******************************************************************** */
/* 				checking for errors									    */
/* ******************************************************************** */
if((Copy_u8PinNB>=DIO_MAXPINNB)|| ((u8Value !=DIO_OUTPUT)&&(u8Value != DIO_INPUT)))
{
	Local_u8Error = ERROR_NOK														;
}
else{


/* ******************************************************************** */
/* 					start of the code	     				            */
/* ******************************************************************** */
/* ******************************************************************** */
/* by dividing 	    input/8 = port number , input%8= pin number         */
/* 					8 is the port size	     				            */
/* ******************************************************************** */
	Local_u8PortID=Copy_u8PinNB/PORT_SIZE											;
	Local_u8PinID=Copy_u8PinNB%PORT_SIZE											;
/* this code could be implemented by assign bit but they reflect the 	*/
/* */
switch (Local_u8PortID)
{
case 0:
	if (u8Value==HIGH)
	{
	SET_BIT(PORTA,Local_u8PinID)												;
	}
	else if(u8Value==LOW)
	{
	CLEAR_BIT(PORTA,Local_u8PinID)										;
	}
	break															    ;
case 1:
	if (u8Value==1)
		{
		SET_BIT(PORTB,Local_u8PinID)											;
		}
		else if(u8Value==LOW)
		{
		CLEAR_BIT(PORTB,Local_u8PinID)									;
		}
		break														    ;
case 2:
	if (u8Value==HIGH)
		{
		SET_BIT(PORTC,Local_u8PinID)											;
		}
		else if(u8Value==LOW)
		{
		CLEAR_BIT(PORTC,Local_u8PinID)									;
		}
		break 															;
case 3:
	if (u8Value==HIGH)
		{
		SET_BIT(PORTD,Local_u8PinID)											;
		}
		else if(u8Value==LOW)
		{
		CLEAR_BIT(PORTD,Local_u8PinID)									;
		}
		break 															;

}
}
/* function return */
return Local_u8Error															;
}


u8 DIO_u8GetPinValue(u8 Copy_u8PinNB,u8 * DIO_Pu8Value)
{
/* ******************************************************************** */
/* 								local variables						    */
/* ******************************************************************** */
u8 Local_u8Error;
u8 Local_u8PortID;
u8 Local_u8PinID;
if((Copy_u8PinNB>=DIO_MAXPINNB)|| ((DIO_Pu8Value ==NULL)))
{
	Local_u8Error = ERROR_NOK;
}
else{
/* ******************************************************************** */
/* 					start of the code	     				            */
/* ******************************************************************** */
/* ******************************************************************** */
/* by dividing 	    input/8 = port number , input%8= pin number         */
/* 					8 is the port size	     				            */
/* ******************************************************************** */
	Local_u8PortID=Copy_u8PinNB/PORT_SIZE;
	Local_u8PinID=Copy_u8PinNB%PORT_SIZE;
	switch (Local_u8PortID)
		{
		case 0:
			*DIO_Pu8Value=GET_BIT(PINA,Local_u8PinID)								;
			break														;
		case 1:
			*DIO_Pu8Value=GET_BIT(PINB,Local_u8PinID)								;
				break													;
		case 2:
			*DIO_Pu8Value=GET_BIT(PINC,Local_u8PinID)								;
				break 													;
		case 3:
			*DIO_Pu8Value=GET_BIT(PIND,Local_u8PinID)								;

				break 													;

		}

}


return Local_u8Error;
}

u8 DIO_u8SetPortDirection(u8 Copy_u8_PortNB,u8 Copy_u8_PortDirection)
{
	u8 Local_u8Error;

	if	(  (Copy_u8_PortNB>DIO_MAXPORT)   ||
			(Copy_u8_PortNB<DIO_MINPORT)  ||
			(Copy_u8_PortDirection ==NULL)
		)
	{
		Local_u8Error = ERROR_NOK								;
	}
	else
	{

		switch(Copy_u8_PortNB)
		{
		case 0 :
			if (Copy_u8_PortDirection==HIGH)
				{
					SET_BYTE(DDRA)										 ;
				}
				else if(Copy_u8_PortDirection==LOW)
				{
					CLEAR_BYTE(DDRA)									;
				}
			break;
		case 1 :
			if (Copy_u8_PortDirection==HIGH)
		        {
		        	SET_BYTE(DDRB)										 ;
		        }
		        else if(Copy_u8_PortDirection==LOW)
		        {
		        	CLEAR_BYTE(DDRB)									;
		        }
			break;
		case 2 :
			if (Copy_u8_PortDirection==HIGH)
		        {
		        	SET_BYTE(DDRC)										 ;
		        }
		        else if(Copy_u8_PortDirection==LOW)
		        {
		        	CLEAR_BYTE(DDRC)									;
		        }
			break;
		case 3 :
			if (Copy_u8_PortDirection==HIGH)
	            {
	            	SET_BYTE(DDRD)										 ;
	            }
	            else if(Copy_u8_PortDirection==LOW)
	            {
	            	CLEAR_BYTE(DDRD)									;
	            }
			break;
		}





	}


	return Local_u8Error;
}


u8 DIO_u8SetPortValue(u8 Copy_u8_PortNB,u8 Copy_u8_PortValue)
{
	u8 Local_u8Error;
	if(  (Copy_u8_PortNB>=DIO_MAXPORT) 		 ||
			 (Copy_u8_PortNB<DIO_MINPORT)   //||
			// (Copy_u8_PortValue ==NULL)
		  )
	{
		Local_u8Error = ERROR_NOK								;
	}

	/* ********************************************************************************* */
	else
		{
			switch(Copy_u8_PortNB)
			{
		                	case 0 :
		                		if (Copy_u8_PortValue==HIGH)
		                			{
		                				SET_BYTE(PORTA)							 ;
		                			}
		                			else if(Copy_u8_PortValue==LOW)
		                			{
		                				CLEAR_BYTE(PORTA)						 ;
		                			}
			                     	break;

			case 1 :
				if (Copy_u8_PortValue==HIGH)
			        {
			        	SET_BYTE(PORTB)										 ;
			        }
			        else if(Copy_u8_PortValue==LOW)
			        {
			        	CLEAR_BYTE(PORTB)									;
			        }
				break;

			case 2 :
				if (Copy_u8_PortValue==HIGH)
			        {
			        	SET_BYTE(PORTC)										 ;
			        }
			        else if(Copy_u8_PortValue==LOW)
			        {
			        	CLEAR_BYTE(PORTC)									;
			        }
				break;
			case 3 :


				if (Copy_u8_PortValue==HIGH)
		            {
		            	SET_BYTE(PORTD)									   ;
		            }
		            else if(Copy_u8_PortValue==LOW)
		            {
		            	CLEAR_BYTE(PORTD)									;
		            }
				break														;
			}

		}

/* ************************************************************************ */
	return Local_u8Error;
}

u8 DIO_u8Assign_Port_Value(u8 Copy_u8_PortNB,u8 Copy_u8_PortValue)
{
	u8 Local_u8Error=0 ;

	switch (Copy_u8_PortNB)
			{
			case 0:
				ASSIGN_BYTE(PORTA,Copy_u8_PortValue)						;
				break														;
			case 1:
				ASSIGN_BYTE(PORTB,Copy_u8_PortValue)						;
					break													;
			case 2:
				ASSIGN_BYTE(PORTC,Copy_u8_PortValue)						;
					break 													;
			case 3:
				ASSIGN_BYTE(PORTD,Copy_u8_PortValue)						;

					break 													;

			}
	return Local_u8Error															;
}


u8 DIO_u8GetPortValue(u8 Copy_u8_PortNB,u8 * DIO_Pu8PortValue)
{
	u8 Local_u8Error=0 ;

		Copy_u8_PortNB=Copy_u8_PortNB-1;
		switch (Copy_u8_PortNB)
				{
				case 0:
					GET_BYTE(PINA,* DIO_Pu8PortValue)						;
					break														;
				case 1:
					GET_BYTE(PINB,* DIO_Pu8PortValue)						;
						break													;
				case 2:
					GET_BYTE(PINC,* DIO_Pu8PortValue)						;
						break 													;
				case 3:
					GET_BYTE(PIND,*DIO_Pu8PortValue)						;

						break 													;

				}
		return Local_u8Error;
}

