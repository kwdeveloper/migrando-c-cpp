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
  lst1.push_back("Fortran");
  lst1.push_back("Pascal");
  lst1.push_back("C");
  Imprimir(lst1,"","\n");

  list<string> lst2;
  lst2.push_back("Smalltalk");
  lst2.push_back("C++");
  lst2.push_back("Eiffel");
  Imprimir(lst2,"\n","\n");

  lst1.insert(lst1.begin(),lst2.begin(),lst2.end());
  lst1.sort();
  Imprimir(lst1,"\n","\n");

  lst2.clear();
}
