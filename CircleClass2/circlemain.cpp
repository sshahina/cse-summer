// cireclemain.cpp
#include <iostream>
using namespace std;

#include "circle.h"

void func();

int main() 
{
  Circle c1, c2(7.1);

  cout << c1.getRadius() << endl;
  c1.setRadius(3.4);
  cout << c1.getRadius() << endl;
  cout << c2.getRadius() << endl;
  cout << "c2's area is: " << c2.area() << endl;
  cout << "c2's circumference is: " << c2.circumf() << endl;
    
  for (int i = 1; i <= 3; i++)
    func();
  Circle c3(13.1);

  return 0;
}

void func()
{
  Circle a(4);
}

