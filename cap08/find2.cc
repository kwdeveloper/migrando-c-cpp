#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
  int arr[] = {5,10,-3,5,12,5,8,5,-3,11,-15};
  vector<int> v1(arr,arr+sizeof(arr)/sizeof(int));

  typedef vector<int>::iterator v_it;

  v_it it1=find(v1.begin(),v1.end(),5);

  if(it1!=v1.end())
  {
    v_it it2=find_end(v1.begin(),v1.end(),it1,it1+1);

    for(v_it it=it1; it<=it2 && it!=v1.end(); ++it)
      cout << *it << " ";
   }
}
