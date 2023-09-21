//TRICOLOR PULSE
//MADE USING A BREADBOARD, 3 LEDS, 3 220Ω RESISTORS, AND 6 M-M JUMPERS.
//PINS NEED TO BE PWM (~)

#define LED_RED 11
#define LED_BLUE 10
#define LED_YELLOW 9

void pulse(int color) {
  float in, out;
  for (in = 0; in < 6.283; in += 0.001) { //6.283 = 2 RADIANS
    out = (sin(in) * 127.5) + 127.5;  //-1 TO 1 * 127.5 + 127.5 = 0 - 255 BRIGHTNESS RANGE
    analogWrite(color, out);
  }
}

void loop() {
  pulse(LED_RED);
  pulse(LED_BLUE);
  pulse(LED_YELLOW);
}
