/*****************************************        */
/* Description:                                   */
/* this file privides main configurations         */
/* in order to configure the DC Motor component:  */
/*    => Direction1 Pin                           */
/*    => Direction2 Pin                           */
/*    => Motor Driver Enable Pin                  */
/*================================================*/
/* Author : Ibrahim Ibrahim Sharaby               */ 
/* Date   : 13/2/2019                             */
/* Version: V1.0                                  */
/**************************************************/


/* Header File Guard */
#ifndef MOTOR_CONFIG_H
#define MOTOR_CONFIG_H


/***************************************************/
/* Motors Numbers in The System:                   */
/*            Default Value: 3 Motors              */
/***************************************************/
#define MOTOR_NUMBER_OF_MOTORS              (u8)3

/*****************************************************/
/* Motors Pins:                                      */
/*            check Pins' Numbers from DIO Component */
/*****************************************************/
u8 MOTOR_Au8Motors[MOTOR_NUMBER_OF_MOTORS] = {DIO_PIN0,
                                              DIO_PIN1,
                                              DIO_PIN3,
                                              DIO_PIN4,
                                              DIO_PIN5,
                                              DIO_PIN6};


 
 
#endif   /* end of MOTOR_CONFIG_H file */
