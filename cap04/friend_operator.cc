#include <iostream>

using namespace std;

class Teste
{
  public:
    Teste(const int &p1, const int &p2, const int &p3):
      x(p1), y(p2), z(p3) {}

  private:
    int x, y, z;

    friend ostream& operator <<(ostream&, const Teste&);
};

ostream& operator <<(ostream &saida, const Teste &t)
{
  saida << t.x << "," << t.y << "," << t.z;
  return saida;
}

int main()
{
  Teste t(10,-5,100);
  cout << t << endl;
}
