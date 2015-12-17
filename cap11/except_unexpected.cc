#include <iostream>
#include <exception>

using namespace std;

void funex()
{
  cerr << "funex: erro inesperado\n";
  throw(0);
}

void f() throw(int)
{
  // codigo da funcao ...

  // alguma condicao dispara este erro
  throw('E');

  // mais codigo ...
}

int main( )
{
  set_unexpected(funex);

  try
  {
    f();
  }
  catch(int e)
  {
    cerr << e;
  }
  catch(...)
  {
    cerr << "Outro tipo de erro";
  }
}
