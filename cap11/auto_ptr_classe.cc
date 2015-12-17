#include <memory>
#include <iostream>

using namespace std;

class Teste
{
  public:
    Teste(const int &i = 0);
    Teste(const Teste &t);
    Teste& operator =(const Teste &t);
    int GetX() const {return *x;}

  private:
    auto_ptr<int> x;

    friend ostream& operator <<(ostream&, const Teste&);
};

Teste::Teste(const int &i)
{
  x = auto_ptr<int>(new int(i));
}

Teste::Teste(const Teste &t)
{
  x = auto_ptr<int>(new int(t.GetX()));
}

Teste& Teste::operator =(const Teste &t)
{
  if(!(this == &t))
    *x = t.GetX();

  return *this;
}

ostream& operator <<(ostream &os, const Teste &t)
{
  os << *(t.x);

  return os;
}

int main()
{
  Teste t1, t2(100);

  cout << t1 << ", " << t2 << endl;
  t1 = t2;
  cout << t1 << ", " << t2 << endl;

  Teste t3(t1);
  cout << t1 << ", " << t2 << ", " << t3 << endl;
}
