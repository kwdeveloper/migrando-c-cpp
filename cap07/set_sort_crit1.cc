#include <iostream>
#include <set>

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
  int arr[] = {10,1,-5,30,25};
  unsigned int sz = sizeof(arr)/sizeof(int);

  set<int> s1;
  for(unsigned int i=0; i<sz; ++i)
    s1.insert(arr[i]);

  Imprimir(s1,"s1: ");

  set<int,greater<int> > s2;
  for(unsigned int i=0; i<sz; ++i)
    s2.insert(arr[i]);

  Imprimir(s2,"\ns2: ");
}
