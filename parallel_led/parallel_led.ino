#include <FastLED.h>

#define NUM_LEDS  35
#define LED_PIN   2
#define black CRGB::Black
#define white CRGB::White
// #define color CRGB(241, 248, 0);




int led_count = 33;
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(255);
}

void loop() {
  
  // leds[0] = CRGB::Red;
  // FastLED.show();
  // delay(200);
  light(led_count);
  
}

void light(int x){
  for(int i=0; i <= x; i++)
  {
    leds[i] = white;
    // leds[(NUM_LEDS/2)+i] = f;
    FastLED.show();
    delay(200);
    if(i == x)
    {
      off(led_count);
    }
  }
}

void off(int x){
  for(int i=0; i <= x; i++)
  {
    leds[i] = black;
    // leds[(NUM_LEDS/2)+i] = f;
    FastLED.show();
    // delay(200);
    
    // leds[(NUM_LEDS/2)+i] = leds[i] = CRGB::Black;
    // FastLED.show();
    // delay(200);
  }
}