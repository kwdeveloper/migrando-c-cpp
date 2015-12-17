#include <iostream>

using namespace std;

class Teste
{
  public:
    Teste();

  private:
    static int contador;
};

Teste::Teste()
{
  ++contador;
  cout << contador << endl;
}

int Teste::contador = 0;

int main()
{
  Teste t1, t2, t3, t4, t5;
}
