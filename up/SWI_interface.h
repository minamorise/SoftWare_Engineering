/*
 * SWI_interface.h
 *
 *  Created on: Feb 7, 2019
 *      Author: minam
 */

#ifndef SWI_INTERFACE_H_
#define SWI_INTERFACE_H_

void SWI_Init(void);
/* function to get the value of a pin */
u8 SWI_u8GetSwitchState(u8 Copy_u8SwitchNb,u8 * Pu8PinValue);

#endif /* SWI_INTERFACE_H_ */
