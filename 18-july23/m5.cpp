#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

#include "school.h"

int main()
{
  ifstream ifs;
  string name, nick, yr_s;
  int yr;
  vector<School> schools;
  School sch;

  ifs.open("schoolinfo.csv");

  char c = ifs.peek();
  while(c != EOF) {
    getline(ifs, name , ',');
    getline(ifs, nick , ',');
    getline(ifs, yr_s , '\n');
    yr = stoi(yr_s);
    sch = School(name, nick, yr);
    schools.push_back(sch);
    c = ifs.peek();
  }

  return 0;
}

