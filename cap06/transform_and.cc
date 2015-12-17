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
  v1.push_back(1);
  v1.push_back(0);
  v1.push_back(1);

  vector<int> v2;
  v2.push_back(0);
  v2.push_back(0);
  v2.push_back(1);

  Imprimir(v1,"\nv1: ");
  Imprimir(v2,"\nv2: ");

  transform( v1.begin(), v1.end(),
             v2.begin(),
             v1.begin(),
             logical_and<int>() );

  Imprimir(v1,"\nv1: ");
}
