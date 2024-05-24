#include <Arduino.h>

#include <PCMModded.h>
// Versi modifikasi dari library PCM agar dapat memutar audio
// pada pin 13 Timer 0, bukan pada bawaannya yaitu pin 10 Timer 2
// Modded by : Ilham Kurniawan

#include "audio1.h"
#include "audio2.h"


void setup() {
  startPlayback(audio2, sizeof(audio2));
  delay(5000);
  startPlayback(audio1, sizeof(audio1));
}

void loop() {
}