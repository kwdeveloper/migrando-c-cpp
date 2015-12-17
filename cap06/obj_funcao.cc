#include <iostream>

using namespace std;

class Teste : public binary_function<int,int,int>
{
  public:
    int operator() (const int &a, const int &b)
    {
      return a+b;
    }
};

int main()
{
  Teste t;

  cout << t(10,11) << endl;
}
