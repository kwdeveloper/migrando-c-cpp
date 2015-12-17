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
  int arr[] = {3,-2,0,9,-1,4,5,7,0,-8,6,0};
  vector<int> v(arr,arr+sizeof(arr)/sizeof(int));
  Imprimir(v,"v: ");

  cout << "\nv possui "
       << count_if(v.begin(),v.end(),bind2nd(less<int>(),0))
       << " elementos menores que 0";
}
