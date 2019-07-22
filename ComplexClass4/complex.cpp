// complex.cpp
#include <iostream>
using namespace std;
#include <cmath>
#include "complex.h"

Complex::Complex() 
{
  setComplex(0,0);
}

Complex::Complex(float r, float i) 
{
  setComplex(r,i);
}

float Complex::getReal()
{ return real; }

float Complex::getImag()
{ return imag; }

void Complex::setReal(float r)
{ real = r; }

void Complex::setImag(float i)
{ imag = i; }

void Complex::setComplex(float r, float i)
{
  setReal(r);
  setImag(i);
}

float Complex::magnitude()
{ return sqrt(real*real+imag*imag); }

ostream& operator<<(ostream &os, Complex &c)
{
  char sign;

  sign = (c.imag > 0) ? '+' : '-';  
  os << c.real << " " << sign << " " << fabs(c.imag) << " i" << endl;
  return os;
}

istream& operator>>(istream &is, Complex &c)
{
  float a, b;
  cout << "enter two numbers: ";
  is >> a >> b;
  c.setComplex(a,b);
  return is;
}


Complex Complex::operator+(Complex x)
{
  Complex a;
  a.real = real + x.real;
  a.imag = imag + x.imag;
  return a;
}

Complex Complex::operator*(Complex x)
{
  Complex a;
  a.real = real*x.real - imag*x.imag;
  a.imag = real*x.imag + imag*x.real;
  return a;
}

Complex Complex::operator*(float f)
{
  Complex a;
  a.real = real*f;
  a.imag = imag*f;
  return a;

 // OR just:  return Complex(real*f, imag*f);
}

