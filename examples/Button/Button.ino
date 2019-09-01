/*
(C)2019 NickProgramm
Example for "LightSyntax"
*/
#include <LightSyntax.h>
int switchPin = 8;
int ledPin = 13;
void setup() {
  input(switchPin);
  output(ledPin);
}

void loop() {
  if (read(switchPin) == HIGH) {
    Dhigh(ledPin);
  } else {
    Dlow(ledPin);
  }
}