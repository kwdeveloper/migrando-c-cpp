#include <iostream>

using namespace std;

class Teste
{
  public:
    void SetX(const int &);
    int GetX();

  private:
    int x;
};

void Teste::SetX(const int &i)
{
  x = i;
}

int Teste::GetX()
{
  return x;
}

int main()
{
  Teste t1;
  t1.SetX(0);
  cout << t1.GetX() << endl;
  t1.SetX(100);

  Teste t2;
  t2 = t1;
  cout << t2.GetX() << endl;

  Teste *ptr = &t1;
  ptr->SetX(200);
  cout << t1.GetX() << endl;

  Teste t3(t1);
  cout << t3.GetX() << endl;
}
