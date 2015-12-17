#include <iostream>
#include <cstdlib>

using namespace std;

const float PI = 3.1415926535;

int main(int argc, char *argv[])
{
  if(argc < 2)
    return -1;

  const double r = atof(argv[1]);

  cout << "A area do circulo de raio "
       << r
       << " e' "
       << PI*r*r
       << endl;
}
