// circle.cpp
#include <iostream>
using namespace std;
#include "circle.h"
const int pi = 3.14159;

Circle::Circle() {
  setRadius(1);
  cout << "I am in the 1st constructor; radius is: 1\n";
}
Circle::Circle(float r) {
  setRadius(r);
  cout << "I am in the 2nd constructor; radius is: " << getRadius() << "\n";
}

Circle::~Circle() {
  cout << "I am done with " << getRadius() << " !" << endl;
}

void Circle::setRadius(float r) {
  radius = r;
}
float Circle::getRadius() {
  return radius;
}
float Circle::area() {
  return pi*radius*radius;
}

float Circle::circumf() {
  return 2*pi*radius;
}
