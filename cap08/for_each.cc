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

void Prt(const int &x)
{
  if(x>=0)
    cout << x << " ";
}

int main()
{
  int arr[] = {9,10,-3,5,12,5,8,5,-13,11,-15};
  vector<int> v1(arr,arr+sizeof(arr)/sizeof(int));

  for_each(v1.begin(),v1.end(),Prt);

  Imprimir(v1,"\nv1: ");

  set<int> s1;
  copy(v1.begin(),v1.end(),inserter(s1,s1.begin()));
  Imprimir(s1,"\ns1: ");
}
