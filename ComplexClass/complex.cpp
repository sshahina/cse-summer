// complex.cpp
#include <cmath>
#include "complex.h"

Complex::Complex() 
{
  real = 0;
  imag = 0;
}
float Complex::getReal()
{
  return real;
}
float Complex::getImag()
{
  return imag;
}
void Complex::setReal(float r)
{
  real = r;
}
void Complex::setImag(float i)
{
  imag = i;
}
float Complex::magnitude()
{
  return sqrt(real*real+imag*imag);
}

