#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cliente
{
  public:
    Cliente() {};
    Cliente(const string &str) {nome = str;};
    virtual ~Cliente() {};
    string GetNome() {return nome;};
    virtual float GetTaxaEmprestimo() {return 15.;};

  protected:
    string nome;
};

class ClienteEspecial : public Cliente
{
  public:
    ClienteEspecial() {};
    ClienteEspecial(const string &, const int &p = 0);
    int GetPontos() {return pontos;};
    void AtualizarPontos(const int &p) {pontos += p;};
    float GetTaxaEmprestimo() {return 9.5;};

  private:
    int pontos;
};

ClienteEspecial::ClienteEspecial( const string &str,
                                  const int &p )
{
  nome = str;
  pontos = p;
}


int main()
{
  Cliente c1("Maria");

  ClienteEspecial ce1("Jose", 100);

  vector<Cliente *> v_cliente;

  v_cliente.push_back(&c1);
  v_cliente.push_back(&ce1);

  for(unsigned int i=0; i<v_cliente.size(); ++i)
  {
    cout << v_cliente[i]->GetNome()
         << ", "
         << v_cliente[i]->GetTaxaEmprestimo()
         << endl;
  }
}
