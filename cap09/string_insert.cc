#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str="Linguagem C++";

  str.insert(0,5,'<');
  str.insert(str.size(),5,'>');
  cout << str << endl;
}
