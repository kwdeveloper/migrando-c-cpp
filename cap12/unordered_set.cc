#include <iostream>
#include <boost/unordered_set.hpp>

using namespace std;
using namespace boost;

int main()
{
  int arr[] = {10,-1,3,5,-5,12,7,6,15,-21,4};
  typedef unordered_set<int> uset;
  uset us;

  for(unsigned int i=0; i<(sizeof(arr)/sizeof(int)); ++i)
    us.insert(arr[i]);

  for(uset::iterator it=us.begin(); it!=us.end(); ++it)
    cout << *it << ' ';
}
