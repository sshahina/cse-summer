#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

#include "school.h"

void displayall(vector<School> &, ofstream &);
School readschool(ifstream &);

int main()
{
  ifstream ifs;
  ofstream ofs;
  string infilename, outfilename;
  vector<School> schools;
  School sch;

  cout << "enter data file name: ";
  cin >> infilename;
  ifs.open(infilename);
  if (!ifs) {
    cout << "bad file name: " << infilename << endl;
    return 1;
  }

  cout << "please enter output file name: ";
  cin >> outfilename;
  ofs.open(outfilename);
  if (!ofs) {
    cout << "can't open " << outfilename << endl;
    return 2;
  }


  char c;
  while((c = ifs.peek()) != EOF) {
    sch = readschool(ifs);
    schools.push_back(sch);
  }

  displayall(schools, ofs);

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

void displayall(vector<School> &s, ofstream &os)
{
  for (auto it = s.begin(); it != s.end(); ++it) {
    os << it->getSchoolname() << " (";
    os << it->getNickname() << "): ";
    os << it->getYear() << endl;
  }
}

