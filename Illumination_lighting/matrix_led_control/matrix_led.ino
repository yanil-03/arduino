#include <FastLED.h>

// #define NUM_LEDS  33
#define sections 6
#define led_count 33
#define NUM_LEDS  (sections * led_count)

#define LED_PIN   4
#define black CRGB::Black
#define white CRGB::White
// #define color CRGB(241, 248, 0);

 

// #define sections 11;
// #define led_count = 3;



CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  // limit my draw to 1A at 5v of power draw
  // FastLED.setMaxPowerInVoltsAndMilliamps(5,4500); 
  FastLED.setMaxPowerInMilliWatts(100000);

  FastLED.setBrightness(255);
  light();
  delay(300);
  off();
  
  
}

void loop() {
  
  // led[0][0] = CRGB::Red;
  // FastLED.show();
  // delay(200);
  
  
}

void light(){
  for(int i = 0; i < led_count; i++)
  {
    for(int j = 0; j < sections; j++){
      leds[j*led_count + i] = white;
      
    }
    FastLED.show();
    delay(200);
    
  }
}

void off(){
  for(int i = 0; i < led_count; i++)
  {
    for(int j = 0; j < sections; j++){
      leds[j*led_count + i] = black;
      
    }
    FastLED.show();
    // delay(200);
    
  }
}