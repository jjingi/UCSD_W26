#include <Arduino.h>

constexpr int BUTTON_PIN = 0;
// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  pinMode(BUILTIN_LED, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {

  if (digitalRead(BUTTON_PIN) == LOW) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(BUILTIN_LED, HIGH);
      delay(1000);
      digitalWrite(BUILTIN_LED, LOW);
      delay(1000);
    }
  }
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}