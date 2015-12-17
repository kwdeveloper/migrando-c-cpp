#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
  string nome;
  cout << "Digite seu nome : ";
  getline(cin, nome);

  string str_idade;
  cout << "Digite sua idade: ";
  getline(cin, str_idade);

  long int idade = strtol(str_idade.c_str(), NULL, 10);

  if(errno)
    idade = 0;

  cout << "Ola "
       << nome
       << ", voce tem "
       << idade
       << " anos."
       << endl;
}
