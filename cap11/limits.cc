#include <limits>
#include <iostream>

using namespace std;

template<typename T> void Limites(const string &str)
{
  cout << str << " - ";
  cout << "min: " << numeric_limits<T>::min() << " ";
  cout << "max: " << numeric_limits<T>::max() << " ";
  cout << "sinal: " << numeric_limits<T>::is_signed << " ";
  cout << endl;
}

int main()
{
  Limites<char>("char ");
  Limites<int>("int  ");
  Limites<unsigned long>("ulong");
  Limites<float>("float");
}
