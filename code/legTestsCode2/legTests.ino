#include "kinematics.h"
#include <Servo.h>

//Servo pins
const int ServoPin1=8;
const int ServoPin2=9;
const int ServoPin3=10;

//Servo objects
Servo servo1;
Servo servo2;
Servo servo3;

//Length of legs. Equal to form isosceles triangle
float l1=5.2;
float l2=5.2;

//3 coordinates
float x=0;
float y=-10;

float x2=0;
float y2=-8;

float x3=-0;
float y3=-5;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  servo1.attach(ServoPin1);
  servo2.attach(ServoPin2);
  servo3.attach(ServoPin3);

}


/*
updateAngle(): Updates initial angle. 
               Returns true if initial angle surpasses target angle. 
               Changes angle at given change rate
*/
bool updateAngle(float &initialAngle, float targetAngle, float changeRate){
  if(initialAngle>targetAngle){
    initialAngle-=changeRate;
    if(initialAngle<=targetAngle){
      return true;
    }
  }
  else if(initialAngle<targetAngle){
    initialAngle+=changeRate;
    if(initialAngle>=targetAngle){
      return true;
    }
  }

  return false;
}


//step(): Returns true when all angles have been updated to their respective angles
bool step(float &initiala, float &initialB, float &initialC, float a, float B, float C){
  bool atrue=updateAngle(initiala, a, 0.5);
  bool Btrue=updateAngle(initialB, B, 0.5);
  bool Ctrue=updateAngle(initialC, C, 0.5);
  
  servo2.write(initialB);
  delay(5);
  servo3.write(initialC);
  delay(5);
  servo1.write(initiala);
  delay(5);

  if(atrue && Ctrue && Btrue){
    return true;
  }
  else{
    return false;
  }
}

//Initial angles of servos
float initiala=90;
float initialB=0;
float initialC=90;

void loop() {
  // put your main code here, to run repeatedly:
    //First coordinates
    float a=finda(x, y, l1, l2);
    float B=findB(x, y, l1, l2);
    float C=findC(x, y, l1, l2, a);
    
    //Initial positions of servos
    servo1.write(initiala);
    delay(0);
    servo2.write(initialB);
    delay(0);
    servo3.write(initialC);
    delay(0);

    delay(10);
    
    //Update initial angles to change angles of servos
    while(true){
      bool legCondition=step(initiala, initialB, initialC, a, B, C);
      if(legCondition){
        break;
      }
    }
    
    Serial.print("B: ");
    Serial.println(B);
    Serial.print("a: ");
    Serial.println(a);

    delay(1000);
    

    //Second coordinate
    float a2=finda(x2, y2, l1, l2);
    float B2=findB(x2, y2, l1, l2);
    float C2=findC(x2, y2, l1, l2, a2);

    while(true){
      bool legCondition=step(initiala, initialB, initialC, a2, B2, C2);
      if(legCondition){
        break;
      }
    } 
    
    Serial.print("B: ");
    Serial.println(B2);
    Serial.print("a: ");
    Serial.println(a2);
    
    delay(1000);
    

    //Third coordinate
    float a3=finda(x3, y3, l1, l2);
    float B3=findB(x3, y3, l1, l2);
    float C3=findC(x3, y3, l1, l2, a3);

    Serial.print("B: ");
    Serial.println(B3);
    Serial.print("a: ");
    Serial.println(a3);

    while(true){
      bool legCondition=step(initiala, initialB, initialC, a3, B3, C3);
      if(legCondition){
        break;
      }
    } 

    delay(1000);

}
