#include "p18f2550.h"
#include <adc.h> 

//#pragma config OSC = INTIO67    //Internal oscillator, port function on RA6, EC used by USB
#pragma config WDT=OFF, LVP=OFF, DEBUG=OFF, MCLRE = ON

#define INDICATOR PORTCbits.RC6
#define DATA PORTCbits.RC7
#define CLOCK PORTCbits.RB1



void Delay(){
unsigned char i,j;
for(i=0; i< 200; i++){
 for(j=0; j< 200; j++){
     _asm
     nop
     nop
     nop
         _endasm
}
}	

}

void main(void){
	unsigned int Converter;
    unsigned char rowloc=0,i,j,longcount;
	OSCTUNE = 0b00001111; 
	OSCCON  = 0b01110010;

  //ADCON1 = 0b00001111;
  
	TRISC = 0;
	TRISB = 0;
    TRISA = 0b11111111; //adc INPUT
	LATA =  0b00000000;


	PORTC = 0;
	PORTB = 0;
	PORTA = 0b11111111;



void SetPixel(unsigned char address, unsigned char value){
	
	
	
}
	

	while(1){
		INDICATOR = 1;
		Delay();
		INDICATOR = 0;
		Delay();
		
	
	}  

}