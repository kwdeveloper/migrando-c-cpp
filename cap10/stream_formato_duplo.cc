#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ostream os1(cout.rdbuf());
  os1.setf(ios_base::fixed, ios_base::floatfield);
  os1.precision(4);

  ostream os2(cout.rdbuf());
  os2.setf(ios_base::scientific, ios_base::floatfield);
  os2.precision(3);

  float f = 3.141516;

  os1 << f << endl;
  os2 << f << endl;
}
