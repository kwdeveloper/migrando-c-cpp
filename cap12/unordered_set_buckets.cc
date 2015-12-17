#include <iostream>
#include <string>
#include <boost/unordered_set.hpp>
#include <boost/lambda/lambda.hpp>

using namespace std;
using namespace boost;
using namespace boost::lambda;

const int SZ = 10;

int main()
{
  string arr[SZ] =
    {"caqui","abacate","laranja","goiaba","jaca",
     "sapoti","pitanga","berinjela","chuchu","manga"};

  unordered_set<string> us1;

  for(int i=0; i<SZ; ++i)
    us1.insert(arr[i]);

  for(unsigned int i=0; i<us1.bucket_count(); ++i)
  {
    int sz = us1.bucket_size(i);
    cout << i << "(" << sz << "): ";

    for_each(us1.begin(i),us1.end(i),cout << _1 << ' ');
    cout << '\n';
  }

  cout << "\nFC    : " << us1.load_factor() << '\n';
  cout << "FC max: " << us1.max_load_factor() << '\n';
}
