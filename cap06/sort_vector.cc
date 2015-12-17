#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

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
  vector<int> v;

  srand(time(NULL));

  // inclui valores aleatorios
  for(int i=0; i<5; ++i)
    v.push_back(rand());

  Imprimir(v,"Elementos originais:\n","\n");

  // ordena o vetor
  sort(v.begin(), v.end());

  Imprimir(v,"\nElementos ordenados:\n","\n");
}
