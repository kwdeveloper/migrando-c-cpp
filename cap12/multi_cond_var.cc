#include <iostream>
#include <numeric>
#include <vector>
#include <ctime>
#include <boost/thread/thread.hpp>
#include <boost/thread/condition_variable.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

using namespace std;
using namespace boost;

vector<int> vetor;
bool vetor_cheio;
condition_variable cond_var;
mutex mtx;
boost::posix_time::time_duration periodo = 
  boost::posix_time::seconds(1);

const int max_atraso = 5;

void acumular()
{
  unique_lock<mutex> lock(mtx);
    
  while(!vetor_cheio)
  {
    cout << "acumular() aguardando ...\n";
    cond_var.timed_wait(lock,periodo);
  }
  
  cout << "acumular(), resultado: " 
       << accumulate(vetor.begin(),vetor.end(), 0) 
       << endl;
}

void preencher_vetor()
{
  srand(time(NULL));
  
  for(int i=0; i<5; ++i)
  {    
    int atraso = rand()%max_atraso + 1;
    cout << atraso << '\n';
    vetor.push_back(atraso);

    for(time_t t = time(NULL) + atraso; time(NULL) < t; )
    {}        
  }

  lock_guard<mutex> lock(mtx);
  vetor_cheio=true;  
  cond_var.notify_one();
}

int main()
{
  vetor_cheio = false;
  
  thread t1(acumular);
  thread t2(preencher_vetor);
  t1.join();
  t2.join();   
}
