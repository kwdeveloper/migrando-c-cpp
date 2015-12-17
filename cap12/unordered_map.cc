#include <iostream>
#include <boost/unordered_map.hpp>

using namespace std;
using namespace boost;

int main()
{
  typedef unordered_map<string,int> umap;
  umap lista;
  lista.insert(make_pair("Maria",12));
  lista.insert(make_pair("Zaqueu",15));
  lista.insert(make_pair("Ivan",12));
  lista.insert(make_pair("Ana",11));

  cout << "Incluir Ana: " << lista["Ana"] << "\n";
  cout << "Incluir Batista: " << lista["Batista"] << "\n\n";

  for(umap::iterator it=lista.begin(); it!=lista.end(); ++it)
    cout << it->first << "," << it->second << "\n";

  try
  {
    cout << "\nIvan: " << lista.at("Ivan") << '\n';
    cout << "\nAnanias: " << lista.at("Ananias") << '\n';
  }
  catch(exception e)
  {
    cout << "Ocorreu um erro na funcao at()\n";
  }
}
