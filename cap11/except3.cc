#include <iostream>
#include <stdexcept>

using namespace std;

float f(const int &a, const int &b)
{
  if(b == 0)
    throw invalid_argument("ERRO: divisor 0");

  return (float)a / (float)b;
}

int main(int argc, char *argv[])
{

  try
  {
    if(argc < 3)
      throw
       invalid_argument("ERRO: num argumentos invalido");

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    cout << f(a,b) << endl;
  }
  catch(exception &e)
  {
    cout << e.what() << endl;
  }

}
