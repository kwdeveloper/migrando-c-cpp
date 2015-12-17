#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void ImprimirArray(const int *arr, const int &tamanho)
{
  for(int i=0; i<tamanho; ++i)
    cout << arr[i] << endl;
}

int main()
{
  vector<int> v(10,0);

  srand(time(NULL));
  generate(v.begin(),v.end(),rand);
  ImprimirArray(&v[0],v.size());
}
