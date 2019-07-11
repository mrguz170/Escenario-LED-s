//Music Reactive Led Strip
#include <FastLED.h>
int soundSensor = 6;  //define Sound Sensor Pin
int LED = 8;          //define LED Strip Pin
#define NUM_LEDS    20

CRGB leds[NUM_LEDS];

void setup() 
{
  pinMode (soundSensor, INPUT); //define Sound Sensor as input
  pinMode (LED, OUTPUT);        //define LED Strip as output
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  
}

void loop()
{
  int statusSensor = digitalRead (soundSensor);   //define variable of the Sound Sensor status
                                                  //and read value of the Sensor's
  
  if (statusSensor == 1)        //When the Sensor detects a signal
  {
      for (int i = 0; i <= NUM_LEDS-1; i++) {
      leds[i] = CRGB ( 0, 0, 255);
      FastLED.show();
      delay(40);
    }
  }
  
  else                          //If no signal is detected
  {
      for (int i = NUM_LEDS-1; i >= 0; i--) {
      leds[i] = CRGB ( 255, 0, 0);
      FastLED.show();
      delay(40);
      }
  }
  
}
