#include "lib.h"
#include "motor.h"


void setup(){
  pinMode(AIN1, OUTPUT); // Vector1 AD
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT); // Vector2 BC
  pinMode(BIN2, OUTPUT);
  pinMode(CIN1, OUTPUT);
  pinMode(CIN2, OUTPUT);
  pinMode(DIN1, OUTPUT);
  pinMode(DIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(PWMC, OUTPUT);
  pinMode(PWMD, OUTPUT);
  pinMode(STB, OUTPUT);

  pinMode(s1, OUTPUT); 
  pinMode(s2, OUTPUT); 
  pinMode(s3, OUTPUT); 
  pinMode(s4, OUTPUT); 

  Serial.begin(9600);

  digitalWrite(STB, 1);
}

void loop() {
  motor_drive_on_vector(150, 0);
}
