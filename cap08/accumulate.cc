#include <iostream>
#include <vector>
#include <numeric>
#include <time.h>

using namespace std;

int main()
{
  vector<int> v;

  srand(time(NULL));

  for(int i=0; i<4; ++i)
    v.push_back(rand()%10);

  cout << "Numeros aleatorios: ";
  for(int i=0; i<4; ++i)
    cout << v[i] << " ";

  cout << "\nSoma         : " <<
    accumulate(v.begin(),v.end(),0);
  cout << "\nMultiplicacao: " <<
    accumulate(v.begin(),v.end(),1,multiplies<int>());
}
