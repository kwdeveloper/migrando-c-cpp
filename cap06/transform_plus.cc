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
  vector<int> v2;

  for(int i=1; i<=5; ++i)
  {
    v1.push_back(i*10);
    v2.push_back(i*20);
  }

  Imprimir(v1,"\nv1: ");
  Imprimir(v2,"\nv2: ");

  transform( v1.begin(), v1.end(),
             v2.begin(),
             v1.begin(),
             plus<int>() );

  Imprimir(v1,"\nv1: ");
}
