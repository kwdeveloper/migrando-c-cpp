#include <iostream>
#include <vector>
#include <set>

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
  int arr[] = {5,10,-3,5,12,8,5,-3,11,-15};
  multiset<int> ms1;
  int sz = sizeof(arr)/sizeof(int);

  for(int i=0; i<sz; ++i)
    ms1.insert(arr[i]);

  Imprimir(ms1,"ms1: ");

  // remove_copy, remove_copy_if
  vector<int> v1, v2;

  remove_copy(ms1.begin(),ms1.end(),back_inserter(v1),5);
  Imprimir(v1,"\nv1 : ");

  remove_copy_if( ms1.begin(),ms1.end(),
                  back_inserter(v2),
                  bind2nd(less<int>(),0) );
  Imprimir(v2,"\nv2 : ");

  // replace_copy, replace_copy_if
  vector<int> v3, v4;

  replace_copy(ms1.begin(),ms1.end(),back_inserter(v3),5,0);
  Imprimir(v3,"\nv3 : ");

  replace_copy_if( ms1.begin(),ms1.end(),
                   back_inserter(v4),
                   bind2nd(greater<int>(),0),0 );
  Imprimir(v4,"\nv4 : ");

  // reverse_copy
  vector<int> v5;

  reverse_copy(ms1.begin(),ms1.end(),back_inserter(v5));
  Imprimir(v5,"\nv5 : ");

  // rotate_copy
  vector<int> v6;

  multiset<int>::iterator it = ms1.begin();
  advance(it,5);
  rotate_copy(ms1.begin(),it,ms1.end(),back_inserter(v6));
  Imprimir(v6,"\nv6 : ");

  // unique_copy
  vector<int> v7;

  unique_copy(ms1.begin(),ms1.end(),back_inserter(v7));
  Imprimir(v7,"\nv7 : ");
}
