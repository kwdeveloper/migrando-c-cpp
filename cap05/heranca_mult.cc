#include <iostream>

using namespace std;

class AnimalMarinho
{
  public:
    string Alimentar();
};

string AnimalMarinho::Alimentar()
{
  return "animais e vegetais marinhos";
}

class Mamifero
{
  public:
    string Alimentar();
};

string Mamifero::Alimentar()
{
  return "filhotes alimentam-se do leite materno";
}

class Baleia: public AnimalMarinho, public Mamifero
{
};

int main()
{
  Baleia b1;

  cout << "Baleias alimentam-se de:\n";
  cout << "- " << b1.AnimalMarinho::Alimentar() << endl;
  cout << "- " << b1.Mamifero::Alimentar();
}
