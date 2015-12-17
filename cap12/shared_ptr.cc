#include <iostream>
#include <boost/shared_ptr.hpp>

using namespace std;
using namespace boost;

class C
{
  public:
    C(const int &par): x(par) {}
    ~C() {cout << "~C(" << x << ")\n";}
    int x;
};

int main()
{
  shared_ptr<C> sp1(new C(123));
  cout << "C(" << sp1->x << "): " << sp1.use_count() << '\n';

  shared_ptr<C> sp2(sp1);
  cout << "C(" << sp1->x << "): " << sp1.use_count() << '\n';

  sp2.reset(new C(987));
  cout << "C(" << sp1->x << "): " << sp1.use_count() << '\n';
  cout << "C(" << sp2->x << "): " << sp2.use_count() << '\n';
}
