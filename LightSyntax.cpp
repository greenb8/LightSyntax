/*
* LightSyntax
* (C) 2019 NickProgramm
* https://github.com/NickProgramm/LightSyntax
*/
#include "LightSyntax.h"
#include "Arduino.h"
void LightSyntax::input(int Pin) {
	pinMode(Pin, INPUT);
}
void LightSyntax::output(int Pin) {
	pinMode(Pin, OUTPUT);
}
void LightSyntax::Dhigh(int Pin) {
	digitalWrite(Pin, HIGH);
}
void LightSyntax::Ahigh(int Pin) {
	analogWrite(Pin, HIGH);
}
void LightSyntax::Alow(int Pin) {
	analogWrite(Pin, LOW);
}
void LightSyntax::Dlow(int Pin) {
	digitalWrite(Pin, LOW);
}
