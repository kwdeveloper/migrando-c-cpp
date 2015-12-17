#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  int i = -2008;
  cout << "Numeros inteiros:\n";
  cout.fill('_');
  cout.width(10); cout << i++ << endl;
  cout.width(10); cout << left << i++ << endl;
  cout.width(10); cout << i++ << endl;
  cout.width(10); cout << right << i++ << endl;
  cout.width(10); cout << internal << i++ << endl;

  cout << "\nNumero float e:\n";
  double e = exp(1);
  cout << setfill('*') << setprecision(7);
  cout << setw(20) << e << endl;
  cout << right << e << endl;
  cout << right << setprecision(20) << e << endl;

  int j=100;
  cout << "\nNumero 100 em octal e hexa:\n";
  cout << showbase << oct << j << endl;
  cout << hex << j << endl;

  int k =200;
  cout << "\nNumero 200 em hexa e dec:\n";
  cout << k << endl;
  cout << setbase(10) << k << endl;

  string str="Linguagem C++";
  cout << "\nString:\n";
  cout << setw(20) << left << str << endl;
  cout << setw(20) << right << str << endl;
  cout << setw(20) << internal << str << endl;

  bool b=false;
  cout << "\nBool:\n";
  cout << b << endl;
  cout << boolalpha << b << endl;
  cout << !b << endl;
}
