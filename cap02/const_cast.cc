#include <iostream>

using namespace std;

void f(int *a)
{
  (*a) *= 1000;
}

int main()
{
  int i = 10;
  const int *ptr = &i;

  f(const_cast<int *>(ptr));
  cout << *ptr << " " << i << endl;
}
