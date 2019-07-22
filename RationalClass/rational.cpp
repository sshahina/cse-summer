#include <iostream>
using namespace std;
#include "rational.h"

Rational::Rational()
{ setRational(1,1); }

Rational::Rational(int n, int d)
{ setRational(n,d); }

int Rational::getNumer()
{ return numer; }

int Rational::getDenom()
{ return denom; }

void Rational::setNumer(int n)
{ numer = n; }

void Rational::setDenom(int d)
{ denom = d; }

void Rational::setRational(int n, int d)
{
  setNumer(n);
  setDenom(d);
}

void Rational::display()
{
  cout << numer << "/" << denom << endl;
}

Rational Rational::operator+(Rational x)
{
  Rational a;
  a.numer = numer*x.denom + denom*x.numer;
  a.denom = denom*x.denom;
  return a;
}

