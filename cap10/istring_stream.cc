#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  istringstream iss;
  string str = "4 9 16 25 36";
  iss.str(str);

  cout << str << endl;

  while(iss.rdstate() != ios_base::eofbit)
  {
    int val;
    iss >> val;
    cout << sqrt(val) << endl;
  }
}
