#include <iostream>
#include <boost/random.hpp>

using namespace std;

int main()
{
  boost::minstd_rand gen;
  gen.seed((unsigned int)time(NULL));

  boost::uniform_int<int> distr(1,6);

  for(int i=0; i<10; ++i)
    cout << distr(gen) << ' ';

  cout << endl;
}
