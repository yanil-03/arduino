#include <FastLED.h>

#define LED_PIN     4
#define NUM_LEDS    198
#define BRIGHTNESS  255
#define LED_TYPE    WS2812B
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);

  // Power limit: 5V, 8000mA (modify as per your power supply)
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 8000);
}

void loop() {
  fill_solid(leds, NUM_LEDS, CRGB::White);
  FastLED.show();
  delay(1000);
}
