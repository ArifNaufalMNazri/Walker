#ifndef KINEMATICS_H
#define KINEMATICS_H

#include <Arduino.h>

float lengthc(float &x, float &y);
float alpha(float &x, float &y);
float angleC(float &l1, float &l2, float &c);
float thetaA(float &l2, float &c, float &angleC);
float a(float &alpha, float &thetaA);
float angleB(float &angleC);

float finda(float &x, float &y, float &l1, float &l2);
float findB(float &x, float &y, float &l1, float &l2);
float findC(float &x, float &y, float &l1, float &l2, float a);

#endif