#include <iostream>
#include <stdexcept>

using namespace std;

int main(int argc, char *argv[])
{

  try
  {
    if(argc < 3)
      throw(1);

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if(b == 0)
      throw('1');

    cout << (float)a / (float)b;
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
