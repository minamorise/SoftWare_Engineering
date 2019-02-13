/********************************************************/
/* Description: provides the implementation             */
/*              for the API(s) in the Motor component   */
/*======================================================*/
/* Author : Ibrahim Ibrahim Sharaby                     */ 
/* Date   : 13/2/2019                                   */
/* Version: V1.0                                        */
/********************************************************/

/* include required files*/
#include "STD_Types.h"
#include "DIO_Bit.h"
#include "DIO_interfaces.h"

#include "MOTOR_interface.h"
#include "MOTOR_priv.h"
#include "MOTOR_config.h"

/*************************************************************************************/
/* Description: runs the motor's clock wise	        						                     */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8Direction1     : the first control pin to the motor driver		     */
/* 		      Copy_u8Direction2     : the first control pin to the motor driver        */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 MOTOR_u8RunForward(u8 Copy_u8MotorIndex)
{
  /* local variables */
  u8 Locale_u8ErrorState;
  u8 Local_u8Temp;
  
  /* validate input arguments */
  if( (Copy_u8MotorIndex <  MOTOR_NUMBER_OF_MOTORS)  )
  {
    Local_u8Temp = 2 * Copy_u8MotorIndex;
    DIO_u8SetPinValue(MOTOR_Au8Motors[Local_u8Temp], HIGH);
    Local_u8Temp++;
    DIO_u8SetPinValue(MOTOR_Au8Motors[Local_u8Temp], LOW);
    Locale_u8ErrorState = ERROR_OK;
  }
  else
  {
    Locale_u8ErrorState = ERROR_NOK;
  }
  return Locale_u8ErrorState;
}

/*************************************************************************************/
/* Description: runs the motor's counter clock wise	        						             */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8Direction1     : the first control pin to the motor driver		     */
/* 		      Copy_u8Direction2     : the first control pin to the motor driver        */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 MOTOR_u8RunBackward(u8 Copy_u8MotorIndex )
{
  /* local variables */
  u8 Locale_u8ErrorState;
  u8 Local_u8Temp;
  
  /* validate input arguments */
  if( (Copy_u8MotorIndex <  MOTOR_NUMBER_OF_MOTORS)  )
  {
    Local_u8Temp = 2 * Copy_u8MotorIndex;
    DIO_u8SetPinValue(MOTOR_Au8Motors[Local_u8Temp], LOW);
    Local_u8Temp++;
    DIO_u8SetPinValue(MOTOR_Au8Motors[Local_u8Temp], HIGH);
    Locale_u8ErrorState = ERROR_OK;
  }
  else
  {
    Locale_u8ErrorState = ERROR_NOK;
  }
  return Locale_u8ErrorState;
}
 
  
/*************************************************************************************/
/* Description: stops the motor's spinning	        						                     */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8Direction1     : the first control pin to the motor driver		     */
/* 		      Copy_u8Direction2     : the first control pin to the motor driver        */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 MOTOR_u8Stop(u8 Copy_u8MotorIndex)
{
  /* local variables */
  u8 Locale_u8ErrorState;
  u8 Local_u8Temp;
  
  /* validate input arguments */
  if( (Copy_u8MotorIndex <  MOTOR_NUMBER_OF_MOTORS)  )
  {
    Local_u8Temp = 2 * Copy_u8MotorIndex;
    DIO_u8SetPinValue(MOTOR_Au8Motors[Local_u8Temp], LOW);
    Local_u8Temp++;
    DIO_u8SetPinValue(MOTOR_Au8Motors[Local_u8Temp], LOW);
    Locale_u8ErrorState = ERROR_OK;
  }
  else
  {
    Locale_u8ErrorState = ERROR_NOK;
  }
  return Locale_u8ErrorState;
}
