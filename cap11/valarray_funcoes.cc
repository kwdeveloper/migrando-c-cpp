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

inline int MenorQueZero(const int &x)
{
  return (x<0) ? 1 : 0;
}

int main()
{
  int arr[] = {1,-2,2,6,-5,3,-9};
  valarray<int> va(arr,sizeof(arr)/sizeof(int));
  ImprimirValarray(va,"va: "," ");

  valarray<int> vb = va.apply(MenorQueZero);
  ImprimirValarray(vb,"\nvb: "," ");

  valarray<int> vc = abs(va);
  ImprimirValarray(vc,"\nvc: "," ");
}
