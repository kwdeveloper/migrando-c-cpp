#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
  map<int,string> m;

  m[0] = "C++";
  m[1] = "C";
  m[2] = "Smalltalk";

  for( map<int,string>::iterator it=m.begin();
       it!=m.end();
       ++it )
    cout << it->first << " " << it->second << endl;
}
