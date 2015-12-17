#include <memory>
#include <iostream>

using namespace std;

template<typename T1, typename T2>
  void f(const auto_ptr<pair<T1,T2> > &ptr)
{
  cout << ptr->first << "," << ptr->second << endl;
}

int main()
{
  auto_ptr<pair<int,bool> >
    ptr(new pair<int,bool>(10,false));
  f(ptr);

  *ptr = make_pair<int,bool>(-20,true);
  f(ptr);
}
