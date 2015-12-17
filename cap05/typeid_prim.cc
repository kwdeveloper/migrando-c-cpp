#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

int main()
{
  int i1 = 1;
  int i2 = 1000;
  float f = 3.14;
  string str = "C++";
  char *arr = "C++";

  cout << boolalpha << "Comparacoes\n";
  cout << "int == int: "
       << (typeid(i1) == typeid(i2)) << endl;
  cout << "int == float: "
       << (typeid(i1) == typeid(f)) << endl;
  cout << "string == char[]: "
       << (typeid(str) == typeid(arr)) << endl;
  cout << "int != char[]: "
       << (typeid(i1) != typeid(arr)) << endl;

  cout << "\nObtendo nomes para um ponteiro\n";
  cout << "Tipo do ponteiro char    : "
       << typeid(arr).name() << endl;
  cout << "Tipo do conteudo apontado: "
       << typeid(*arr).name() << endl;
}
