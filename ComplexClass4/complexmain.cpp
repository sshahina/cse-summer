// complexmain.cpp

#include <iostream>
using namespace std;
#include "complex.h"

int main()
{
  Complex c, c2(2.7, -8.1), c3;
  c.setReal(4.3);
  c.setImag(5.1);

  cout << c;
  cout << "its magnitude is: " << c.magnitude() << endl;
  cout << "c2 is: " << c2;

  c3.setComplex(2.5,11.8);
  cout << c3;

  Complex c4;
  c4 = c2 + c3;
  cout << c4;

  Complex c5;
  c5 = c2*c3;
  cout << c5;

  Complex c6 = c2*3.4;
  cout << c6;

  Complex c7;
  cin >> c7;
  cout << c7;

  return 0;
}

