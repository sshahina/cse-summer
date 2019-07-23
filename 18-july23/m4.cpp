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

  ifs.open("schoolinfo.csv");

  string theline;

  char c = ifs.peek();
  while(c != EOF) {
    getline(ifs, theline);
    cout << "=>" << theline << "<=" << endl;
    c = ifs.peek();
  }

  return 0;
}

