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
  v1.push_back(9);
  v1.push_back(5);

  vector<int> v2;
  v2.push_back(5);
  v2.push_back(2);
  v2.push_back(1);

  Imprimir(v1,"\nv1: ");
  Imprimir(v2,"\nv2: ");

  vector<int> v3(3,0);

  transform( v1.begin(), v1.end(),
             v2.begin(),
             v3.begin(),
             greater<int>() );

  Imprimir(v3,"\nv3: ");
}
