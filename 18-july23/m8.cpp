#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

#include "school.h"

void displayall(vector<School> &);
School readschool(ifstream &);

int main()
{
  ifstream ifs;
  string infilename;
  vector<School> schools;
  School sch;

  cout << "enter data file name: ";
  cin >> infilename;
  ifs.open(infilename);
  if (!ifs) {
    cout << "bad file name: " << infilename << endl;
    return 1;
  }

  char c;
  while((c = ifs.peek()) != EOF) {
    sch = readschool(ifs);
    schools.push_back(sch);
  }

  displayall(schools);

  return 0;
}

School readschool(ifstream &ifs)
{
  School sc;
  string name, nick, yr_s;
  int yr;

  getline(ifs, name , ',');
  getline(ifs, nick , ',');
  getline(ifs, yr_s , '\n');
  yr = stoi(yr_s);
  sc = School(name, nick, yr);

  return sc;
}

void displayall(vector<School> &s)
{
  for (auto it = s.begin(); it != s.end(); ++it) {
    cout << it->getSchoolname() << " (";
    cout << it->getNickname() << "): ";
    cout << it->getYear() << endl;
  }
}

