/*
* LightSyntax
* (C) 2019 NickProgramm
* https://github.com/NickProgramm/LightSyntax
*/
#include "LightSyntax.h" 

using namespace LightSyntax;

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
void LightSyntax::input(int Pin) {
	analogWrite(Pin, LOW);
}