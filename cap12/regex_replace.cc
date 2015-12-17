#include <iostream>
#include <string>
#include <boost/regex.hpp>

using namespace std;
using namespace boost;

int main( ) 
{
  string frase = "O Brasil foi descoberto em 22-04-1500, \n"
                 "declarou independencia em 07/09/1822 e \n"
                 "tornou-se uma republica em 15-nov-1889.";
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

  cout << regex_replace(frase,rgx,"__/__/____");
}