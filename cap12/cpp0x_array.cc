#include <iostream>
#include <numeric>
#include <boost/array.hpp>

using namespace std;
using namespace boost;

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

template<typename Tin, typename Tout>
  Tout GetMedia(const Tin &c)
{
  return (Tout)(accumulate(c.begin(),c.end(),0)) /
         (Tout)c.size();
}

int main()
{
  int arr[] = {10,-1,3,4,5,-2,200};
  array<int,7> carray;

  for(int i=0; i<7; ++i)
    carray[i] = arr[i];

  Imprimir(carray,"Elementos: ");
  cout << "\nMedia: "
       << GetMedia<array<int,7>,float>(carray);
}
