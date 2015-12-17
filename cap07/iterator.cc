#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;

  for(int i=0; i<10; ++i)
    v.push_back(i);

  cout << "Ordem normal : ";

  for( vector<int>::iterator it=v.begin();
       it!=v.end();
       ++it )
    cout << *it << " ";

  cout << "\nOrdem reversa: ";

  for( vector<int>::reverse_iterator rit=v.rbegin();
       rit!=v.rend();
       ++rit )
    cout << *rit << " ";
}
