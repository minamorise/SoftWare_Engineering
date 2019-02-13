/*
 * LED_config.h
 *
 *  Created on: Feb 7, 2019
 *      Author: minam
 */

/* ******************************************************************** */
/* Author  : Mina Morise Demian									        */
/* date    : 9/2/2019                                                   */
/* Version :      3.0                                                   */
/* ******************************************************************** */
/* ******************************************************************** */
/* Describtion :  this code contain the configuration parameter	        */
/* 					 											        */
/* ******************************************************************** */




/* ******************************************************************** */
/* 			file guard													*/
/* ******************************************************************** */

#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_



#define LED_u8Number (u8)2
/* ******************************************************************* */
/*  this is a 2D array which carry all data needed to configure LEDS   */
/*           ----------------------------                              */
/*           |        |					|					           */
/*           |        |		pin_NB		|					           */
/*           |    0   |-----------------|					           */
/*           |        |					|					           */
/*           |        |		LED_TYPE	|					           */
/*           |        |----------------	|					           */
/*           |        |		LED_STATE	|					           */
/*           |        |					|					           */
/*           ---------- ----------------                               */
/*           ----------------------------                              */
/*           |        |					|					           */
/*           |        |		pin_NB		|					           */
/*           |    1   |-----------------|					           */
/*           |        |					|					           */
/*           |        |		LED_TYPE	|					           */
/*           |        |----------------	|					           */
/*           |        |		LED_STATE	|					           */
/*           |        |					|					           */
/*           ---------- ----------------                               */
/*				add your configuration  to this array as described	   */
/*				by using MACROS from interface file 				   */
/*		LED_TYPE --->		ACTIV_HIGH 								   */
/*				 |-->		ACTIV_LOW   							   */
/* 																	   */
/*		LED_STATE -->		LED_ON 									   */
/*				 |-->		LED_OFF 								   */
/* ******************************************************************* */

u8 Au8LedMap[LED_u8Number][3]=							{
		{	LED_PIN30	,	ACTIV_HIGH	,	LED_ON	}					,
		{	LED_PIN1	,	ACTIV_HIGH	,	LED_OFF	}
														}				;





#endif /* LED_CONFIG_H_ */
