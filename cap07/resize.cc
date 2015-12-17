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
  int arr[] = {1,2,3,4,5};
  vector<int> v(arr,arr+sizeof(arr)/sizeof(int));
  Imprimir(v,"v original: ");

  v.resize(10);
  Imprimir(v,"\nv resize 1: ");

  v.resize(5);
  Imprimir(v,"\nv resize 2: ");

  v.resize(10,99);
  Imprimir(v,"\nv resize 3: ");
}
