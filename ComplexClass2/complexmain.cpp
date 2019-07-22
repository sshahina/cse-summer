// complexmain.cpp

#include <iostream>
using namespace std;
#include "complex.h"

int main()
{
  Complex c, c2(2.7, -8.1), c3;
  c.setReal(4.3);
  c.setImag(5.1);

  c.display();
  cout << "its magnitude is: " << c.magnitude() << endl;
  c2.display();

  c3.setComplex(2.5,11.8);
  c3.display();

  Complex c4;
  c4 = c2.add(c3);
  c4.display();

  return 0;
}

