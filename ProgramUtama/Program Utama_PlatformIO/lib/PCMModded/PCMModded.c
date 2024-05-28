/*
 * speaker_pcm
 *
 * Plays 8-bit PCM audio on pin 6 using pulse-width modulation (PWM).
 * For Arduino with Atmega168 at 16 MHz.
 *
 * Uses two timers. The first changes the sample value 8000 times a second.
 * The second holds pin 6 high for 0-255 ticks out of a 256-tick cycle,
 * depending on sample value. The second timer repeats 62500 times per second
 * (16000000 / 256), much faster than the playback rate (8000 Hz), so
 * it almost sounds halfway decent, just really quiet on a PC speaker.
 *
 * Takes over Timer 1 (16-bit) for the 8000 Hz timer. This breaks PWM
 * (analogWrite()) for Arduino pins 9 and 10. Takes Timer 0 (8-bit)
 * for the pulse width modulation, breaking PWM for pins 5 & 6.
 */

#include <stdint.h>
#include <avr/interrupt.h>
#include <avr/io.h>
#include <avr/pgmspace.h>

#define SAMPLE_RATE 8000

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "PCMModded.h"

/*
 * The audio data needs to be unsigned, 8-bit, 8000 Hz, and small enough
 * to fit in flash. 10000-13000 samples is about the limit.
 *
 * sounddata.h should look like this:
 *     const int sounddata_length=10000;
 *     const unsigned char sounddata_data[] PROGMEM = { ..... };
 *
 * You can use wav2c from GBA CSS:
 *     http://thieumsweb.free.fr/english/gbacss.html
 * Then add "PROGMEM" in the right place. I hacked it up to dump the samples
 * as unsigned rather than signed, but it shouldn't matter.
 *
 * http://musicthing.blogspot.com/2005/05/tiny-music-makers-pt-4-mac-startup.html
 * mplayer -ao pcm macstartup.mp3
 * sox audiodump.wav -v 1.32 -c 1 -r 8000 -u -1 macstartup-8000.wav
 * sox macstartup-8000.wav macstartup-cut.wav trim 0 10000s
 * wav2c macstartup-cut.wav sounddata.h sounddata
 *
 * (starfox) nb. under sox 12.18 (distributed in CentOS 5), i needed to run
 * the following command to convert my wav file to the appropriate format:
 * sox audiodump.wav -c 1 -r 8000 -u -b macstartup-8000.wav
 */

int speakerPin = 13; // Update to pin 6
unsigned char const *sounddata_data = 0;
int sounddata_length = 0;
volatile uint16_t sample;
byte lastSample;

// This is called at 8000 Hz to load the next sample.
ISR(TIMER1_COMPA_vect) {
  if (sample >= sounddata_length) {
    if (sample == sounddata_length + lastSample) {
      stopPlayback();
    } else {
      // Ramp down to zero to reduce the click at the end of playback.
      OCR0A = sounddata_length + lastSample - sample;
    }
  } else {
    OCR0A = pgm_read_byte(&sounddata_data[sample]);
  }
  
  ++sample;
}

void startPlayback(unsigned char const *data, int length) {
  sounddata_data = data;
  sounddata_length = length;

  pinMode(speakerPin, OUTPUT);
  
  // Set up Timer 0 to do pulse width modulation on the speaker pin.
  
  // Set fast PWM mode (p.105)
  TCCR0A |= _BV(WGM01) | _BV(WGM00);
  TCCR0B &= ~_BV(WGM02);
  
  // Do non-inverting PWM on pin OC0A (p.103)
  // On the Arduino this is pin 6.
  TCCR0A = (TCCR0A | _BV(COM0A1)) & ~_BV(COM0A0);
  TCCR0A &= ~(_BV(COM0B1) | _BV(COM0B0));
  
  // No prescaler (p.106)
  TCCR0B = (TCCR0B & ~(_BV(CS02) | _BV(CS01))) | _BV(CS00);
  
  // Set initial pulse width to the first sample.
  OCR0A = pgm_read_byte(&sounddata_data[0]);
  
  // Set up Timer 1 to send a sample every interrupt.
  cli();
  
  // Set CTC mode (Clear Timer on Compare Match) (p.133)
  // Have to set OCR1A *after*, otherwise it gets reset to 0!
  TCCR1B = (TCCR1B & ~_BV(WGM13)) | _BV(WGM12);
  TCCR1A = TCCR1A & ~(_BV(WGM11) | _BV(WGM10));
  
  // No prescaler (p.134)
  TCCR1B = (TCCR1B & ~(_BV(CS12) | _BV(CS11))) | _BV(CS10);
  
  // Set the compare register (OCR1A).
  // OCR1A is a 16-bit register, so we have to do this with
  // interrupts disabled to be safe.
  OCR1A = F_CPU / SAMPLE_RATE;    // 16e6 / 8000 = 2000
  
  // Enable interrupt when TCNT1 == OCR1A (p.136)
  TIMSK1 |= _BV(OCIE1A);
  
  lastSample = pgm_read_byte(&sounddata_data[sounddata_length - 1]);
  sample = 0;
  sei();
}

void stopPlayback() {
  // Disable playback per-sample interrupt.
  TIMSK1 &= ~_BV(OCIE1A);
  
  // Disable the per-sample timer completely.
  TCCR1B &= ~_BV(CS10);
  
  // Disable the PWM timer.
  //TCCR0B &= ~_BV(CS00);
  
  digitalWrite(speakerPin, LOW);
}
