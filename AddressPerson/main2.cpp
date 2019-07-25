// main2.cpp
// testing the Person class

#include <iostream>
using namespace std;

#include "address.h"
#include "person.h"

int main()
{
  Address myhome("123 Elm St.", "Chicago", "IL", "60615");
  Person pers("Smith", "Pat", myhome, 12345);

  cout << "========\n";
  cout << myhome;       // cout an Address object
  cout << "========\n";
  cout << pers;         // cout a Person object 
  cout << "========\n";

  // let's showcase chaining and hierarchy:
  //  display Person's Address's city (the city of the addr of pers)
  cout << "=> " << pers.getAddress().getCity() << endl;

  return 0;
}

