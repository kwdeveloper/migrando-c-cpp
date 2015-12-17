#include <iostream>
#include <fstream>

using namespace std;

const int LARGURA_CAMPO1 = 13;
const int LARGURA_CAMPO2 = 4;
const int LARGURA_REG = LARGURA_CAMPO1+LARGURA_CAMPO2;

void CriarArquivo(const char *arquivo)
{
  ofstream fout;
  fout.open(arquivo);

  if(!fout.good())
    return;

  fout << "Quincas Borba" << "1891";
  fout << "Bras Cubas   " << "1881";
  fout << "Helena       " << "1876";
  fout << "Dom Casmurro " << "1899";

  fout.close();
}

void LerRegistro(const char *arquivo, int reg_num)
{
  ifstream fin;
  fin.open(arquivo);

  if(!fin.good())
    return;

  // determina numero total de registros do arquivo
  long ini = fin.tellg();
  fin.seekg(0, ios_base::end);
  long fim = fin.tellg();

  long registros = (fim - ini)/LARGURA_REG;

  reg_num--;
  if(reg_num < 0 || reg_num >= registros)
  {
    cout << (reg_num+1) << ": registro invalido\n";
  }
  else
  {
    // posiciona ponteiro leitura no registro
    fin.seekg(reg_num*LARGURA_REG, ios_base::beg);

    // le o registro
    char reg_ch[LARGURA_REG+1];
    fin.read(reg_ch, LARGURA_REG);
    reg_ch[LARGURA_REG] = '\0';

    // quebra o registro em campos
    string campo1(reg_ch, LARGURA_CAMPO1);
    string campo2(reg_ch+LARGURA_CAMPO1, LARGURA_CAMPO2);

    cout << (reg_num+1) << ": "
         << campo1 << ","
         << campo2 << endl;
  }

  fin.close();
}

int main()
{
  char *arquivo = "teste.txt";

  CriarArquivo(arquivo);

  LerRegistro(arquivo,1);
  LerRegistro(arquivo,3);
  LerRegistro(arquivo,5);
  LerRegistro(arquivo,2);
  LerRegistro(arquivo,4);
}
