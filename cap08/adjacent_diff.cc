#include <iostream>
#include <vector>
#include <numeric>

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
  int arr[] = {9,10,-3,5,5,8,-13};
  vector<int> v1(arr,arr+sizeof(arr)/sizeof(int));

  Imprimir(v1,"v1: ");

  vector<int> v2;
  adjacent_difference(v1.begin(),v1.end(),back_inserter(v2));
  Imprimir(v2,"\nv2: ");

  cout << endl
       << "v1 prod v2: "
       << inner_product(v1.begin(),v1.end(),v2.begin(),0);

  vector<int> v3;
  partial_sum(v1.begin(),v1.end(),back_inserter(v3));
  Imprimir(v3,"\nv3: ");
}
