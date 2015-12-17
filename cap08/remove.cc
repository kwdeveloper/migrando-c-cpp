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

bool Impar(const int &x)
{
  return (x%2);
}

int main()
{
  int arr[] = {3,2,0,9,1,4,5,7,0,8,6,0};
  vector<int> v(arr,arr+sizeof(arr)/sizeof(int));
  Imprimir(v,"v original: ");

  vector<int>::iterator pos;
  pos = remove(v.begin(),v.end(),0);
  Imprimir(v,"\nv remove  : ");

  v.erase(pos,v.end());
  Imprimir(v,"\nv erase   : ");

  v.erase( remove_if(v.begin(),v.end(),Impar) ,
           v.end() );
  Imprimir(v,"\nv par     : ");
}
