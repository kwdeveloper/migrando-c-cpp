#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str1 = "0123456789";
  string str2 = "abcdefghij";

  string s = str1;
  s.replace(0,5,str2);
  cout << s << endl;

  s = str1;
  s.replace(0,5,str2,0,5);
  cout << s << endl;
}
