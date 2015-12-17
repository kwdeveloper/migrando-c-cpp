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
  int arr[] = {0,1,2,3,4,5,6,7,8,9};

  vector<int> v1(arr,arr+sizeof(arr)/sizeof(int));
  Imprimir(v1,"original   : ");

  srand ( unsigned ( time (NULL) ) );

  random_shuffle(v1.begin(),v1.end());
  Imprimir(v1,"\naleatorio 1: ");

  random_shuffle(v1.begin(),v1.end());
  Imprimir(v1,"\naleatorio 2: ");
}
