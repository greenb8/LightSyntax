#include <LightSyntax.h>

int in1 = 2;
int in2 = 3;
int in3 = 4;
int in4 = 5;
const int dl = 1;

void setup() {
  output(in1);
  output(in2);
  output(in3);
  output(in4);
}

void loop() {
  Dlow(in1);
  Dlow(in2);
  Dhigh(in3);
  Dhigh(in4);
  delay(dl);

  Dlow(in1);
  Dlow(in2);
  Dhigh(in3);
  Dlow(in4);
  delay(dl);

  Dlow(in1);
  Dhigh(in2);
  Dhigh(in3);
  Dlow(in4);
  delay(dl);

  Dhigh(in1);
  Dhigh(in2);
  Dlow(in3);
  Dlow(in4);
  delay(dl);

  Dhigh(in1);
  Dlow(in2);
  Dlow(in3);
  Dlow(in4);
  delay(dl);

  Dhigh(in1);
  Dlow(in2);
  Dlow(in3);
  Dhigh(in4);
  delay(dl);

  Dlow(in1);
  Dlow(in2);
  Dlow(in3);
  Dhigh(in4);
  delay(dl);
}