#include <Adafruit_NeoPixel.h>
#include "WS2812_Definitions.h"

#define PIN 4
#define LED_COUNT 34

Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

void setup(){
  leds.begin();
  clearLEDs();
  leds.show();
}

void clearLEDs(){
  for(int i=0;i<LED_COUNT;i++){
    leds.setPixelColor(i,0);
  }
  leds.show();
}

void fillColor(unsigned long color, unsigned short first, unsigned short last, unsigned short interval=1){
  for(int i=first;i<last;i+=interval){
    leds.setPixelColor(i,color);
  }
  leds.show();
}

void loop(){
  clearLEDs();
  for(int i=0;i<4;i++){
    leds.setPixelColor(i,RED);
  }
  for(int i=4;i<34;i+=2){
    leds.setPixelColor(i,ORANGE);
  }
  leds.show();
}

