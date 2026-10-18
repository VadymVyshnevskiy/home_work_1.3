#include <Arduino.h>

#define PIN_OUT_GREEN 16
#define PIN_OUT_RED 15
#define PIN_OUT_BLUE 17

void setup() {
  pinMode(PIN_OUT_GREEN, OUTPUT);
  pinMode(PIN_OUT_RED, OUTPUT);
  pinMode(PIN_OUT_BLUE, OUTPUT);
}

// ---------Ordinary Twinkling--------------- 

// void loop() {
//   digitalWrite(PIN_OUT_RED, HIGH);
//   delay(100);
//   digitalWrite(PIN_OUT_RED, LOW);
//   delay(100);
//   digitalWrite(PIN_OUT_BLUE, HIGH);
//   delay(100);
//   digitalWrite(PIN_OUT_BLUE, LOW);
//   delay(100);
// }

// ---------Ordinary Twinkling---------------


// ------------------------------------------------------------------------------------------

// ---------------Strobe---------------

// void strobe(uint8_t pin, int count, int speedMs) {
//   for (int i = 0; i < count; i++) {
//     digitalWrite(pin, HIGH);
//     delay(speedMs);
//     digitalWrite(pin, LOW);
//     delay(speedMs);
//   }
// }

// void loop() {
//   strobe(PIN_OUT_RED, 3, 50); 
//   delay(100);                  
//   strobe(PIN_OUT_BLUE, 3, 50);
//   delay(100);                  
// }

// ---------------Strobe---------------

// ------------------------------------------------------------------------------------------

// ---------------Fade---------------

void fade(uint8_t pin) {
  for (int i = 0; i <= 255; i += 5) {
    analogWrite(pin, i);
    delay(15);
  }

  for (int i = 255; i >= 0; i -= 5) {
    analogWrite(pin, i);
    delay(15);
  }
}

void loop() {
  fade(PIN_OUT_GREEN);
  fade(PIN_OUT_RED);
  fade(PIN_OUT_BLUE);
}

// ---------------Fade---------------