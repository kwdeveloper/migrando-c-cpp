#include <iostream>
#include <valarray>

using namespace std;

template<typename T>
  void ImprimirValarray( const valarray<T> &va,
                         const string &head = "",
                         const string &sep = "" )
{
  cout << head;

  for(unsigned int i=0; i<va.size(); ++i)
    cout << va[i] << sep;
}

int main()
{
  valarray<int> va(10);

  for(int i=0; i<10; ++i)
    va[i] = i;

  ImprimirValarray(va,"va: ", " ");

  valarray<int> vb = va.cshift(3);
  ImprimirValarray(vb,"\nvb: ", " ");

  valarray<int> vc = va.shift(-3);
  ImprimirValarray(vc,"\nvc: ", " ");
}
