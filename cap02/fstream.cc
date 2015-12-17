#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  ofstream f_out;
  f_out.open("teste.txt");

  if(! f_out.good())
    return -1;

  for( int i=0; i<10; ++i )
    f_out << "Linha "  << i << endl;

  f_out.close();

  ifstream f_in;
  f_in.open("teste.txt");

  if(! f_in.good())
    return -1;

  string str;

  while(f_in >> str)
    cout << str << endl;

  f_in.close();
}
