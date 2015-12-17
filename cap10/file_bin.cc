#include <fstream>
#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char *argv[])
{
  if(argc < 3)
  {
    cout << "Sintaxe: " << argv[0] << " <arquivo> <C | D>\n";
    cout << "- C: codificar, D: decodificar\n";
    return -1;
  }

  char opt;
  char par = argv[2][0];

  if(par=='c' || par=='C')
    opt = 'c';
  else if(par=='d' || par=='D')
    opt = 'd';
  else
  {
    cout << "Opcao deve ser C ou D\n";
    return -1;
  }

  ifstream fin;
  fin.open(argv[1], ios_base::binary | ios_base::in);

  if(!fin)
  {
    cout << "Erro abertura arquivo " << argv[1] << endl;
    return -1;
  }

  string str = string(argv[1]) +
              ((opt=='c') ? ".cod": ".dec");
  ofstream fout;
  fout.open(str.c_str(), ios_base::binary | ios_base::out);

  if(!fout)
  {
    cout << "Erro abertura arquivo " << str << endl;
    return -1;
  }

  char ch_in, ch_out;

  while(fin.get(ch_in))
  {
    if(opt == 'c')
      ch_out = (ch_in == CHAR_MAX) ? CHAR_MIN : (ch_in + 1);
    else if(opt == 'd')
      ch_out = (ch_in == CHAR_MIN) ? CHAR_MAX : (ch_in - 1);

    fout << ch_out;
  }

  fin.close();
  fout.close();
}
