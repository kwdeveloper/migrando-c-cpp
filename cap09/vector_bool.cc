#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<bool> vb(4, true);

  for(int i=0; i<4; ++i)
    vb.push_back(false);

  for(unsigned int i=0; i<vb.size(); ++i)
    cout << vb[i];

  vb.flip();
  cout << endl;

  for(unsigned int i=0; i<vb.size(); ++i)
    cout << vb[i];
}
