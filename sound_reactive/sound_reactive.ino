#include <FastLED.h>
#define LED_PIN     7
#define NUM_LEDS    20
int soundSensor = 6;
int soundPin = A0;


CRGB leds[NUM_LEDS];
void setup() {
  Serial.begin(9600);
  pinMode (soundSensor, INPUT); //define Sound Sensor as input
  //  pinMode (LED, OUTPUT);        //define LED Strip as output
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {
  int statusSensor = digitalRead (soundSensor);
  
      for (int i = 0; i <= NUM_LEDS-1; i++) {
      leds[i] = CRGB ( 0, 0, 255);
      FastLED.show();
      delay(40);
    }
 
      for (int i = NUM_LEDS-1; i >= 0; i--) {
      leds[i] = CRGB ( 255, 0, 0);
      FastLED.show();
      delay(40);
      }
  
}
