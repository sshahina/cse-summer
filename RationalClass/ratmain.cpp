#include <iostream>
using namespace std;

#include "rational.h"

int main()
{
  Rational r1, r2(4,7);

  r1.display();
  r2.display();
  r1.setRational(8,3);
  r1.display();

  Rational r3;
  r3 = r1 + r2;
  r3.display();

  return 0;
}

