#include <Arduino.h>

#include <PCMModded.h>
// Versi modifikasi dari library PCM agar dapat memutar audio
// pada pin 13 Timer 0, bukan pada bawaannya yaitu pin 10 Timer 2
// Modded by : Ilham Kurniawan

#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

//#include <PinChangeInterrupt.h>

#include "audio1.h"
#include "audio2.h"

int redLed = 36;
int greenLed = 42;
int tombolKanan = 5;
int tombolKiri = 4;
int sensorThres = 600;
int bacaAsap = 0;

boolean loopSound = false;

const int ButtonInt = 5;

#define OLED_RESET -1
Adafruit_SSD1306 display(OLED_RESET);

//===========================================================================

void ISR1() {
  stopPlayback();
  delay(3000);
}

boolean playing(void)
{
  return TIMSK1 & _BV(OCIE1A);
}

void putarSuara() {
  loopSound = true;
  while (loopSound) {
    int buttonState = digitalRead(tombolKanan);
    if (buttonState) {
      loopSound = false;
    }

    startPlayback(audio1, sizeof(audio1));
    while (playing());
  }
}

// ===============================================================================

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  pinMode(ButtonInt, INPUT);
  //attachInterrupt(digitalPinToInterrupt(ButtonInt), ISR1, CHANGE);

  pinMode(A12, INPUT);

  pinMode(tombolKanan, INPUT_PULLUP);
  pinMode(tombolKiri, INPUT_PULLUP);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.display();

  Serial.begin(9600);
}

void loop() {
  bacaAsap = analogRead(A12);

  Serial.print("Pin A0: ");
  Serial.println(bacaAsap);

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(bacaAsap);
  display.display();
  
  if (bacaAsap > sensorThres)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);

    putarSuara();
    
    
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
  }

  delay(300);
}

