#include <iostream>

using namespace std;

int main()
{
  bool b1 = false;
  bool b2 = true;

  cout << b1 << "," << b2 << endl;

  cout << boolalpha;
  cout << b1 << "," << b2 << endl;

  int a = 10, b = 100;

  cout << (a<b)  << " "
       << (a==b) << " "
       << (a>b)  << " "
       << endl;
}
