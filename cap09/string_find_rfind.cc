#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str1("Aeiou-");
  str1 += str1;
  str1 += str1;
  cout << str1 << endl;

  int p1 = str1.find('-');
  int p2 = str1.rfind('A');

  string str2;
  str2.assign(str1,p1,p2-p1);
  cout << str2 << endl;
}
