#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  ifstream f_in;
  f_in.exceptions( ifstream::eofbit |
                   ifstream::failbit |
                   ifstream::badbit );

  try
  {
    f_in.open(argv[1]);

    while(!f_in.eof())
    {
      char ch = f_in.get();
      cout << ch << " ";
    }
  }
  catch(exception &e)
  {
    if(!f_in.eof())
      cout << e.what();
  }

  f_in.close();
}
