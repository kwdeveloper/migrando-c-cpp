#include <iostream>
#include <set>

using namespace std;

int main()
{
  set<int> s1;
  s1.insert(10);
  s1.insert(1);
  s1.insert(25);
  s1.insert(30);
  s1.insert(-5);
  s1.insert(250);
  s1.insert(-15);
  s1.insert(100);

  set<int>::iterator it;

  cout << "Elementos de s1: ";
  for(it=s1.begin(); it!=s1.end(); ++it)
    cout << *it << " ";

  set<int>::iterator ini = s1.lower_bound(1);
  set<int>::iterator fim = s1.upper_bound(100);

  cout << "\nElementos entre 1 e 100: ";
  for(it=ini; it!=s1.end() && it!=fim; ++it)
    cout << *it << " ";
}
