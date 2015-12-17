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
  int arr1[] = {1,2,3};
  vector<int> v(arr1,arr1+3);

  Imprimir(v,"Sequencia next_permutation\n"," ");

  while(next_permutation(v.begin(),v.end()))
  {
    Imprimir(v,"\n"," ");
  }

  int arr2[] = {3,2,1};
  copy(arr2,arr2+3,v.begin());

  Imprimir(v,"\n\nSequencia prev_permutation\n"," ");

  while(prev_permutation(v.begin(),v.end()))
  {
    Imprimir(v,"\n"," ");
  }

}
