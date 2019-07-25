// person.h

#include <string>

class Person {
 friend ostream& operator<< (ostream &, Person &);
 public:
  // constructors
  Person();
  Person(string, string, Address, int);
  // get methods
  string getLast();
  string getFirst();
  Address &getAddress();
  int getId();
  // set methods (for individual private members)
  void setLast(string);
  void setFirst(string);
  void setPersonAddress(Address);
  void setId(int);
  // set method for a Person object
  void setPerson(string, string, Address, int);
 private:
  string last;
  string first;
  Address addr;
  int id;
};


