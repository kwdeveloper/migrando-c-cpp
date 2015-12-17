#include <iostream>
#include <vector>

using namespace std;

int val = 0;
int passo = 1;

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

int Fgen()
{
  val += passo;
  return val;
}

int main()
{
  vector<int> v(10,0);
  Imprimir(v, "\nv: ");

  generate(v.begin(),v.end(),Fgen);
  Imprimir(v, "\nv: ");
}
