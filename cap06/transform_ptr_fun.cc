#include <iostream>
#include <vector>
#include <cmath>

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
  v1.push_back(25);
  v1.push_back(30);
  v1.push_back(225);

  vector<float> v2(3,0);

  Imprimir(v1,"\nv1: ");

  transform( v1.begin(), v1.end(),
             v2.begin(),
             ptr_fun<float,float>(sqrt) );

  Imprimir(v2,"\nv2: ");
}
