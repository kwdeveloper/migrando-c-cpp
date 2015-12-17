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
  vector<int> v1;

  for(int i=0; i<=10; ++i)
    v1.push_back(i);

  Imprimir(v1,"\nv1: ");

  transform( v1.begin(), v1.end(),
             v1.begin(),
             bind1st(plus<int>(),1) );

  Imprimir(v1,"\nv1: ");
}
