#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
  vector<int> v;
  typedef vector<int>::iterator iter;

  srand(time(NULL));

  // inclui valores aleatorios no vetor
  for(int i=0; i<5; ++i)
    v.push_back(rand());

  cout << "Original: ";
  for(iter it=v.begin(); it!=v.end(); ++it)
    cout << *it << " ";

  cout << "\nPares   : ";
  iter it = v.begin();

  while(true)
  {
    if(it == v.end())
      break;

    it = find_if(it,v.end(),not1(bind2nd(modulus<int>(),2)));

    if(it != v.end())
    {
      cout << *it << " ";
      ++it;
    }
  }
}
