#include <iostream>

using namespace std;

void ola(const string &s="desconhecido")
{
  cout << "Ola " << s << endl;
}

int main(int argc, char *argv[])
{
  if(argc > 1)
    ola(argv[1]);
  else
    ola();
}
