#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string s1 = "Linguagem C++";
  int alfa = count_if( s1.begin(),
                       s1.end(),
                       ptr_fun<int,int>(isalpha) );

  cout << s1 << endl;
  cout << "- alfabeticos: " << alfa << endl;
  cout << "- nao alfa   : " << (s1.size()-alfa) << endl;
}
