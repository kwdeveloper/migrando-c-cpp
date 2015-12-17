#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;

  for(int i=0; i<10; ++i)
    v.push_back(i);

  cout << boolalpha
       << v.empty() << " "
       << v.size()  << " "
       << v.max_size()
       << endl;
}
