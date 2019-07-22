#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "school.h"

void displayall(vector<School> &);

int main()
{
  string name, nick, yr_s;
  int yr;
  vector<School> schools;
  School sch;

  for (int i = 1; i <= 13; i++) {
    getline(cin, name , ',');
    getline(cin, nick , ',');
    getline(cin, yr_s , '\n');
    yr = stoi(yr_s);
    sch = School(name, nick, yr);
    schools.push_back(sch);
  }

  displayall(schools);

  return 0;
}

void displayall(vector<School> &s)
{
  for (auto it = s.begin(); it != s.end(); ++it) {
    cout << it->getSchoolname() << " (";
    cout << it->getNickname() << "): ";
    cout << it->getYear() << endl;
  }
}

