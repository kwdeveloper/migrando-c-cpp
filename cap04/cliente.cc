#include <iostream>
#include <string>

using namespace std;

class Cliente
{
  public:
    void SetNome(const string &str) {nome = str;}
    string GetNome() {return nome;}

  private:
    string nome;
};

class ClienteEspecial : public Cliente
{
  public:
    ClienteEspecial() {pontos = 0;}
    int GetPontos() {return pontos;}
    void AtualizarPontos(const int &p) {pontos += p;}

  private:
    int pontos;
};

int main()
{
  Cliente c1;
  c1.SetNome("Maria");

  ClienteEspecial ce1;
  ce1.SetNome("Jose");
  ce1.AtualizarPontos(100);

  cout << c1.GetNome() << endl;
  cout << ce1.GetNome() << "," << ce1.GetPontos() << endl;
}
