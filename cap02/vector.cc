#include <vector>
#include <iostream>

using namespace std;

void Imprimir(vector<int> v)
{
  for(unsigned int i=0; i<v.size(); ++i)
    cout << v[i] << ",";

  cout << endl;
}

int main()
{
  vector<int> v;

  cout << "Incluindo elementos:\n";

  for(int i=0; i<10; ++i)
  {
    v.push_back(i);
    Imprimir(v);
  }

  cout << "\nEliminando os elemento um a um:\n";

  while( v.size() )
  {
    Imprimir(v);
    v.pop_back();
  }
}
