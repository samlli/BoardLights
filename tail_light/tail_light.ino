#include <Adafruit_NeoPixel.h>
#include "WS2812_Definitions.h"

#define PIN 4
#define LED_COUNT 4

Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

void setup(){
  leds.begin();
  clearLEDs();
  leds.show();
}

void loop(){
  fillColor(RED);
  delay(200);
  clearLEDs();
  delay(200);
}

void clearLEDs(){
  for(int i=0;i<LED_COUNT;i++){
    leds.setPixelColor(i,0);
  }
  leds.show();
}

void fillColor(unsigned long color){
  for(int i=0;i<=LED_COUNT-1;i++){
    leds.setPixelColor(i,color);
  }
  leds.show();
}

