#include <FastLED.h>
#define LED_PIN     7
#define NUM_LEDS    20
int sensorPin = 6;
boolean val =0;

CRGB leds[NUM_LEDS];
void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  //  pinMode (LED, OUTPUT);        //define LED Strip as output
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {
  val =digitalRead(sensorPin);
  Serial.println (val);

  if (val==HIGH) {
    leds[2] = CRGB ( 0, 0, 0);
    leds[1] = CRGB ( 0, 80, 255);
    FastLED.show();
    delay(100);
  }
  else {
    leds[1] = CRGB ( 0, 0, 0);
    leds[2] = CRGB ( 255, 0, 0);
    FastLED.show();
    delay(100);
  }
      /*
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
      */
  
}
