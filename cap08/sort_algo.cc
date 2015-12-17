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

void Sort(vector<int> v)
{
  sort(v.begin(),v.end());
  Imprimir(v,"\nsort            : ", " ");
}

void PartialSort(vector<int> v)
{
  partial_sort(v.begin(),v.begin()+5,v.end());
  Imprimir(v,"\npartial_sort (5): ", " ");
}

void NthElement(vector<int> v)
{
  nth_element(v.begin(),v.begin()+5,v.end());
  Imprimir(v,"\nnth_element (5) : ", " ");
}

int main()
{
  int arr[] = {2,6,12,9,15,4,1,5,10,13,8,14,11,7,3};
  int n_elem = sizeof(arr)/sizeof(int);
  vector<int> v(arr,arr+n_elem);

  Imprimir(v,"Lista original  : ", " ");

  Sort(v);
  PartialSort(v);
  NthElement(v);
}
