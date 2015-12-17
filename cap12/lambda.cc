// Este programa utiliza a biblioteca Boost

#include <iostream>
#include <vector>
#include <cmath>
#include <boost\lambda\lambda.hpp>
#include <boost\lambda\bind.hpp>
#include <boost\lambda\if.hpp>

using namespace std;
using namespace boost::lambda;

int f()
{
  static int x = 0;
  return x++;
}

template<typename T>
  void Imprimir( const T &c,
                 const string &header=" ",
                 const string &sep=" ")
{
  cout << header;
  for_each(c.begin(),c.end(), cout << _1 << sep);
}

int main()
{
  vector<int> v1(10,0);
  for_each(v1.begin(),v1.end(),_1=bind(f));
  Imprimir(v1,"\nv1: ");

  int arr1[] = {-1,10,2,3,-5,4,6,-7,0};
  vector<int> v2(arr1,arr1+(sizeof(arr1)/sizeof(int)));
  for_each(v2.begin(),v2.end(), if_then(_1<0,_1=-_1) );
  Imprimir(v2,"\nv2: ");

  vector<int> v3(arr1,arr1+(sizeof(arr1)/sizeof(int)));
  transform( v2.begin(),v2.end(),v3.begin(),v3.begin(),
             _1+_2 );
  Imprimir(v3,"\nv3: ");

  int arr2[] = {4,16,25,49,64,81,144};
  vector<int> v4(arr2,arr2+(sizeof(arr2)/sizeof(int)));
  vector<float> v5(sizeof(arr2)/sizeof(int),0);
  transform( v4.begin(),v4.end(),v5.begin(),
             bind<float,float>(sqrt,_1) );
  Imprimir(v5,"\nv5: ");
}
