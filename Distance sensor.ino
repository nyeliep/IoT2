// C++ code
//
#include <Servo.h>

Servo servo_11;

Servo servo_10;

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  servo_11.attach(11, 500, 2500);
  servo_10.attach(10, 500, 2500);
}

void loop()
{
  digitalWrite(12, HIGH);
  digitalWrite(9, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_11.write(0);
  servo_10.write(0);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_11.write(90);
  servo_10.write(90);
  delay(1000); // Wait for 1000 millisecond(s)
}