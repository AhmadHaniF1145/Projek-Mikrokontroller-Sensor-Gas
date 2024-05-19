#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>
#include "awal.h"
#include "akhir.h"
uint16_t count = 0;
int8_t track = 0;
bool play = false;

// interrupt program
ISR(TIMER0_COMPA_vect)
  if (play){
    if (track==0){
      OCR3A =~ pgm_read_byte(&awal[count]);
      count++;
      if (count >= sizeof(awal))
      play = false;
    }
    else if (track == 1){
      OCR3A =~ pgm_read_byte(&akhir[count]);
      count++;
      if (count >= sizeof(akhir))
      play = false;
    }
}

// function
void initPWM(void);
void Timerinit(void);


int main (void){
  DDRA = 0xFF;
  PORTF = _BV(PD0) | _BV(PD1); //set interrupt di INT 0 dan INT 1

  initPWM();
  Timerinit();
  sei();

  //pembacaan input pushbutton

  while(1)
  {
    if(!(PIND & _BV(PD0))){ //ini milih PB 1
      play = true;
      track = 0;
      count = 0;
    }
    else if (PIND & _BV(PD1)){ //ini milih PB2s
      play = true;
      track = 0;
      count = 0;
    }
  }

  //inisialisasi PWM
  void initPWM(){
    DDRE = _BV(PE3);
    TCCR3B = _BV(CS30) | _BV(WGM32);
    TCCR3B = _BV(WGM30) | _BV(COM3A1);
    OCR3A = 200;
  }

  //inisialisasi timer
  void Timerinit(){
    TCCR0B = (1 << CS01); //prescaller8
    TIMSK0 |= (1 << 0C1E0A); //enable compare match intterupt
    TCCR0A |= _BV(WGM01); //mode timer CTC
    OCR0A = 250;
  }
}