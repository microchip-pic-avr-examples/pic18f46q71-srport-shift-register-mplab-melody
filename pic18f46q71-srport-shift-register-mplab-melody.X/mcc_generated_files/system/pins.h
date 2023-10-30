/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA7 aliases
#define LED1_TRIS                 TRISAbits.TRISA7
#define LED1_LAT                  LATAbits.LATA7
#define LED1_PORT                 PORTAbits.RA7
#define LED1_WPU                  WPUAbits.WPUA7
#define LED1_OD                   ODCONAbits.ODCA7
#define LED1_ANS                  ANSELAbits.ANSELA7
#define LED1_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LED1_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LED1_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LED1_GetValue()           PORTAbits.RA7
#define LED1_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define LED1_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RB3 aliases
#define IO_RB3_TRIS                 TRISBbits.TRISB3
#define IO_RB3_LAT                  LATBbits.LATB3
#define IO_RB3_PORT                 PORTBbits.RB3
#define IO_RB3_WPU                  WPUBbits.WPUB3
#define IO_RB3_OD                   ODCONBbits.ODCB3
#define IO_RB3_ANS                  ANSELBbits.ANSELB3
#define IO_RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_RB3_GetValue()           PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_RB3_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_RB3_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define IO_RB3_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define IO_RB3_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define IO_RB3_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.ODCB5
#define IO_RB5_ANS                  ANSELBbits.ANSELB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set RB6 aliases
#define IO_RB6_TRIS                 TRISBbits.TRISB6
#define IO_RB6_LAT                  LATBbits.LATB6
#define IO_RB6_PORT                 PORTBbits.RB6
#define IO_RB6_WPU                  WPUBbits.WPUB6
#define IO_RB6_OD                   ODCONBbits.ODCB6
#define IO_RB6_ANS                  ANSELBbits.ANSELB6
#define IO_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_RB6_GetValue()           PORTBbits.RB6
#define IO_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_RB6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_RB6_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define IO_RB6_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define IO_RB6_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define IO_RB6_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_OD                   ODCONBbits.ODCB7
#define IO_RB7_ANS                  ANSELBbits.ANSELB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_RB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_RB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_RB7_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define IO_RB7_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set RC5 aliases
#define SW1_TRIS                 TRISCbits.TRISC5
#define SW1_LAT                  LATCbits.LATC5
#define SW1_PORT                 PORTCbits.RC5
#define SW1_WPU                  WPUCbits.WPUC5
#define SW1_OD                   ODCONCbits.ODCC5
#define SW1_ANS                  ANSELCbits.ANSELC5
#define SW1_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define SW1_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define SW1_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define SW1_GetValue()           PORTCbits.RC5
#define SW1_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define SW1_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define SW1_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define SW1_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define SW1_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define SW1_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define SW1_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define SW1_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 aliases
#define IO_RC6_TRIS                 TRISCbits.TRISC6
#define IO_RC6_LAT                  LATCbits.LATC6
#define IO_RC6_PORT                 PORTCbits.RC6
#define IO_RC6_WPU                  WPUCbits.WPUC6
#define IO_RC6_OD                   ODCONCbits.ODCC6
#define IO_RC6_ANS                  ANSELCbits.ANSELC6
#define IO_RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_RC6_GetValue()           PORTCbits.RC6
#define IO_RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_RC6_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define IO_RC6_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define IO_RC6_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define IO_RC6_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define IO_RC6_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define IO_RC6_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 aliases
#define IO_RC7_TRIS                 TRISCbits.TRISC7
#define IO_RC7_LAT                  LATCbits.LATC7
#define IO_RC7_PORT                 PORTCbits.RC7
#define IO_RC7_WPU                  WPUCbits.WPUC7
#define IO_RC7_OD                   ODCONCbits.ODCC7
#define IO_RC7_ANS                  ANSELCbits.ANSELC7
#define IO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RC7_GetValue()           PORTCbits.RC7
#define IO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_RC7_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define IO_RC7_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define IO_RC7_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define IO_RC7_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define IO_RC7_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define IO_RC7_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set virtual Pin RW1 aliases
#define RW1_SetHigh()            do { LATWbits.LATW1 = 1; } while(0)
#define RW1_SetLow()             do { LATWbits.LATW1 = 0; } while(0)
#define RW1_Toggle()             do { LATWbits.LATW1 = ~LATWbits.LATW1; } while(0)
#define RW1_GetValue()           PORTWbits.RW1

// get/set virtual Pin RW2 aliases
#define RW2_SetHigh()            do { LATWbits.LATW2 = 1; } while(0)
#define RW2_SetLow()             do { LATWbits.LATW2 = 0; } while(0)
#define RW2_Toggle()             do { LATWbits.LATW2 = ~LATWbits.LATW2; } while(0)
#define RW2_GetValue()           PORTWbits.RW2

// get/set virtual Pin RW3 aliases
#define RW3_SetHigh()            do { LATWbits.LATW3 = 1; } while(0)
#define RW3_SetLow()             do { LATWbits.LATW3 = 0; } while(0)
#define RW3_Toggle()             do { LATWbits.LATW3 = ~LATWbits.LATW3; } while(0)
#define RW3_GetValue()           PORTWbits.RW3

// get/set virtual Pin RW4 aliases
#define RW4_SetHigh()            do { LATWbits.LATW4 = 1; } while(0)
#define RW4_SetLow()             do { LATWbits.LATW4 = 0; } while(0)
#define RW4_Toggle()             do { LATWbits.LATW4 = ~LATWbits.LATW4; } while(0)
#define RW4_GetValue()           PORTWbits.RW4

// get/set virtual Pin RW5 aliases
#define RW5_SetHigh()            do { LATWbits.LATW5 = 1; } while(0)
#define RW5_SetLow()             do { LATWbits.LATW5 = 0; } while(0)
#define RW5_Toggle()             do { LATWbits.LATW5 = ~LATWbits.LATW5; } while(0)
#define RW5_GetValue()           PORTWbits.RW5

// get/set virtual Pin RW6 aliases
#define RW6_SetHigh()            do { LATWbits.LATW6 = 1; } while(0)
#define RW6_SetLow()             do { LATWbits.LATW6 = 0; } while(0)
#define RW6_Toggle()             do { LATWbits.LATW6 = ~LATWbits.LATW6; } while(0)
#define RW6_GetValue()           PORTWbits.RW6

// get/set virtual Pin RW7 aliases
#define RW7_SetHigh()            do { LATWbits.LATW7 = 1; } while(0)
#define RW7_SetLow()             do { LATWbits.LATW7 = 0; } while(0)
#define RW7_Toggle()             do { LATWbits.LATW7 = ~LATWbits.LATW7; } while(0)
#define RW7_GetValue()           PORTWbits.RW7

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/