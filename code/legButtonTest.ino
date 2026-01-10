#include <Servo.h>

//Servo Pins
const int servoPin1=8;
const int servoPin2=7;
const int servoPin3=6;

//Button pins;
const int button1Right=1;
const int button1Left=2;
const int button2Right=3;
const int button2Left=4;
const int button3Right=5;
const int button3Left=6;

//Servo Objects
Servo servo1;
Servo servo2;
Servo servo3;

//Angles of servos
int angle1=90;
int angle2=90;
int angle3=90;

void setup() {
  //Servo setup
  servo1.attach(servoPin1);
  servo1.write(angle1);
  servo2.attach(servoPin2);
  servo2.write(angle2);
  servo3.attach(servoPin3);
  servo3.write(angle3);

  //Button setup
  pinMode(button1Right, INPUT_PULLUP);
  pinMode(button1Left, INPUT_PULLUP);
  pinMode(button2Right, INPUT_PULLUP);
  pinMode(button2Left, INPUT_PULLUP);
  pinMode(button3Right, INPUT_PULLUP);
  pinMode(button3Left, INPUT_PULLUP);
  
  //Serial Monitor Setup
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int button1RightState=digitalRead(button1Right);
  int button1LeftState=digitalRead(button1Left);
  int button2RightState=digitalRead(button2Right);
  int button2LeftState=digitalRead(button3Left);
  int button3RightState=digitalRead(button3Right);
  int button3LeftState=digitalRead(button3Left);

  if(button1RightState==HIGH && angle1<=180){
    angle1++;
  }
  else if(button1LeftState==HIGH && angle1>=0){
    angle1--;
  }

  if(button2RightState==HIGH && angle2>=0){
    angle2--;
  }
  else if(button2LeftState==HIGH && angle2<=180){
    angle2++;
  }

  if(button3RightState==HIGH && angle3<=180){
    angle3++;
  }
  else if(button3LeftState==HIGH && angle3>=0){
    angle3--;
  }
  
  Serial.print("ANGLE 1: ");
  Serial.println(angle1);
  Serial.print("ANGLE 2: ");
  Serial.println(angle2);
  Serial.print("ANGLE 3: ");
  Serial.println(angle3);
   
  servo1.write(angle1);
  delay(8);
  servo2.write(angle2);
  delay(8);
  servo3.write(angle3);
  delay(8);
}
