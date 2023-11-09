/*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
 */

/*
© [2023] Microchip Technology Inc. and its subsidiaries.

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
#include "mcc_generated_files/system/system.h"

/*
    Main application
 */


#define NUM_BYTE    256           // Number of bytes to be shifted and transfered to memory

void DMA1_DCNT_CustomISR(void);
void CLC2_CustomISR(void);
void Config_Num_Byte(void);

extern bool sw_pressed = false;
uint8_t mem_block[NUM_BYTE]; // Memory block to store the shifted data

int main(void) {
    SYSTEM_Initialize();

    DMA1_DCNTIInterruptHandlerSet(DMA1_DCNT_CustomISR);
    CLC2_CLCI_SetInterruptHandler(CLC2_CustomISR);

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    Config_Num_Byte();      // DMA modules transfer size configuration 

    while (1) {
        if (sw_pressed == true) {
            LED1_SetHigh();
            DMA1_StartTransferWithTrigger();    // Enable DMA1 star transfer with trigger
            TU16A_Start();                      // Start universal timer
            sw_pressed = false;                 // Change the mode value for next user's input
            LED1_SetLow();
        }
    }
}

void DMA1_DCNT_CustomISR() {
    TU16A_Stop();                       // Stop universal timer
    DMA2_StartTransferWithTrigger();    // Enable DMA2 start transfer with trigger
}

void CLC2_CustomISR() {
    if (CLC2_OutputStatusGet())
        sw_pressed = true;
}

void Config_Num_Byte() {
    DMA1_Disable();
    DMA2_Disable();

    DMA1_SetDestinationAddress(&mem_block); // Set DMA1 destination address to the memory block
    DMA1_SetDestinationSize(NUM_BYTE);      // Set the number of messages for DMA1 to Transfer

    DMA2_SetSourceAddress(&mem_block);      // Set DMA2 source address ti the memory block
    DMA2_SetSourceSize(NUM_BYTE);           // Set the number of messages for DMA2 to Transfer

    DMA1_Enable();
    DMA2_Enable();
}