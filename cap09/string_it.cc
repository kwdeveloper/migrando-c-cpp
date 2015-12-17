#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str="C++";

  string::iterator it;
  for(it=str.begin(); it!=str.end(); ++it)
    cout << *it << endl;

  string::reverse_iterator rit;
  for(rit=str.rbegin(); rit!=str.rend(); ++rit)
    cout << *rit;
}
