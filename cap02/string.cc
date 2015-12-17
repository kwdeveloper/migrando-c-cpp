#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  string str1 = "Hello ";
  string str2;

  if(argc > 1)
    str2 = argv[1];
  else
    str2 = "desconhecido";

  cout << str1 + str2 << endl;

  if(str2 == "wilson")
    cout << "Voce tem um belo nome\n";
}
