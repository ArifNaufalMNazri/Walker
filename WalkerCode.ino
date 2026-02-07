#include "kinematics.h"
#include <Servo.h>

//Servo pins
const int ServoPin1=8;
const int ServoPin2=9;
const int ServoPin3=10;
const int ServoPin4=5;
const int ServoPin5=6;
const int ServoPin6=7;

//Servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

//Length of legs. Equal to form isosceles triangle
float l1=5.2;
float l2=5.2;

float initialx=0;
float initialy=-9;

float x=2;
float y=-6;

float x2=3;
float y2=-9;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  servo1.attach(ServoPin1);
  servo2.attach(ServoPin2);
  servo3.attach(ServoPin3);
  servo4.attach(ServoPin4);
  servo5.attach(ServoPin5);
  servo6.attach(ServoPin6);

  float a=finda(initialx, initialy, l1, l2);
  float B=findB(initialx, initialy, l1, l2);
  float C=findC(initialx, initialy, l1, l2, a);

  servo1.write(a);
  servo2.write(B);
  servo3.write(C);
  servo4.write(180-a);
  servo5.write(180-B);
  servo6.write(180-C);

  delay(1000);

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

  if(initialAngle==targetAngle){
    return true;
  }

  return false;
}


//step(): Returns true when all angles have been updated to their respective angles
bool step(float &initiala, float &initialB, float &initialC, float a, float B, float C, int mode){
  bool atrue=updateAngle(initiala, a, 0.5);
  bool Btrue=updateAngle(initialB, B, 0.5);
  bool Ctrue=updateAngle(initialC, C, 0.5);

  float delaytime=3;
  
  if(mode==1){
  servo2.write(initialB);
  delay(delaytime);
  servo3.write(initialC);
  delay(delaytime);
  servo1.write(initiala);
  delay(delaytime);
}
else if(mode==2){
  servo5.write(180-initialB);
  delay(delaytime);
  servo6.write(180-initialC);
  delay(delaytime);
  servo4.write(180-initiala);
  delay(delaytime);
}
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

float initiala2=90;
float initialB2=0;
float initialC2=90;

float delaytime=30;

void loop() {
  // put your main code here, to run repeatedly

    //First coordinate
    float a=finda(x, y, l1, l2);
    float B=findB(x, y, l1, l2);
    float C=findC(x, y, l1, l2, a);

    //Second coordinate
    float a2=finda(x2, y2, l1, l2);
    float B2=findB(x2, y2, l1, l2);
    float C2=findC(x2, y2, l1, l2, a2);
    
    //Third coordinate
    float a3=finda(initialx, initialy, l1, l2);
    float B3=findB(initialx, initialy, l1, l2);
    float C3=findC(initialx, initialy, l1, l2, a3);

    while(true){
      bool legCondition=step(initiala, initialB, initialC, a, B, 140, 1);
      if(legCondition){
        break;
      }
    } 
    
    delay(delaytime);
  
    while(true){
      bool legCondition=step(initiala, initialB, initialC, a2, B2, C2, 1);
      if(legCondition){
        break;
      }
    } 

    delay(delaytime);

    while(true){
      bool legCondition=step(initiala, initialB, initialC, a3, B3, C3, 1);
      bool legCondition2=step(initiala2, initialB2, initialC2, a, B, 140, 2);
      if(legCondition && legCondition2){
        break;
      }
    } 
    
    delay(delaytime);

    while(true){
      bool legCondition=step(initiala2, initialB2, initialC2, a2, B2 ,C2, 2);
      if(legCondition){
        break;
      }
    } 
    
    delay(delaytime);

    while(true){
      bool legCondition=step(initiala2, initialB2, initialC2, a3, B3, C3, 2);
      bool legCondition2=step(initiala, initialB, initialC, a, B, 140, 1);
      if(legCondition && legCondition2){
        break;
      }
    } 
    
    delay(delaytime);


}
