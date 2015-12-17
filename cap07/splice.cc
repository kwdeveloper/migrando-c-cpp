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
  int arr[] = {-1,10,-3,20,7,5,21,30,90,-6};
  list<int> lst1;

  for(int i=0; i<(sizeof(arr)/sizeof(int)); ++i)
    lst1.push_back(arr[i]);

  Imprimir(lst1,"Lista 1: ");

  list<int> lst2;
  lst2.splice(lst2.begin(),lst1);

  Imprimir(lst1,"\nLista 1: ");
  Imprimir(lst2,"\nLista 2: ");
}
