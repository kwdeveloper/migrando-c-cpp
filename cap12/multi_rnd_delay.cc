#include <iostream>
#include <ctime>
#include <cstdlib>
#include <boost/thread/thread.hpp>

using namespace std;
using namespace boost;

const int MAX_LOOP = 5;
mutex mtx;

class prt_delay
{
  public:
    prt_delay(const string &s, const int &x): 
      msg(s), max_atraso(x) {}    
    void operator ()();
    
  private:
    string msg;    
    int max_atraso;
};

void prt_delay::operator ()()
{
  srand(time(NULL));

  for(int i=0; i<MAX_LOOP; ++i)
  {
    int atraso = rand()%max_atraso + 1;

    for(time_t t = time(NULL) + atraso; time(NULL) < t; ) 
    {}

    lock_guard<mutex> lock(mtx);
    cout << msg << " " << i << ": " << atraso << endl;
  }
}  

int main()
{
  thread th1(prt_delay("T1",3));
  thread th2(prt_delay("T2",7));
  
  th1.join();
  th2.join();
}
