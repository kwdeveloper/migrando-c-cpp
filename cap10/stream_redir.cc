#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
  ostream *os;

  if (argc > 1)
    os = new ofstream(argv[1]);
  else
    os = &cout;

  *os << "Redirecionando a saida...";

  if(os != &cout)
   delete os;
}
