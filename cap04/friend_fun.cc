#include <iostream>

using namespace std;

class Base
{
  public:
    Base(const int &p1 = 0) {x = p1;}

  protected:
    int x;

    friend void f(const Base &);
};

class Derivada : public Base
{
  public:
    Derivada(const int &p1 = 0, const int &p2 = 0)
    {
      x = p1;
      y = p2;
    }

  private:
    int y;
};

void f(const Base &b)
{
  cout << b.x << endl;
}

int main()
{
  Base b(100);
  f(b);

  Derivada d(200,1000);
  f(d);
}
