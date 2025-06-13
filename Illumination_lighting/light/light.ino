#include <FastLED.h>

#define NUM_LEDS  16
#define LED_PIN   2
#define color CRGB::MistyRose//peru
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50);
}


void light(int n)
{
  leds[n] = color;
  FastLED.show();
}


void lightoff(int n)
{
  leds[n] = CRGB::Black;
  FastLED.show();
}

void grp(int a,int b,int c,int d)
{
  light(a);
  light(b);
  light(c);
  light(d);
}
void loop()
{
  grp(4,2,5,1);
  grp(4,NULL,NULL,NULL);  
}
