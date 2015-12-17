#include <iostream>
#include <vector>
#include <complex>

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
  vector<complex<int> > v1;
  v1.push_back(complex<int>(10,20));
  v1.push_back(complex<int>(-10,-20));
  v1.push_back(complex<int>(15,50));

  vector<int> v2(v1.size(),0);

  transform( v1.begin(), v1.end(),
             v2.begin(), mem_fun_ref(&complex<int>::real));
  Imprimir(v2,"Parte real: ");

  transform( v1.begin(), v1.end(),
             v2.begin(), mem_fun_ref(&complex<int>::imag));
  Imprimir(v2,"\nParte imaginaria: ");
}
