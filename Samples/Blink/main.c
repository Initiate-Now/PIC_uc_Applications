#include <xc.h>

// Configuration bits
#pragma config FOSC = HS      // High-speed oscillator
#pragma config WDTE = OFF     // Watchdog Timer (disabled)
#pragma config PWRTE = OFF    // Power-up Timer (disabled)
#pragma config BOREN = ON     // Brown-out Reset (enabled)
#pragma config LVP = OFF      // Low-Voltage Programming (disabled)
#pragma config CPD = OFF      // Data EEPROM Memory Code Protection (disabled)
#pragma config WRT = OFF      // Flash Program Memory Write Enable (disabled)
#pragma config CP = OFF       // Flash Program Memory Code Protection (disabled)

#define _XTAL_FREQ 20000000   // Define clock frequency (20 MHz)

void main(void) {
    TRISC = 0x00;             // Set PORTC as output
    while(1) {
        LATCbits.LATC0 = 1;   // Turn LED on
        __delay_ms(500);      // Delay 500 ms
        LATCbits.LATC0 = 0;   // Turn LED off
        __delay_ms(500);      // Delay 500 ms
    }
}
