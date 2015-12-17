#include <iostream>
#include <stdexcept>

using namespace std;

float f(const int &a, const int &b)
{
  if(b == 0)
    throw('1');

  return (float)a / (float)b;
}

int main(int argc, char *argv[])
{

  try
  {
    if(argc < 3)
      throw(1);

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    cout << f(a,b) << endl;
  }
  catch(int e)
  {
    cout << e << ": erro de sintaxe\n";
  }
  catch(char e)
  {
    cout << e << ": erro divisao por 0\n";
  }

}
