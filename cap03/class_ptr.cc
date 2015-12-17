#include <iostream>
#include <string>

using namespace std;

class C
{
  public:
    C() {x = new int;}
    ~C() {delete x;}
    void SetX(const int &i) {*x = i;}
    int GetX() {return *x;}

  private:
    int *x;
};

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

  C c2;
  c2 = c1;
  ImprimirX("c2", c2);
  cout << endl;

  c2.SetX(200);
  ImprimirX("c1", c1);
  ImprimirX("c2", c2);
  cout << endl;

  C c3(c1);
  ImprimirX("c1", c1);
  ImprimirX("c3", c3);
  cout << endl;

  c3.SetX(300);
  ImprimirX("c1", c1);
  ImprimirX("c2", c2);
  ImprimirX("c3", c3);
}
