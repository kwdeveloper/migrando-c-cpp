#include <iostream>

using namespace std;

const int idx = cout.xalloc();
const char delim_esq[] = {' ','(','{','<'};
const char delim_dir[] = {' ',')','}','>'};

template<typename T1, typename T2>
  ostream& operator<<(ostream &os, const pair<T1,T2> &p)
{
  long iw = os.iword(idx);

  if(iw > 0 && iw < 4)
    os << delim_esq[cout.iword(idx)];

  os << p.first << "," << p.second;

  if(iw > 0 && iw < 4)
    os << delim_dir[cout.iword(idx)];

  return os;
}

int main()
{
  pair<int,int> p1(-12,254);
  cout << p1 << endl;

  cout.iword(idx) = 1;
  pair<string,string> p2("C","C++");
  cout << p2 << endl;

  cout.iword(idx) = 2;
  pair<float,float> p3(3.1415,2.7178);
  cout << p3 << endl;

  cout.iword(idx) = 3;
  pair<int,float> p4(10,1822);
  cout << p4 << endl;
}
