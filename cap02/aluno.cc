#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include <cstdio>

using namespace std;

// declaracao da estrutura
struct Aluno
{
  string nome;
  int  idade;
};

// declaracao dos prototipos das funcoes
char Menu();

pair<Aluno,bool> Incluir();

void Imprimir(const vector<Aluno> &);

bool GravarArquivo(const vector<Aluno> &);

vector<Aluno> LerArquivo();


// o programa
int main()
{
  vector<Aluno> v_aluno;

  while(true)
  {
    char opcao = Menu();

    switch(toupper(opcao))
    {

      case 'I':

        {
          pair<Aluno, bool> p_aluno = Incluir();

          if(p_aluno.second)
            v_aluno.push_back(p_aluno.first);
        }

        break;

      case 'L':

        cout << "\n";
        Imprimir(v_aluno);

        break;

      case 'G':

        if( GravarArquivo(v_aluno) )
          cout << "Arquivo gravado com sucesso\n";
        else
          cout << "Erro na gravacao do arquivo\n";

        break;

      case 'R':

        v_aluno = LerArquivo();
        break;

      case 'F':

        return 0;

      default:

        cout << "Opcao invalida" << endl;
    }

  }

}

// incluir novo aluno
pair<Aluno,bool> Incluir()
{
  string nome;
  cout << "\nNome  : ";
  getline(cin, nome);

  string str_idade;
  cout << "Idade : ";
  getline(cin, str_idade);

  long idade = strtol(str_idade.c_str(), NULL, 10);

  if( errno )
    idade = 0;

  Aluno aluno;
  aluno.nome = nome;
  aluno.idade = idade;

  bool flag = (nome != "") ? true : false;

  return pair<Aluno,bool>(aluno, flag);
}

// imprimir lista de alunos cadastrados
void Imprimir(const vector<Aluno> &v)
{
  for(unsigned int i=0; i<v.size(); ++i)
    cout << v[i].nome << ", " << v[i].idade << endl;
}

// gravar em arquivo os dados dos alunos armazenados no vetor
bool GravarArquivo(const vector<Aluno> &v_aluno)
{
  if(!v_aluno.size())
    return false;

  ofstream f_out;
  f_out.open("aluno.txt");

  if(!f_out.good())
    return false;

  for(unsigned int i=0; i<v_aluno.size(); ++i)
    f_out << v_aluno[i].nome
          << ";"
          << v_aluno[i].idade
          << endl;

  f_out.close();

  return true;
}

// recuperar dados do arquivo para o formato do
// vetor de estrutura
vector<Aluno> LerArquivo()
{
  ifstream f_in;
  f_in.open("aluno.txt");

  vector<Aluno> v_aluno;

  if(!f_in.good())
    return v_aluno;

  string str;
  Aluno aluno;

  while( getline(f_in, str) )
  {
    int pos = str.find(";");

    long idade =
      strtol((str.substr(pos+1)).c_str(), NULL, 10);

    if(errno)
      idade = 0;

    aluno.nome = str.substr(0,pos);
    aluno.idade = idade;

    if(aluno.nome != "")
      v_aluno.push_back(aluno);
  }

  f_in.close();
  return v_aluno;
}

// apresenta as opcoes do programa e retorna
// a opcao selecionada
char Menu()
{
  cout << "\nEscolha uma opcao ";
  cout << "<I>ncluir ";
  cout << "<L>istar ";
  cout << "<G>ravar ";
  cout << "<R>ecuperar ";
  cout << "<F>im ";

  char opcao = ' ';

  string str_opcao;
  getline(cin, str_opcao);

  for(unsigned int i=0; i<str_opcao.size(); ++i)
  {
    opcao = (str_opcao.substr(i)).c_str()[0];

    if(opcao != ' ')
      break;
  }

  return opcao;
}
