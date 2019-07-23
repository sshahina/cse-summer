#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  ifs.open("schoolinfo.csv");

  string theline;

  getline(ifs, theline);
  while(!ifs.eof()) {
    cout << "=>" << theline << "<=" << endl;
    getline(ifs, theline);
  }

  return 0;
}

