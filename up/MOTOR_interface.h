/****************************************/
/* Description:                         */
/* this file provides API(s) and main   */
/* macros to deal with the motor driver */
/* to make it spin clock/counter_clock  */
/* wise                                 */
/*======================================*/
/* Author : Ibrahim Ibrahim Sharaby     */ 
/* Date   : 13/2/2019                   */
/* Version: V1.0                        */
/****************************************/


/* Preprocessor Guard */
#ifndef MOTOR_INTERFACE_H
#define MOTOR_INTERFACE_H

/* functions prototypes */
/************************/

/*************************************************************************************/
/* Description: runs the motor's clock wise	        						                     */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8Direction1     : the first control pin to the motor driver		     */
/* 		      Copy_u8Direction2     : the first control pin to the motor driver        */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 MOTOR_u8RunForward(u8 Copy_u8Direction1 , u8 Copy_u8Direction2);

/*************************************************************************************/
/* Description: runs the motor's counter clock wise	        						             */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8Direction1     : the first control pin to the motor driver		     */
/* 		      Copy_u8Direction2     : the first control pin to the motor driver        */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 MOTOR_u8RunBackward(u8 Copy_u8Direction1 , u8 Copy_u8Direction2);

/*************************************************************************************/
/* Description: stops the motor's spinning	        						                     */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8Direction1     : the first control pin to the motor driver		     */
/* 		      Copy_u8Direction2     : the first control pin to the motor driver        */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 MOTOR_u8Stop(u8 Copy_u8Direction1 , u8 Copy_u8Direction2);


#endif   /* end of MOTOR_INTERFACE_H file */