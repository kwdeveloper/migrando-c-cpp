#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

inline void
  ImprimirString(const string &header, const string &str)
{
  cout << header << ": " << str << endl;
}

int main()
{
  string s1 = "a--e-i-o-u--A-E-I---O-U";
  string s2;
  ImprimirString("string     ",s1);

  // remove_copy
  remove_copy(s1.begin(),s1.end(),back_inserter(s2),'-');
  ImprimirString("remove -   ",s2);

  // replace_copy
  s2 = string();
  replace_copy(
    s1.begin(),s1.end(),back_inserter(s2),'-','*' );
  ImprimirString("replace -/*",s2);

  // reverse_copy
  s2 = string();
  reverse_copy(s1.begin(),s1.end(),back_inserter(s2));
  ImprimirString("reverse    ",s2);

  // rotate_copy;
  s2 = string();
  rotate_copy(
    s1.begin(),s1.begin()+5,s1.end(),back_inserter(s2));
  ImprimirString("rotate 5   ",s2);

  // unique_copy
  s2 = string();
  unique_copy(s1.begin(),s1.end(),back_inserter(s2));
  ImprimirString("unique     ",s2);
}
