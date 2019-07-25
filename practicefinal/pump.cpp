#include <iostream>
using namespace std;

Pump::Pump(float g, float p)
{ setPump(g, p); }

float Pump::getGallons()
{ return gallons; }

float Pump::getPrice()
{ return price; }

void Pump:setGallons(float g)
{ gallons = g; }

void Pump::setPrice(float p)
{ price = p; }

void Pump::setPump(float g, float p)
{
  setGallons(g);
  setPrice(p);
}

void Pump::showvalues()
{
  cout << "The gas tank has " << gallons << " gallons of gas\n";
  cout << "the price per gallong of gas is $" << price << endl;
}

void Pump:request(float g)
{
  if g less than gallons
     pump g
     gallons = gallons - g
   otherwise
     pump gallons)
     gallons = 0
  cout ....
}

