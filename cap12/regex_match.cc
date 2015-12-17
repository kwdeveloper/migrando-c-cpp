#include <iostream>
#include <string>
#include <boost/regex.hpp>

using namespace std;
using namespace boost;

int main( ) 
{
  string str = "22-04-1500";
  regex rgx1("(\\d{2})\\-(\\d{2})\\-(\\d{4})");    
  smatch matches;
  
  if( regex_match(str,matches,rgx1) )
  { 
    for(unsigned int i=0; i<matches.size(); ++i)
    {
      cout << i << ": ";
      cout << string(matches[i].first,matches[i].second);
      cout << '\n';
    }
  } 
}