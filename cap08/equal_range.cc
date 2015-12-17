#include <iostream>
#include <list>

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
  int arr[] = {5,10,-3,5,12,8,5,-3,10,-15};
  list<int> lst(arr,arr+sizeof(arr)/sizeof(int));

  lst.sort();
  Imprimir(lst,"elementos da lista    : ");

  typedef list<int>::iterator iter;

  pair<iter,iter> pit =
    equal_range(lst.begin(),lst.end(),10);

  cout << "\nelementos iguais a 10 : ";
  if(pit.first!=lst.end())
  {
    for(iter it=pit.first; it!=pit.second; ++it)
      cout << *it << " ";
  }

  iter it1 = lower_bound(lst.begin(),lst.end(),0);
  iter it2 = upper_bound(lst.begin(),lst.end(),10);

  cout << "\nelementos 0 <= x <= 10: ";
  if(it1!=lst.end())
  {
    for(iter it=it1; it!=it2; ++it)
      cout << *it << " ";
  }
}
