#include <iostream>
#include <set>
#include <vector>
#include <ctime>

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
  int arr[] = {10,15,-2,-75,15,9,11,2};
  set<int,greater<int> > s1;

  for(int i=0; i<(sizeof(arr)/sizeof(int)); ++i)
    s1.insert(arr[i]);

  Imprimir(s1,"s1: ");

  vector<int> v1;
  srand(time(NULL));

  for(int i=0; i<5; ++i)
    v1.push_back(rand());

  set<int,greater<int> >::key_compare kcomp = s1.key_comp();
  sort(v1.begin(),v1.end(),kcomp);
  Imprimir(v1,"\nv1: ");
}
