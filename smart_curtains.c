
/* includes */

u8 mode_debouncing = 0;
u8 up_debouncing   = 0;
u8 down_debouncing = 0;


void main(void)
{
  /* steps :
   * read mode sw PIN0
   * up sw PIN1
   * down sw PIN2
   * up limit sw PIN3
   * down limit sw PIN4
  */
  /* initialize DIO component */
  DIO_vidInitialize();
  
  /* start main application */
  while(1)
  {
    /* read mode sw */
    if( DIO_u8GetPinValue(DIO_PIN0) == 0)
    {
         mode_debouncing++;           
    }
    else
    {
      /* increase counter one step */
      counter++;
      /* circuilate counter if > number of curtains */
      if(counter > MOTOR_NUMBER_OF_MOTORS)
        counter = 0;
      /* 
      if(mode_debouncing == 200)
      {
        /* check if up button is pressed */
        if(DIO_u8GetPinValue(DIO_PIN1) == 0)
        {
          /* check if pressed more than 2 sec */
          up_debouncing++;
          if(up_debouncing >= 200)
          {
            /* run motor until its released */
            Motor_u8RunForward(counter);
          }
        }
        else
        {
          /* run motor counter clockwise until upper limit */
          while(DIO_u8GetPinValue(DIO_PIN3) == 1)
             Motor_u8RunForward(counter);
          if(DIO_u8GetPinValue(DIO_PIN2) == 0)
            Motor_u8Stop(counter);
        }
        /* check if down button is pressed */
        if(DIO_u8GetPinValue(DIO_PIN1) == 0)
        {
          /* check if down button pressed more than 2 sec */
          down_debouncing++;
          if(up_debouncing >= 200)
          {
            /* run motor counter cloakwise until its released */
            Motor_u8RunBackward(counter);
          }
        }
        else
        {
          /* run motor until lower limit */
          while(DIO_u8GetPinValue(DIO_PIN2) == 1)
             Motor_u8RunBackward(Motor0);
          if(DIO_u8GetPinValue(DIO_PIN2) == 0)
            Motor_u8Stop(counter);
        }
      }
    }
  }
  
  
}