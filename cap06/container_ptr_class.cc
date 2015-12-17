#include <iostream>
#include <list>
#include <string>

using namespace std;

class Pessoa
{
  public:
    Pessoa(const string &s): nome(s) {}
    string GetNome() const {return nome;}

  private:
    string nome;
};

bool Fcomp(const Pessoa *p1, const Pessoa *p2)
{
  return (p1->GetNome() < p2->GetNome());
}

Pessoa* CriarPessoa(const string &s)
{
  Pessoa *p;

  try
  {
    p = new Pessoa(s);
  }
  catch(bad_alloc)
  {
    cout << "Erro alocacao memoria\n";
    exit(-1);
  }

  return p;
}

int main()
{
  list<Pessoa *> lst;

  lst.push_back(CriarPessoa("Maria"));
  lst.push_back(CriarPessoa("Antonio"));
  lst.push_back(CriarPessoa("Zaqueu"));
  lst.push_back(CriarPessoa("Emerenciana"));

  lst.sort(Fcomp);

  typedef list<Pessoa *>::iterator iter;

  for(iter it=lst.begin(); it!=lst.end(); ++it)
    cout << (*it)->GetNome() << endl;

  for(iter it=lst.begin(); it!=lst.end(); ++it)
    delete *it;
}
