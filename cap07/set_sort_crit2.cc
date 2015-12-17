#include <iostream>
#include <set>
#include <string>

using namespace std;

template<typename T>
void ImprimirPair( const T &c,
               const string &header=" ",
               const string &sep=" ")
{
  typename T::const_iterator it;

  cout << header;

  for( it=c.begin(); it!=c.end(); ++it)
    cout << it->first << "," << it->second << sep;
}

class Fsort : public binary_function< bool,
                                      pair<int,string>,
                                      pair<int,string> >
{
  public:
    bool operator()( const pair<int,string> &p1,
                     const pair<int,string> &p2 )
    {return (p1.second < p2.second);};
};

int main()
{
  pair<int,string>
    arr[] = { make_pair(1,"C"),
              make_pair(-1,"C++"),
              make_pair(5,"Pascal"),
              make_pair(3,"Smalltalk") };
  unsigned int sz = 4;

  set<pair<int,string> > s1;
  for(unsigned int i=0; i<sz; ++i)
    s1.insert(arr[i]);

  ImprimirPair(s1,"ordem padrao crescente\n","\n");

  set<pair<int,string>,greater<pair<int,string> > > s2;
  for(unsigned int i=0; i<sz; ++i)
    s2.insert(arr[i]);

  ImprimirPair(s2,"\nordem padrao decrescente\n","\n");

  set<pair<int,string>,Fsort > s3;
  for(unsigned int i=0; i<sz; ++i)
    s3.insert(arr[i]);

  ImprimirPair(s3,"\nordem crescente p/ 2o elemento\n","\n");
}
