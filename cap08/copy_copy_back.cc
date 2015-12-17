#include <iostream>
#include <vector>

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
  vector<char> v(19,'-');

  for(int i=7; i<12; ++i)
    v[i] = i + 58;

  Imprimir(v,"original : ");

  vector<char>::iterator ini = v.begin();
  copy(ini+7,ini+10,ini+5);
  Imprimir(v,"\ncopy     : ");

  copy_backward(ini+7,ini+10,ini+14);
  Imprimir(v,"\ncopy_back: ");
}
