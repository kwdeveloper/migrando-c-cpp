#include <iostream>
#include <limits>

using namespace std;

int main()
{
  int idade = 0;

  while( (cout << "Qual e' a sua idade? ")
          && !(cin >> idade) )
  {
    cout << "Idade invalida!\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  cout << "Voce tem " << idade << " anos\n";
}
