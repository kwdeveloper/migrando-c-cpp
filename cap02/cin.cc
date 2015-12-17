#include <iostream>
#include <string>

using namespace std;

int main()
{
  string nome;
  int idade;

  cout << "Digite seu nome : ";
  cin >> nome;

  cout << "Digite sua idade: ";
  cin >> idade;

  cout << "Ola "
       << nome
       << ", voce tem "
       << idade
       << " anos."
       << endl;
}
