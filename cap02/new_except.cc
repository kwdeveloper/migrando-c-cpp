#include <iostream>

using namespace std;

int main()
{
  try
  {
    int *ptr = new int[INT_MAX/sizeof(int)];
  }
  catch(bad_alloc)
  {
    cout << "Erro alocacao memoria\n";
  }
}
