/**
 * PORTW Generated Driver File
 * 
 * @file portw.c
 * 
 * @ingroup portw
 * 
 * @brief This is the generated driver implementation file for the PIC18 MCU PORTW.
 *
 * @version PORTW Driver Version 1.0.0
*/
/*
� [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

/**
  Section: Included Files
*/

#include <xc.h>
#include "../portw.h"


/**
  Section: PORTW APIs
*/

void PORTW_Initialize(void)
{
    //LATW 0; 
    LATW = 0x0;

    //IN RW1; 
    PORTWIN0 = 0x1;

    //IN RW2; 
    PORTWIN1 = 0x1;

    //IN RW3; 
    PORTWIN2 = 0x1;

    //IN RW4; 
    PORTWIN3 = 0x1;

    //IN RW5; 
    PORTWIN4 = 0x1;

    //IN RW6; 
    PORTWIN5 = 0x1;

    //IN RW7; 
    PORTWIN6 = 0x1;

    //IN RC7; 
    PORTWIN7 = 0x2;

    //CLK PWM1S1P1_OUT; 
    PORTWCLK = 0xA;

    //DF 0xff; 
    PORTWDF = 0xFF;

    //PORTW 0; 
    PORTW = 0x0;

    //CLKEN enabled; 
    PORTWCON = 0x1;

    //IOCWP
    IOCWP = 0x0;

    //IOCWN
    IOCWN = 0x0;


}

void PORTW_ClockEnable(void) 
{
    PORTWCONbits.CLKEN = 0x1;
}

void PORTW_ClockDisable(void) 
{
    PORTWCONbits.CLKEN = 0x0;
}




/**
 End of File
*/