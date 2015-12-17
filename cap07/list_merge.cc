#include <iostream>
#include <list>

using namespace std;

template<typename T>
void Imprimir( const T &c,
               const string &header=" ",
               const string &sep=" ")
{
  typename T::const_iterator it;

  cout << header;

  for( it=c.begin(); it!=c.end(); ++it)
    cout << *it << sep;
}

int main()
{
  list<string> lst1;
  lst1.push_back("Ana");
  lst1.push_back("Zaqueu");
  lst1.push_back("Genoveva");
  lst1.push_back("Jose");
  lst1.sort();

  Imprimir(lst1,"Lista 1:\n","\n");

  list<string> lst2;
  lst2.push_back("Jose");
  lst2.push_back("Erendira");
  lst2.push_back("Maria");
  lst2.push_back("Genoveva");
  lst2.sort();

  Imprimir(lst2,"\nLista 2:\n","\n");

  lst1.merge(lst2);
  lst1.unique();

  Imprimir(lst1,"\nLista consolidada:\n","\n");

  cout << "\nNumero elementos lst1: " << lst1.size();
  cout << "\nNumero elementos lst2: " << lst2.size();
}
