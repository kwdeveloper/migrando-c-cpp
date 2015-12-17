#include <iostream>
#include <vector>

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
  int arr[] = {-10,12,30,5,15,-2,7};
  vector<int> v(arr,arr+sizeof(arr)/sizeof(int));

  Imprimir(v,"Vetor        : ");

  make_heap(v.begin(),v.end());
  Imprimir(v,"\nPilha        : ");

  v.push_back(11);
  push_heap(v.begin(),v.end());
  Imprimir(v,"\nPilha adic 11: ");

  pop_heap(v.begin(),v.end());
  v.pop_back();
  Imprimir(v,"\nPilha pop    : ");

  sort_heap(v.begin(),v.end());
  Imprimir(v,"\nOrdenado     : ");
}
