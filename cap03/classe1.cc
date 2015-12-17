#include <iostream>

using namespace std;

class Teste
{
  public:
    Teste();
    ~Teste();

  private:
    int x;
};

Teste::Teste()
{
  x = 0;
  cout << "Construtor: " << x << endl;
}

Teste::~Teste()
{
  x++;
  cout << "Destrutor : " << x << endl;
}

int main()
{
  Teste teste;
}
