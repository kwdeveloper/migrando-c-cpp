#include <iostream>
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
  int arr1[] = {8,5,-3,11,-15};
  int arr2[] = {5,10,-3,5,12};
  multiset<int> ms1, ms2;

  for(int i=0; i<(sizeof(arr1)/sizeof(int)); ++i)
    ms1.insert(arr1[i]);

  for(int i=0; i<(sizeof(arr1)/sizeof(int)); ++i)
    ms2.insert(arr2[i]);

  multiset<int> ms3 = ms1;
  Imprimir(ms1,"ms1: ");
  Imprimir(ms2,"\nms2: ");
  Imprimir(ms3,"\nms3: ");

  cout << boolalpha << endl;
  cout << "ms1 e ms2: "
       << lexicographical_compare( ms1.begin(),ms1.end(),
                                   ms2.begin(),ms2.end())
       << endl;
  cout << "ms1 e ms3: "
       << lexicographical_compare( ms1.begin(),ms1.end(),
                                   ms3.begin(),ms3.end())
       << endl;
}
