#include <boost/thread/thread.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace boost;

void f()
{
  cout << "Funcao f\n";
}

void g(const string &str)
{
  cout << str;
}

class Teste1
{
  public:
    Teste1(const string &s="Teste"): str(s) {}
    void operator ()() {cout << str;}
    
  private:
    string str;    
};

class Teste2
{
  public:
    Teste2(const int &i=0): x(i) {}
    void operator ()() {cout << x++ << '\n';}

  private:
    int x;  
};

int main()
{
  thread t1(f);
  thread t2(g,"Thread 2\n");
  thread t3(Teste1("Thread 3\n"));
  
  t1.join();
  t2.join();
  t3.join();
  
  Teste2 teste2(10);
  teste2();
  thread t4(ref(teste2));
  t4.join();  
}