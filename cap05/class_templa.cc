#include <iostream>
#include <vector>

using namespace std;

template<typename T> class Valores
{
  public:
    void Imprimir(const char &separador = ' ');
    void Inserir(const T &);
    T GetSoma();

  private:
    vector<T> v;
};

template<typename T>
void Valores<T>::Imprimir(const char &separador)
{
  for(unsigned int i=0; i<v.size(); ++i)
    cout << v[i] << separador;
}

template<typename T>
void Valores<T>::Inserir(const T &val)
{
  v.push_back(val);
}

template<typename T> T Valores<T>::GetSoma()
{
  T soma = T();

  for(unsigned int i=0; i<v.size(); ++i)
    soma += v[i];

  return soma;
}

int main()
{
  Valores<int> vint;
  vint.Inserir(10);
  vint.Inserir(20);
  vint.Inserir(30);

  cout << "Valores: "; vint.Imprimir();
  cout << "\nTotal  : " << vint.GetSoma();

  Valores<float> vfloat;
  vfloat.Inserir(3.14);
  vfloat.Inserir(2.71);
  vfloat.Inserir(1.35);

  cout << "\n\n";
  cout << "Valores: "; vfloat.Imprimir();
  cout << "\nTotal  : "<< vfloat.GetSoma();
}
