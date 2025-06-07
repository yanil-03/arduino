#include <FastLED.h>

#define NUM_LEDS  12
#define LED_PIN   2
#define black CRGB::Black
#define white CRGB::White
#define a CRGB::AntiqueWhite	
#define b CRGB::Beige	
#define c CRGB::Cornsilk	
#define d CRGB::FloralWhite	
#define e CRGB::Wheat	
#define f CRGB(254, 244, 156);





CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(255);
}

void loop() {
  
  // leds[0] = CRGB::Red;
  // FastLED.show();
  // delay(200);
  light();
  leds[0] = black;
  FastLED.show();
  delay(200);
  
}

void light(){
  for(int i=0; i < NUM_LEDS/2; i++)
  {
    leds[i] = a;
    leds[(NUM_LEDS/2)+i] = f;
    FastLED.show();
    delay(200);
    
    // leds[(NUM_LEDS/2)+i] = leds[i] = CRGB::Black;
    // FastLED.show();
    // delay(200);
  }
}