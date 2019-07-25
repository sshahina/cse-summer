// address.h

#include <string>
 
class Address {
 friend ostream& operator<< (ostream &, Address &);
 public:
  // constructors
  Address();
  Address(string, string, string, string);
  // get methods
  string getStreet();
  string getCity();
  string getState();
  string getZip();
  // set methods (for individual private members)
  void setStreet(string);
  void setCity(string);
  void setState(string);
  void setZip(string);
  // set method for an Address object
  void setAddress(string, string, string, string);
 private:
  string street;
  string city;
  string state;
  string zip;
};


