// person.cpp

#include <iostream>
using namespace std;
#include "address.h"
#include "person.h"

Person::Person() { };
Person::Person(string ln, string fn, Address a, int i)
  { setPerson(ln, fn, a, i); }

string Person::getLast() { return last; }
string Person::getFirst() { return first; }
Address &Person::getAddress() { return addr; }
int Person::getId() { return id; }

void Person::setLast(string ln) { last = ln; }
void Person::setFirst(string fn) { first = fn; }
void Person::setPersonAddress(Address a) { addr = a; }
void Person::setId(int i) { id = i; }

void Person::setPerson(string ln, string fn, Address a, int i)
{
  setLast(ln); setFirst(fn); setPersonAddress(a); setId(i);
}

ostream& operator<< (ostream &s, Person &pn)
{
  s << "Name: " << pn.first << " " << pn.last << endl;
  s << "ID: " << pn.id << endl;
  s << "Address:" << endl;
  s << pn.getAddress(); 
  return s;
}

