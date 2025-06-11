#include <FastLED.h>

// #define NUM_LEDS  33
#define sections 6
#define led_count 6
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
  
  FastLED.setBrightness(50);
  
}

void loop() {
  
  // led[0][0] = CRGB::Red;
  // FastLED.show();
  // delay(200);
  
  light();
  
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

void off(int x){
  for(int i=0; i <= x; i++)
  {
    leds[i] = black;
    leds[(NUM_LEDS/sections)+i] = black;
    FastLED.show();
    // delay(200);
    
    // leds[(NUM_LEDS/2)+i] = leds[i] = CRGB::Black;
    // FastLED.show();
    // delay(200);
  }
}
