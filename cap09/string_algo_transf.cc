#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string s1 = "aeiou";
  string s2(s1.size(),' ');

  transform( s1.begin(), s1.end(),
             s2.begin(),
             ptr_fun<int,int>(toupper) );
  cout << s1 << " " << s2 << endl;
}
