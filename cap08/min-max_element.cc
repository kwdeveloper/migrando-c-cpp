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

template<typename T> T MinElement(const T &it1, const T &it2)
{
  return min_element(it1,it2);
}

template<typename T> T MaxElement(const T &it1, const T &it2)
{
  return max_element(it1,it2);
}

int main()
{
  int arr[] = {5,10,-3,5,12,8,5,-3,-15,11};
  list<int> lst(arr,arr+sizeof(arr)/sizeof(int));

  Imprimir(lst,"list : ");

  cout << "\nmenor: " <<
    *(MinElement(lst.begin(),lst.end()));
  cout << "\nmaior: " <<
    *(MaxElement(lst.begin(),lst.end()));
}
