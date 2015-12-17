#include <iostream>
#include <vector>
#include <cstring>

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

bool char_comp(const char *s1, const char *s2)
{
  return (strcmp(s1,s2) < 0);
}

int main()
{
  vector<char *> vch;
  char s1[] = "tomate";
  char s2[] = "laranja";
  char s3[] = "abacaxi";
  char s4[] = "espinafre";

  vch.push_back(s1);
  vch.push_back(s2);
  vch.push_back(s3);
  vch.push_back(s4);

  Imprimir(vch,"original:\n","\n");
  sort(vch.begin(),vch.end(),char_comp);
  Imprimir(vch,"\nordenado:\n","\n");
}
