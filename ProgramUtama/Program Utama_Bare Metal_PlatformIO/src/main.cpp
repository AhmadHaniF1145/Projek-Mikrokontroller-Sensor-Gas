//#include <Arduino.h>

#include <PCMModded.h>
// Versi modifikasi dari library PCM agar dapat memutar audio
// pada pin 13 Timer 0, bukan pada bawaannya yaitu pin 10 Timer 2
// Modded by : Ilham Kurniawan

#include "audio1.h"
#include "audio2.h"


#define redLed PL1
#define greenLed PL7
#define smokeInAnalog PF0
int sensorThres = 500;

void setup() {
  DDRL = (1 << redLed) | (1 << greenLed);
  DDRF &= ~(1 << smokeInAnalog);

  Serial.begin(9600);
}

void loop() {
  //int bacaAsap = analogRead(smokeInAnalog);

  Serial.print("Pin A0: ");
  //Serial.println(bacaAsap);
  
  // if (bacaAsap > sensorThres)
  // {
  //   digitalWrite(redLed, HIGH);
  //   digitalWrite(greenLed, LOW);
  //   startPlayback(audio1, sizeof(audio1));

  // }
  // else
  // {
  //   digitalWrite(redLed, LOW);
  //   digitalWrite(greenLed, HIGH);
  // }
  // delay(100);
}