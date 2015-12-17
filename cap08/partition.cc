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
  int arr[] = {10,-1,23,305,-4,105,64,71,158,9};

  vector<int> v1(arr,arr+sizeof(arr)/sizeof(int));
  Imprimir(v1,"original        : ");

  partition(v1.begin(),v1.end(),bind2nd(less<int>(),100));
  Imprimir(v1,"\npartition       : ");

  vector<int> v2(arr,arr+sizeof(arr)/sizeof(int));
  stable_partition( v2.begin(),v2.end(),
                    bind2nd(less<int>(),100) );
  Imprimir(v2,"\nstable_partition: ");
}
