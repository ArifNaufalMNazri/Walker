#include "kinematics.h"
#include <Servo.h>

//Servo pins
const int ServoPin1=8;
const int ServoPin2=7;

//Servo objects
Servo servo1;
Servo servo2;

float l1=7;
float l2=7;

float x=6;
float y=-5;

float angle1=90;
float angle2=0;

void updateAngle1(float &angle, float &x, float &y, float &l1, float &l2 ){
  if(angle<180&& angle>=0){
     angle=90 + finda(x, y, l1, l2);
  }
}

void updateAngle2(float &angle, float &x, float &y, float &l1, float &l2 ){
  if(angle<180&& angle>=0){
     angle= findB(x, y, l1, l2);
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  float a=finda(x, y, l1, l2);
  float B=findB(x, y, l1, l2);
  float c=lengthc(x, y);
  float angleC1=angleC(l1, l2, c);

  Serial.println(" ");
  Serial.print("Length c: ");
  Serial.println(c);

  Serial.print("Angle alpha: ");
  Serial.println(alpha(x, y));

  Serial.print("Angle C: ");
  Serial.println(angleC1);

  Serial.print("Angle Theta A: ");
  Serial.println(thetaA(l2, c, angleC1));

  Serial.print("Angle a: ");
  Serial.println(a);

  Serial.print("Angle B: ");
  Serial.println(B);

  updateAngle1(angle1, x, y, l1, l2);
  Serial.print("Angle 1: ");
  Serial.println(angle1);

  updateAngle2(angle2, x, y, l1, l2);
  Serial.print("Angle 2: ");
  Serial.println(angle2);

  servo1.attach(ServoPin1);
  servo2.attach(ServoPin2);

  servo1.write(angle1);
  servo2.write(angle2);

}

void loop() {
  // put your main code here, to run repeatedly:

}
