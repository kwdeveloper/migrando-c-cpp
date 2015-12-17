#include <iostream>
#include <vector>
#include <ctime>
#include <boost/random.hpp>
#include <boost/random/ranlux.hpp>

using namespace std;

int main()
{
  const int K_NUM_ELEM = 1000;
  const int K_NUM_FAIXA = 10;

  boost::random::ranlux64_base_01 engine;
  engine.seed((unsigned int)time(NULL));

  boost::normal_distribution<double> distr(10,1);

  vector<double> v;
  v.reserve(K_NUM_ELEM);

  for(int i=0; i<K_NUM_ELEM; ++i)
    v.push_back(distr(engine));

  sort(v.begin(),v.end());
  double xmin = v[0];
  double xmax = v[v.size()-1];
  double larg_faixa = (xmax-xmin)/K_NUM_FAIXA;

  cout << "min: " << xmin
       << " max: " << xmax
       << " larg. faixa: " << larg_faixa
       << "\n\n";

  typedef vector<double>::iterator vdit;
  vdit it_ini = v.begin();
  double val_faixa_ini = xmin;
  double val_faixa_fim = xmin + larg_faixa;
  int total_elem = 0;

  while(it_ini != v.end())
  {
    vdit it_fim = upper_bound(it_ini,v.end(),val_faixa_fim);
    int num_elem = distance(it_ini,it_fim);
    total_elem += num_elem;

    if(val_faixa_fim >= xmax)
      cout << val_faixa_ini << " <= x <= "
           << xmax << ": " << num_elem << endl;
    else
      cout << val_faixa_ini << " <= x < "
           << val_faixa_fim << ": " << num_elem << endl;

    it_ini = it_fim;
    val_faixa_ini = val_faixa_fim;
    val_faixa_fim += larg_faixa;
  }

  cout << "\nTotal numeros gerados: "<< total_elem << endl;
}
