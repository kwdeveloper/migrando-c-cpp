#include <iostream>
#include <list>

using namespace std;

int main()
{
  // nome e idade
  list<pair<string,int> > lst;

  // inclui elementos de forma desordenada
  lst.push_back(make_pair("Maria",10));
  lst.push_back(make_pair("Jose",15));
  lst.push_back(make_pair("Ana",13));
  lst.push_back(make_pair("Zaqueu",12));

  // ordena a lista
  lst.sort();

  list<pair<string,int> >::iterator it;

  // imprime
  for(it=lst.begin(); it!=lst.end(); ++it)
    cout << it->first << " " << it->second << endl;
}
