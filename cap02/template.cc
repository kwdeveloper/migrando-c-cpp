#include <iostream>

using namespace std;

template<typename T> T tmax(const T &x, const T &y)
{
  return (x > y) ? x : y;
}

int main()
{
 cout << tmax(3, 5) << endl;
 cout << tmax(3.14, 2.71) << endl;
 cout << tmax<float>(10, 99.5) << endl;
}
