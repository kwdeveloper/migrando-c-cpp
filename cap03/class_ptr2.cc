#include <iostream>
#include <string>

using namespace std;

class C
{
  public:
    C();
    C(const C &);
    ~C() {delete x;};
    C& operator =(const C &);
    void SetX(const int &i) {*x = i;};
    int GetX() {return *x;};

  private:
    int *x;
};

C::C()
{
  cout << "chamou construtor\n";

  x = new int;
}

C::C(const C &c)
{
  cout << "chamou construtor de copia\n";

  x = new int;
  *x = *(c.x);
}

C& C::operator =(const C &c)
{
  if(this == &c)
    return *this;

  cout << "chamou operador =\n";

  *x = *(c.x);
  return *this;
}

void ImprimirX(const string &nome, C &c)
{
  cout << nome << ": " << c.GetX() << endl;
}

int main()
{
  C c1;
  c1.SetX(100);
  ImprimirX("c1", c1);
  cout << endl;

  C c2 = c1;
  c2.SetX(200);
  ImprimirX("c1", c1);
  ImprimirX("c2", c2);
  cout << endl;

  C c3(c1);
  c3.SetX(300);
  ImprimirX("c1", c1);
  ImprimirX("c2", c2);
  ImprimirX("c3", c3);
  cout << endl;

  C c4;
  c4 = c1;
  c4.SetX(400);
  ImprimirX("c1", c1);
  ImprimirX("c2", c2);
  ImprimirX("c3", c3);
  ImprimirX("c4", c4);
}
