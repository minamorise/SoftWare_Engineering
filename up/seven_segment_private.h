/*
 * seven_segment_private.h
 *
 *  Created on: Feb 5, 2019
 *      Author: minam
 */

#ifndef SEVEN_SEGMENT_PRIVATE_H_
#define SEVEN_SEGMENT_PRIVATE_H_



#define SEV_SEG_ZERO  0b01000001
#define SEV_SEG_ONE   0b01011111
#define SEV_SEG_TWO   0b10001001
#define SEV_SEG_THREE 0b10100001
#define SEV_SEG_FOUR  0b00110011
#define SEV_SEG_FIVE  0b00100101
#define SEV_SEG_SIX   0b00000101
#define SEV_SEG_SEVEN 0b11110001
#define SEV_SEG_EIGHT 0b00000001
#define SEV_SEG_NINE  0b00100001

#define PORT_SIZE 8
#define MAXPORTNB 4
#define NUMBERS 10
/* 			 enabel --> D0                */
/* while loop to toggle one seven segment */
/*             D1                         */
/*          ---------                     */
/*       D7 |        |                    */
/*          | D6     |D2                  */
/*          ---------                     */
/*       D5 |        |D3                  */
/*          |        |                    */
/*          ---------                     */
/*              D4                        */
/* ******************************************************************** */
/* 			pins of portA  												*/
/* ******************************************************************** */
u8 SSD_Au8BitValues[NUMBERS]={0b01000001,  //0
							  0b01011111,  //1
							  0b10001001,  //2
							  0b10100001,
							  0b00110011,   //4
							  0b00100101,
							  0b00000101,   //6
							  0b11110001,
							  0b00000001,   //8
							  0b00100001		};


#endif /* SEVEN_SEGMENT_PRIVATE_H_ */
