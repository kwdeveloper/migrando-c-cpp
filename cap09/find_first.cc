#include <iostream>
#include <string>
#include <list>

using namespace std;

void split( const string &texto,
            const string &separador,
            list<string> &lista )
{
  unsigned int n = texto.length();
  unsigned int ini = texto.find_first_not_of(separador);

  while(ini != string::npos)
  {
    unsigned int fim = texto.find_first_of(separador, ini);

    if(fim == string::npos)
      fim = n;

    lista.push_back(texto.substr(ini, fim-ini));
    ini = texto.find_first_not_of(separador, fim+1);
  }
}

int main()
{
  string str = "Estudando a linguagem C++.";
  list<string> lista;
  split(str," ",lista);

  for( list<string>::iterator it=lista.begin();
       it!=lista.end();
       ++it )
    cout << *it << endl;
}
