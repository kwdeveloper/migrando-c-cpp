#include <iostream>
#include <set>
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
  int arr[] = {5,10,-3,12,8,11,-15};
  multiset<int> s1, s2;
  int sz = sizeof(arr)/sizeof(int);

  for(int i=0; i<sz; ++i)
  {
    s1.insert(arr[i]);
    s2.insert(arr[i]);
  }

  Imprimir(s1,"s1: ");
  Imprimir(s2,"\ns2: ");

  vector<int> v(sz*2,0);
  copy(s1.begin(),s1.end(),v.begin());
  copy(s2.begin(),s2.end(),v.begin()+sz);
  Imprimir(v,"\nv : ");

  inplace_merge(v.begin(),v.begin()+sz,v.end());
  Imprimir(v,"\nv : ");
}
