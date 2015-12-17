#include <iostream>

using namespace std;

inline void p(const string &str)
{
  cout << str << endl;
}

class Base
{
  public:
    Base() {p("Base: construtor");};
    ~Base() {p("Base: destrutor");};
};

class Deriv1 : public Base
{
  public:
    Deriv1() {p(" Deriv1: construtor");};
    ~Deriv1() {p(" Deriv1: destrutor");};
};

class Deriv2 : public Deriv1
{
  public:
    Deriv2() {p("  Deriv2: construtor");};
    ~Deriv2() {p("  Deriv2: destrutor");};
};

int main()
{
  Deriv2 d2;
}
