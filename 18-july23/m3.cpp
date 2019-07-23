#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
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

