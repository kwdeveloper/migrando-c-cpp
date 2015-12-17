#include <iostream>
#include <string>
#include <boost/regex.hpp>

using namespace std;
using namespace boost;

int main( ) 
{
  string frase = "O Brasil foi descoberto em 22-04-1500, "
                 "declarou independencia em 07/09/1822 "
                 "e tornou-se uma republica em 15-nov-1889";
  string str = "(\\d{2}\\-\\d{2}\\-\\d{4})|"
               "(\\d{2}/\\d{2}/\\d{4})|"
               "(\\d{2}\\-[a-z]{3}\\-\\d{4})";
  regex rgx;
  
  try
  {
    rgx = str;
  }
  catch(regex_error &e)
  {
    cout << "ocorreu uma excecao com regex\n";
    return -1;
  }

  string::const_iterator ini = frase.begin();
  string::const_iterator fim = frase.end();
  smatch matches;
  
  while(regex_search(ini, fim, matches, rgx ))  
  {
    cout << matches[0] << '\n';
    ini += matches.position() + matches.length();
  }  
}