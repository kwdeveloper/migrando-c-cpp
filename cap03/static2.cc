#include <iostream>

using namespace std;

class Teste
{
  public:
    void f();
};

void Teste::f()
{
  static int contador = 0;
  int comum = 0;

  ++contador;
  ++comum;

  cout << contador << " " << comum << endl;
}

int main()
{
  Teste t1, t2, t3;

  t1.f();
  t2.f();
  t3.f();
}
