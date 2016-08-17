/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "MK20D5.h"
#include "MK20D5_simple.h"
#include <stdbool.h>

static int i = 0;

int main(void)
{
	SIM_SCGC5 |= 0x3e00;

	//Set the R, G & B LED to output mode
	PORTC_PCR3 = 0x100;
	PORTD_PCR4 = 0x100;
	PORTA_PCR2 = 0x100;
	GPIOC_PDDR = (1 << 3);
	GPIOD_PDDR = (1 << 4);
	GPIOA_PDDR = (1 << 2);


	int counter;
    /* This for loop should be replaced. By default this loop allows a single stepping. */
    for (;;){

    	//RED
		GPIOC_PDOR = 0;
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}
		GPIOC_PDOR = (1 << 3);
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}

		//GREEN
		GPIOD_PDOR = 0;
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}
		GPIOD_PDOR = (1 << 4);
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}

		//BLUE
		GPIOA_PDOR = 0;
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}
		GPIOA_PDOR = (1 << 2);
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}

		//YELLOW
		GPIOC_PDOR = 0;
		GPIOD_PDOR = 0;
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}
		GPIOC_PDOR = (1 << 3);
		GPIOD_PDOR = (1 << 4);
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}

		//Purple
		GPIOC_PDOR = 0;
		GPIOA_PDOR = 0;
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}
		GPIOC_PDOR = (1 << 3);
		GPIOA_PDOR = (1 << 2);
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}

		//CYAN
		GPIOD_PDOR = 0;
		GPIOA_PDOR = 0;
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}
		GPIOD_PDOR = (1 << 4);
		GPIOA_PDOR = (1 << 2);
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}

		//WHITE
		GPIOC_PDOR = 0;
		GPIOD_PDOR = 0;
		GPIOA_PDOR = 0;
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}
		GPIOC_PDOR = (1 << 3);
		GPIOA_PDOR = (1 << 2);
		GPIOD_PDOR = (1 << 4);
		for (counter = 0; counter < 1000000; counter++) {
			// spin
		}
	}
    /* Never leave main */
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
