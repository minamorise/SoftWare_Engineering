/*
 * SWI_config.h
 *
 *  Created on: Feb 7, 2019
 *      Author: minam
 */


/* ******************************************************************** */
/* Author  : Mina Morise Demian									        */
/* date    : 9/2/2019                                                   */
/* Version :      .0                                                    */
/* ******************************************************************** */
/* ******************************************************************** */
/* Describtion :  this code contain the configuration parameter	        */
/* 			of switches		 											*/
/* ******************************************************************** */
#ifndef SWI_CONFIG_H_
#define SWI_CONFIG_H_
#define PULL_UP 2

#define PRESSED 5
#define RELEASED 4


/* 	set the number of your switches */
#define SWI_NUMB (u8)2
#define SWI_PARAMETER_NUMB (u8)2
/* every switch must get the parameter of the following in order*/
/* pin number as in DIO interface Macros  */
/* if it is PULL_UP or PULL_DOWN 		  */



/* ******************************************************************* */
/* this is a 2D array which carry all data needed to configure Switches*/
/*           ----------------------------                              */
/*           |        |					|					           */
/*           |        |		pin_NB		|					           */
/*           |    0   |-----------------|					           */
/*           |        |					|					           */
/*           |        |		switch_TYPE	|					           */
/*           ---------- ----------------                               */
/*           ----------------------------                              */
/*           |        |					|					           */
/*           |        |		pin_NB		|					           */
/*           |    1   |-----------------|					           */
/*           |        |					|					           */
/*           |        |		switch_type	|					           */
/*           ---------- ----------------                               */
/* ******************************************************************* */
/*					___________________________ +ve						*/
/* 					|				|		  			 				*/
/* 					|				|		  			 				*/
/* 			p_down /				R		  			 				*/
/* 					|___. out 		|_____. out		  			 		*/
/* 					|				|		  			 				*/
/* 					R			   /		  P_UP		 				*/
/* 					|				|		  			 				*/
/*					|_______________|___________ gnd					*/
/* ******************************************************************* */






u8 Au8SwiConfig[SWI_NUMB][SWI_PARAMETER_NUMB]={  {	DIO_PIN2,PULL_UP	}	,
												 {	DIO_PIN3,PULL_UP	}
																		   };







#endif /* SWI_CONFIG_H_ */
