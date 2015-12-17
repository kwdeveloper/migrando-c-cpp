#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class Dados
{
  public:
    void Incluir(const int &x) {v.push_back(x);};
    int Get(const unsigned int &i) {return v.at(i);};

  private:
    vector<int> v;
};

int main()
{
  Dados d;

  for(int i=0; i<10; ++i)
    d.Incluir(i);

  unsigned int i = 0;

  while(true)
    try
    {
      cout << d.Get(i++) << " ";
    }
    catch(out_of_range)
    {
      cout << "\nERRO: elemento fora da faixa\n";
      exit(0);
    }
}
