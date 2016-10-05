/* ###################################################################
**     Filename    : main.c
**     Project     : lab 8
**     Processor   : MK20DX128VLH5
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-10-22, 13:40, # CodeGen: 0
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
#include "redLED.h"
#include "PwmLdd1.h"
#include "TU1.h"
#include "greenLED.h"
#include "PwmLdd2.h"
#include "blueLED.h"
#include "PwmLdd3.h"
#include "Term1.h"
#include "Inhr1.h"
#include "ASerialLdd2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include <stdbool.h>
/* User includes (#include below this line is not maintained by Processor Expert) */
extern volatile char buffer [64];
extern volatile int index;
extern volatile bool flag;
/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */

  int redLED = 0;
  int greenLED = 0;
  int blueLED = 0;


  Term1_SetColor(clGreen, clBlack);
  Term1_Cls();
  Term1_MoveTo(1,1);


  Term1_SendStr("Lab 8 Jake");
  Term1_MoveTo(1,3);
  Term1_SetColor(clBlack, clGreen);
  Term1_SendStr("    Colour Strength     |         How to Use                   ");
  int barLocations[] = {1, 25, 63};
  for(int j = 0;j < 3;j++){
	  for(int i = 4 ; i < 10 ; i++){
		  Term1_MoveTo( barLocations[j] , i );
		  Term1_SendStr(" ");
	  }
  }
  Term1_MoveTo(1,10);
  Term1_SendStr("                                                               ");




  Term1_SetColor(clGreen, clBlack);
  Term1_MoveTo(27,5);
  Term1_SendStr("Enter a Colour(Red, Green or Blue)");
  Term1_MoveTo(27,6);
  Term1_SendStr("Followed by the intensity(0-255)");
  Term1_MoveTo(3,5);
  Term1_SendStr("Red:");
  Term1_MoveTo(3,6);
  Term1_SendStr("Green:");
  Term1_MoveTo(3,7);
  Term1_SendStr("Blue:");


  for(;;){
	  	Term1_MoveTo(1,11);
		while(flag == FALSE){



		}

		Term1_MoveTo(10,7);
		Term1_SendStr("   ");
		Term1_MoveTo(10,6);
		Term1_SendStr("   ");
		Term1_MoveTo(10,5);
		Term1_SendStr("   ");

		Term1_SetColor(clGreen, clBlack);
		sscanf(buffer,"blue %i",&blueLED);
		sscanf(buffer,"red %i",&redLED);
		sscanf(buffer,"green %i",&greenLED);


		if(blueLED < 256){
			redLED_SetRatio8(blueLED);
			Term1_MoveTo(10,7);
			Term1_SendNum(blueLED);
		}

		if(redLED < 256){
			greenLED_SetRatio8(redLED);
			Term1_MoveTo(10,5);
			Term1_SendNum(redLED);
		}

		if(greenLED < 256){
			blueLED_SetRatio8(greenLED);
			Term1_MoveTo(10,6);
			Term1_SendNum(greenLED);
		}

		flag = FALSE;
		index = 0;

		for (int i = 0; i < 64; i ++) {
			buffer[i] = 0;
		}


										/*possibly display an error if LED intensity > 255 */




  }





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
