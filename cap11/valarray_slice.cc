#include <iostream>
#include <valarray>
#include <complex>

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
  int arr[] = {0,1,2,3,4,5,6,7,8,9};
  valarray<int> va(arr,sizeof(arr)/sizeof(int));

  valarray<int> vs1 = va[slice(0,3,1)];
  ImprimirValarray(vs1,"vs1: "," ");

  valarray<int> vs2 = va[slice(0,3,2)];
  ImprimirValarray(vs2,"\nvs2: "," ");

  valarray<int> vs3 = va[slice(9,3,-3)];
  ImprimirValarray(vs3,"\nvs3: "," ");

  valarray<int> vs4(va[slice(0,3,3)]);
  ImprimirValarray(vs4,"\nvs4: "," ");
}
