#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  ios_base::fmtflags flg = cout.flags();

  int i = 123;
  cout << hex << showbase << uppercase << left;
  cout << i << endl;
  cout << (i+1) << endl;

  cout.flags(flg);
  cout << i << endl;
}
