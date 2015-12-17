#include <iostream>
#include <valarray>

using namespace std;

template<typename T>
  void ImprimirValarray( const valarray<T> &va,
                         const string &head = "",
                         const string &sep = "" )
{
  cout << head;

  for(unsigned int i=0; i<va.size(); ++i)
    cout << va[i] << sep;
}

template<typename T>
  void ImprimirMatriz( const valarray<T> &va,
                       const int &lin,
                       const int &col,
                       const string head="")
{
  cout << head << endl;

  for(int i=0; i<lin; ++i)
  {
    for(int j=0; j<col; ++j)
    {
      cout << va[i*col + j] << " ";
    }

    cout << endl;
  }
}

template<typename T>
  valarray<T> multiplicar(
    const valarray<T> &v1, const int &lin1, const int &col1,
    const valarray<T> &v2, const int &lin2, const int &col2 )
{
  if( ((lin1*col1)!=v1.size()) || ((lin2*col2)!=v2.size()) )
  {
    cout << "Erro na dimensao da matriz";
    return valarray<T>();
  }

  if(col1 != lin2)
  {
    cout << "Nao e possivel multiplicar as matrizes";
    return valarray<T>();
  }

  valarray<T> vresult(lin1*col2);
  int ind = 0;

  for(int i=0; i<lin1; ++i)
  {
    valarray<T> vlin = v1[slice(i*col1,col1,1)];

    for(int j=0; j<col2; ++j)
    {
      valarray<T> vcol = v2[slice(j,lin2,col2)];
      vresult[ind++] = (vlin*vcol).sum();
    }
  }

  return vresult;
}


int main()
{
  int arr1[] = {2,0,-1,1};
  valarray<int> va1(arr1,sizeof(arr1)/sizeof(int));

  int arr2[] = {1,5,-7,1,1,0,0,-1,1,2,0,0};
  valarray<int> vb1(arr2,sizeof(arr2)/sizeof(int));

  valarray<int> vres1 = multiplicar(va1,1,4,vb1,4,3);

  cout << "EXEMPLO 1\n";
  ImprimirMatriz(va1,1,4,"\nMatriz A:");
  ImprimirMatriz(vb1,4,3,"\nMatriz B:");
  ImprimirMatriz(vres1,1,3,"\nMatriz AxB:");

  int arr1b[] = {2,0,-1,1,1,2,0,1};
  valarray<int> va2(arr1b,sizeof(arr1b)/sizeof(int));

  int arr2b[] = {1,5,-7,1,1,0,0,-1,1,2,0,0};
  valarray<int> vb2(arr2b,sizeof(arr2b)/sizeof(int));

  valarray<int> vres2 = multiplicar(va2,2,4,vb2,4,3);

  cout << "\nEXEMPLO 2\n";
  ImprimirMatriz(va2,2,4,"\nMatriz A:");
  ImprimirMatriz(vb2,4,3,"\nMatriz B:");
  ImprimirMatriz(vres2,2,3,"\nMatriz AxB:");
}
