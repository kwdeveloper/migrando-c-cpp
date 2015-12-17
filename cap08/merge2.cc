#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void Imprimir( const T &c,
               const string &header=" ",
               const string &sep=" ")
{
  typename T::const_iterator it;

  cout << header;

  for( it=c.begin(); it!=c.end(); ++it)
    cout << *it << sep;
}

int main()
{
  int arr1[] = {2,1,-12,9,15,-4,1,15,15,13};
  int n_elem = sizeof(arr1)/sizeof(int);
  vector<int> v1(arr1,arr1+n_elem);

  int arr2[] = {21,1,-4,19,6,10,1,19,15,7};
  n_elem = sizeof(arr2)/sizeof(int);
  vector<int> v2(arr2,arr2+n_elem);

  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());

  Imprimir(v1,"v1    : "," ");
  Imprimir(v2,"\nv2    : "," ");

  vector<int> v_u;
  set_union( v1.begin(),v1.end(),v2.begin(),v2.end(),
             back_inserter(v_u) );
  Imprimir(v_u,"\nv_u   : "," ");

  vector<int> v_isec;
  set_intersection( v1.begin(),v1.end(),v2.begin(),v2.end(),
                    back_inserter(v_isec) );
  Imprimir(v_isec,"\nv_isec: "," ");

  vector<int> v_dif;
  set_difference( v1.begin(),v1.end(),v2.begin(),v2.end(),
                  back_inserter(v_dif) );
  Imprimir(v_dif,"\nv_dif : "," ");

  vector<int> v_sdif;
  set_symmetric_difference( v1.begin(),v1.end(),
                            v2.begin(),v2.end(),
                            back_inserter(v_sdif));
  Imprimir(v_sdif,"\nv_sdif: "," ");
}
