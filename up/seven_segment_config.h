/*
 * seven_segmen_config.h
 *
 *  Created on: Feb 5, 2019
 *      Author: minam
 */

#ifndef SEVEN_SEGMENT_CONFIG_H_
#define SEVEN_SEGMENT_CONFIG_H_
/* 					use COMTYPE = 1 for common anode			 */
/* 					use COMTYPE = 0 for common cathode			 */

#define Anode 1
#define Cathode 0

#define COMTYPE Anode


/* 			 enabel --> s0                */
/* while loop to toggle one seven segment */
/*             s1                         */
/*          ---------                     */
/*       s7 |        |                    */
/*          | s6     |s2                  */
/*          ---------                     */
/*       s5 |        |s3                  */
/*          |        |                    */
/*           ---------                    */
/*              s4                        */
/* you should follow this sequence in typing pins*/
#define SSD_NB 2
#if( SSD_NB>MAXPORTNB)
#warning "you  are trying to set un available SSD "
#endif
u8 u8TYPE[4]={Anode,Anode,Anode,Anode};
u8 SSD_Au8[SSD_NB][8]={{SSD_PIN24 , SSD_PIN25 , SSD_PIN26 , SSD_PIN27 , SSD_PIN28 , SSD_PIN29 ,SSD_PIN30 ,SSD_PIN23},
		{SSD_PIN0 , SSD_PIN1 , SSD_PIN2 , SSD_PIN3 , SSD_PIN4 , SSD_PIN5 ,SSD_PIN6 ,SSD_PIN7}};
//u8 SSD_Au8[SSD_NB][PORT_SIZE+1]={{SSD_PIN31,SSD_PIN30 , SSD_PIN29 , SSD_PIN28 , SSD_PIN27 , SSD_PIN26 , SSD_PIN25 ,SSD_PIN24 ,Anode}};
#endif /* SEVEN_SEGMENT_CONFIG_H_ */
