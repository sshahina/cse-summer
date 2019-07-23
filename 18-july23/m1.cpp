#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  ifs.open("schoolinfo.csv");

  string theline;

  while(!ifs.eof()) {
    getline(ifs, theline);
    cout << "=>" << theline << "<=" << endl;
  }

  return 0;
}

