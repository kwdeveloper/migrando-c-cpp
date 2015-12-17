#include <iostream>
#include <exception>

using namespace std;

void fterm()
{
  cerr << "fterm: erro inesperado\n";
  exit(-1);
}

void f()
{
  // codigo da funcao ...

  // alguma condicao dispara este erro
  throw('E');

  // mais codigo ...
}

int main( )
{
  set_terminate(fterm);

  try
  {
    f();
  }
  catch(exception &e)
  {
    cerr << e.what();
  }
}
