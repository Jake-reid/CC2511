/* ###################################################################
**     Filename    : main.c
**     Project     : Lab4
**     Processor   : MK20DX128VLH5
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-08-17, 09:42, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "GreenLED.h"
#include "BitIoLdd1.h"
#include "AS1.h"
#include "ASerialLdd1.h"
#include "RedLED.h"
#include "BitIoLdd2.h"
#include "BlueLED.h"
#include "BitIoLdd3.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* User includes (#include below this line is not maintained by Processor Expert) */
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>



char charRecieved() {
	byte c, err;

	do {

			err = AS1_RecvChar(&c);

	} 	while (err != ERR_OK);
	return c;
}

  void Send(char *str){
	  byte err;
	  int i, len;

	  len = strlen(str);

		for (i=0; i < len; i++) {

			do {

				err = AS1_SendChar(str[i]);

			}while (err != ERR_OK);
		}

  }





/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  for(;;) {
	  switch(charRecieved()) {

	  case 'r' :
		  RedLED_PutVal(!RedLED_GetVal());
		  Send("Red light mofo\n\r");
		  break;

	  case 'g' :
		  GreenLED_PutVal(!GreenLED_GetVal());
		  Send("By the power of yellow and blue I SUMMON GREEN\n\r");
		  break;

	  case 'b' :
		  BlueLED_PutVal(!BlueLED_GetVal());
		  Send("if this was a real attack you'd be dead\n\r");
		  break;
	  }
  }
  /*for(;;) { }    r = 0x70  g = 0x67 b = 0x62

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
