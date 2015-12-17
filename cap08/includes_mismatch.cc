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
  int arr[] = {5,10,-3,5,12,8,5,-3,11,-15};
  multiset<int> ms1;

  for(int i=0; i<(sizeof(arr)/sizeof(int)); ++i)
    ms1.insert(arr[i]);

  Imprimir(ms1,"ms1: ");

  typedef multiset<int>::iterator iter ;

  iter posi=ms1.begin();
  advance(posi,5);
  multiset<int> ms2(ms1.begin(),posi);

  Imprimir(ms2,"\nms2: ");

  cout << endl << boolalpha << "ms2 pertence a ms1? ";
  cout << includes( ms1.begin(),ms1.end(),
                    ms2.begin(),ms2.end());
  cout << endl;

  pair<iter,iter> pi = mismatch(ms1.begin(),ms1.end(),
                                ms2.begin());

  cout << "1o de ms1 elemento a diferir: ";
  if(pi.first!=ms1.end())
    cout << *(pi.first) << endl;

  cout << "1o elemento de ms2 a diferir: ";
  if(pi.second!=ms2.end())
    cout << *(pi.second) << endl;
}
