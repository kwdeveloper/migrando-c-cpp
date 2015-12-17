#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main()
{
  pair<int,string> pis1(100,"wilson");
  pair<int,string> pis2(1000,"kawano");

  pair<float,char> pfc1(3.14,'W');
  pair<float,char> pfc2(3.14,'K');

  // saida de dados
  cout << boolalpha;
  cout << pis1.first << "," << pis1.second << "  "
       << pis2.first << "," << pis2.second << endl;
  cout << pfc1.first << "," << pfc1.second << "  "
       << pfc2.first << "," << pfc2.second << endl;

  // comparacao
  cout << (pis1 < pis2)  << " "
       << (pis1 == pis2) << " "
       << (pis1 > pis2)  << endl;
  cout << (pfc1 < pfc2)  << " "
       << (pfc1 == pfc2) << " "
       << (pfc1 > pfc2) << endl;

  // atribuicao
  // promocao int para float
  pair<float,string> pfs1 = pis1;
  cout << pfs1.first << endl;
}
