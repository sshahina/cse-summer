// complexmain.cpp

#include <iostream>
using namespace std;
#include "complex.h"

int main()
{
  Complex c;
  c.setReal(4.3);
  c.setImag(5.1);

  cout << c.getReal() << " + " << c.getImag() << " i" << endl;
  cout << "its magnitude is: " << c.magnitude() << endl;
  return 0;
}

