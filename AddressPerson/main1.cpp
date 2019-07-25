// main1.cpp
// testing the Address class

#include <iostream>
using namespace std;

#include "address.h"

int main()
{
  Address myhome("123 Elm St.", "Chicago", "IL", "60615");

  cout << myhome;   // overloaded output operator

  return 0;
}

