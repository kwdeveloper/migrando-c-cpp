#include <iostream>
#include <set>
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
  set<int> s1;
  s1.insert(1);
  s1.insert(-2);
  s1.insert(-5);
  s1.insert(3);
  Imprimir(s1,"s1: ", " ");

  set<int> s2;
  s2.insert(1);
  s2.insert(10);
  s2.insert(21);
  Imprimir(s2,"\ns2: ", " ");

  set<int> s3;
  for(int i=0; i<10; ++i)
    s3.insert(i);

  merge( s1.begin(),s1.end(),s2.begin(),s2.end(),
         inserter(s3,s3.begin()) );
  Imprimir(s3,"\ns3: ", " ");

  vector<int> v(7,0);
  merge(s1.begin(),s1.end(),s2.begin(),s2.end(),v.begin());
  Imprimir(v,"\nv : ", " ");
}
