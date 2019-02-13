
/* ******************************************************************** */
/* Author  : Mina Morise Demian
                                   */
/* date    : 9/2/2019                                                   */
/* Version :      3.0                                                   */
/* ******************************************************************** */

/* ******************************************************************** */
/* Describtion :  this code implement the editor defined data types     */
/* in order to be sure the size of the data and easy changed if needed  */
/* ******************************************************************** */



/*  file guard															 */
#ifndef STD_TYPES_H_
#define STD_TYPES_H_





/* we define Null as a pointer to void to be generic for any data type  */
/* 				we use this pointer  as an  input to any function 		*/
#define NULL ((void*)0)



/*               define unsigned char                                   */
typedef unsigned char 		  u8;


/*               define unsigned short integer                          */
typedef unsigned short int 	  u16;


/*               define unsigned long integer                           */
typedef unsigned long int	  u32;



/*               define signed char			                            */
typedef signed char 		  s8;

/*               define signed short  integer                           */
typedef signed short int 	  s16;


/*               define signed long integer                             */
typedef signed long int		  s32;

/*               define float				                            */
typedef float 				  f32;


/*               define double				                            */
typedef double				  f64;



/* union "Register" to access the PORT either bit by bit or as a whole byte */
typedef union{
	struct
	{
		u8 Bit0: 1;
		u8 Bit1: 1;
		u8 Bit2: 1;
		u8 Bit3: 1;
		u8 Bit4: 1;
		u8 Bit5: 1;
		u8 Bit6: 1;
		u8 Bit7: 1;

	}BitAccess;

	u8 ByteAccess;
}Register;

#define ERROR_NOK 	1

#define ERROR_OK 	0


#endif /* STD_TYPES_H_ */



