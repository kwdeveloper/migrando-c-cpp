#include <iostream>

using namespace std;

class Base
{
  public:
    virtual ~Base() {cout << "destrutor Base\n";};
};

class Derivada : public Base
{
  public:
    ~Derivada() {cout << "destrutor Derivada\n";};
};

int main()
{
  Base *ptr = new Derivada;
  delete ptr;
}
