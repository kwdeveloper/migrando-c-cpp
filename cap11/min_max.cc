#include <iostream>
#include <algorithm>

using namespace std;

class Pessoa
{
  public:
    Pessoa(const string &n, const int &i):
      nome(n), idade(i) {}
    string GetNome() {return nome;}
    int GetIdade() {return idade;}

  private:
    string nome;
    int idade;
};

bool CompNome(Pessoa p1, Pessoa p2)
{
  return (p1.GetNome() < p2.GetNome());
}

int main()
{
  cout << "Minimo e maximo de tipos primitivos";
  cout << "\n- max(20,10)  : " << max(20,10);
  cout << "\n- min(10,3.14): " << min<float>(10,3.14);

  cout << "\n\nMinimo e maximo de pares";
  pair<int,int> p1(10,200), p2(10,30), p3(-1,30);

  pair<int,int> pmin = min(p1,p2);
  cout << "\n- min((10,200),(10,30)): ";
  cout << pmin.first << "," << pmin.second;

  pair<int,int> pmax = max(p1,p3);
  cout << "\n- max((10,200),(-1,30)): ";
  cout << pmax.first << "," << pmax.second << endl;

  cout << "\n\nMinimo e maximo de estruturas";
  Pessoa pessoa1("Maria",20);
  Pessoa pessoa2("Zeca",10);
  Pessoa pessoa3("Zaqueu",10);

  Pessoa pessoa_min = min(pessoa1,pessoa2,CompNome);
  cout << "\nmin({Maria,20},{Zeca,10}): "
       << pessoa_min.GetNome() << ","
       << pessoa_min.GetIdade();

  Pessoa pessoa_max = max(pessoa2,pessoa3,CompNome);
  cout << "\nmax({Zeca,10},{Zaqueu,10}): "
       << pessoa_max.GetNome() << ","
       << pessoa_max.GetIdade();
}
