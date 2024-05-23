#include <Arduino.h>
#include <PCMModded.h>
#include "audio1.h"
#include "audio2.h"

void setup() {
  startPlayback(audio2, sizeof(audio2));
  delay(5000);
  startPlayback(audio1, sizeof(audio1));
}

void loop() {
}