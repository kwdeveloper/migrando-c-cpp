#include <iostream>
#include <typeinfo>

using namespace std;

class A
{
  public:
    virtual ~A() { }
};

class B : public A { };

class C { };
class D : public C { };

int main()
{
  B b;
  A *pa = &b;
  A &ra = b;

  cout << "pa: " << typeid(*pa).name() << endl;
  cout << "ra: " << typeid(ra).name() << endl;

  D d;
  C *pc = &d;
  C &rc = d;
  cout << "pc: " << typeid(*pc).name() << endl;
  cout << "rc: " << typeid(rc).name() << endl;
}
