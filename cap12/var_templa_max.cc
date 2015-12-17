// Necessita compilador compativel com C++0x

#include <iostream>

using namespace std;

template<typename T> T vtmax(const T &x1, const T &x2)
{
  return max(x1,x2);
}

template<typename T, typename ...TList>
  T vtmax(const T &x1, const TList &...tlist)  
{
  return max(x1,(vtmax(tlist...)));
}  

int main()
{
  int x1 = vtmax(10,30,20);
  cout << x1 << " ";
  
  double x2 = vtmax(3.14,2.71,155.2,10.);      
  cout << x2 << " ";

  int x3 = vtmax(23,11);
  cout << x3;

}
