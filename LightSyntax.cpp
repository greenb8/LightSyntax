/*
* LightSyntax
* (C) 2019 NickProgramm
* https://nickprogramm.github.io/LightSyntax/
*/
#include "LightSyntax.h"
#include "Arduino.h"
void input(int Pin) {
	pinMode(Pin, INPUT);
}
void output(int Pin) {
	pinMode(Pin, OUTPUT);
}
void Dhigh(int Pin) {
	digitalWrite(Pin, HIGH);
}
void Ahigh(int Pin) {
	analogWrite(Pin, HIGH);
}
void Alow(int Pin) {
	analogWrite(Pin, LOW);
}
void Dlow(int Pin) {
	digitalWrite(Pin, LOW);
}
