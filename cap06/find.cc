#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
  set<int> s1;
  s1.insert(1000);
  s1.insert(250);
  s1.insert(5200);
  s1.insert(-1);

  set<int>::iterator s_ini = s1.find(250);

  cout << "Set - valores >= 250: ";
  if(s_ini != s1.end())
  {
    for(set<int>::iterator it=s_ini; it!=s1.end(); ++it)
      cout << *it << " ";
  }

  vector<int> v1;
  v1.push_back(1250);
  v1.push_back(250);
  v1.push_back(520);
  v1.push_back(-1);

  vector<int>::iterator v_ini =
    find(v1.begin(),v1.end(),250);

  cout << "\nVector - valores a partir do elemento 250: ";
  if(v_ini != v1.end())
  {
    for(vector<int>::iterator it=v_ini; it!=v1.end(); ++it)
      cout << *it << " ";
  }
}
