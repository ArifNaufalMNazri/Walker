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
  return degrees((PI*0.5) - alpha - thetaA);
}

float angleB(float &angleC){
  return degrees(PI - angleC);
}

float finda(float &x, float &y, float &l1, float &l2){
  float c=lengthc(x, y);
  float alpha1=alpha(x, y);
  float angleC1=angleC(l1, l2, c);
  float thetaA1=thetaA(l2, c, angleC1);
  return a(alpha1, thetaA1);
}

float findB(float &x, float &y, float &l1, float &l2){
  float c=lengthc(x, y);
  float angleC1=angleC(l1, l2, c);
  return angleB(angleC1);
}

