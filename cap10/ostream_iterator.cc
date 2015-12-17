#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  vector<int> v(5,0);

  srand(time(NULL));

  generate(v.begin(), v.end(), rand);

  copy(v.begin(), v.end(), ostream_iterator<int>(cout,"\n"));
}
