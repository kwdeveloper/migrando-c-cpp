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
  valarray<int> va(30);

  for(int i=0; i<30; ++i)
    va[i] = i;

  size_t len[] = {3,5};
  valarray<size_t> vlen(len,2);

  size_t passo[] = {10,1};
  valarray<size_t> vpasso(passo,2);

  valarray<int> vb(va[gslice(0,vlen,vpasso)]);
  ImprimirValarray(vb,"vb: "," ");
}
