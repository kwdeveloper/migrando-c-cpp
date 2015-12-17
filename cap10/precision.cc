#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  float e = exp(1);
  cout << e << endl;
  cout << setprecision(10) << e << endl;
  cout << scientific << e << endl;
}
