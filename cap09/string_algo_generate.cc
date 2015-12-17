#include <iostream>
#include <string>

using namespace std;

class Fgen
{
  public:
    Fgen(const char &p=' '): ch(p) {};
    char operator()() {return ch++;};

  private:
    char ch;
};

int main()
{
  string str(26,' ');

  Fgen fgen('a');
  generate(str.begin(),str.end(),fgen);

  cout << str << endl;
}
