#include "kinematics.h"

float limit(float x){
  return max(min(x, 1.0), -1.0);
}

float lengthc(float &x, float &y){
  return sqrt((x*x) + (y*y));
}

float alpha(float &x, float &y){
  return atan(fabs(y)/fabs(x));
}

float angleC(float &l1, float &l2, float &c){
  return acos((l1*l1 + l2*l2 - c*c)/(2*l1*l2));
}

float thetaA(float &l2, float &c, float &angleC){
  return asin((sin(angleC)*l2)/c);
}

float a(float &alpha, float &thetaA){
  return degrees((PI) - alpha - thetaA);
}

float angleB(float &angleC){
  return degrees(PI - angleC);
}

float finda(float &x, float &y, float &l1, float &l2){
  float c=lengthc(x, y);
  float alpha1=alpha(x, y);
  float angleC1=angleC(l1, l2, c);
  float thetaA1=thetaA(l2, c, angleC1);
  if(x>=0){
    return a(alpha1, thetaA1);
  }
  else{
    return degrees(PI*0.5 - (PI*0.5-alpha1 + thetaA1));
  }
  
}

float findB(float &x, float &y, float &l1, float &l2){
  float a=finda(x, y, l1, l2);
  if(a<90){
    float c1=lengthc(x, y);
    float c2=angleC(l1, l2, c1);
    return angleB(c2);
  }
  else if(a>90){
    float al=degrees(alpha(x, y));
    Serial.print("al: ");
    Serial.println(al);
    float alpha2=180-a-al;
    Serial.println(alpha2);
    float beta=180-2*alpha2;
    Serial.println(beta);
    return 180-beta;
  }
  else{
    float al=degrees(alpha(x, y));
    float alpha2=90-al;
    float beta=180-2*alpha2;
    return 180-beta;
  }
}

float findC(float &x, float &y, float &l1, float &l2, float a){
  float beta=findB(x, y, l1, l2);
  float a2=finda(x, y, l1, l2);
  float angle=(180-beta);
  float finalAngle=(180-angle)/2;
  float reflectAngle=90-finalAngle;

  if(y==5.2){
    return 90+angle;
  }

  if(a<90){
    if(x==0){
      return 90+finalAngle;
    }
    float firstAngle=90-a;
    float secondAngle=180-firstAngle-(180-beta);
    float returnValue=90+(90-secondAngle);
    Serial.println(returnValue);
    return returnValue;
  }
  else if(a>90){
    return 90+finalAngle;
  }
  else{
    return 90;
  }
}

