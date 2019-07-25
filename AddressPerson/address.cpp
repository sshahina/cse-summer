// address.cpp

#include <iostream>
using namespace std;
#include "address.h"

Address::Address() {}
Address::Address(string str, string cty, string stt, string zp)
  { setAddress(str, cty, stt, zp); }

string Address::getStreet() { return street; } 
string Address::getCity() { return city;}
string Address::getState() { return state; }
string Address::getZip() { return zip; }

void Address::setStreet(string s) {street = s; }
void Address::setCity(string c) { city = c; }
void Address::setState(string s) { state = s; }
void Address::setZip(string z) { zip = z; }

void Address::setAddress(string st, string cy, string se, string zp)
{
  setStreet(st); setCity(cy); setState(se); setZip(zp);
}

ostream& operator<< (ostream &s, Address &a)
{ 
  s << a.street << endl;
  s << a.city << ", " << a.state << " " << a.zip << endl;
  return s;
}

