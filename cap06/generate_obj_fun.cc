#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void Imprimir( const T &c,
               const string &header=" ",
               const string &sep=" ")
{
  typename T::const_iterator it;

  cout << header;

  for( it=c.begin(); it!=c.end(); ++it)
    cout << *it << sep;
}

class Fgen : public binary_function<int,int,int>
{
  public:
    Fgen(const int &v = 0, const int &p = 1);
    int operator()();

  private:
    int val, passo;
};

Fgen::Fgen(const int &v, const int &p)
{
  val = v;
  passo = p;
}

int Fgen::operator()()
{
  val += passo;
  return val;
}


int main()
{
  vector<int> v(10,0);
  Imprimir(v, "\nv: ");

  Fgen fgen(0,1);
  generate(v.begin(),v.end(),fgen);
  Imprimir(v, "\nv: ");
}
