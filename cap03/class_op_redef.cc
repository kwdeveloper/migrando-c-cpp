#include <iostream>

using namespace std;

class Tripla
{
  public:
    Tripla(const int &p1=0,
           const int &p2=0,
           const int &p3=0): x(p1), y(p2), z(p3) {};
    Tripla& operator =(const Tripla &);
    Tripla operator +(const Tripla&);
    bool operator ==(const Tripla&);
    void Imprimir();

  private:
    int x, y, z;
};

Tripla& Tripla::operator =(const Tripla &t)
{
  if(this == &t)
    return *this;

  x=t.x; y=t.y; z=t.z;

  return *this;
}

Tripla Tripla::operator +(const Tripla &t)
{
  return Tripla(x+t.x, y+t.y, z+t.z);
}

bool Tripla::operator ==(const Tripla& t)
{
  return (x==t.x && y==t.y && z==t.z);
}

void Tripla::Imprimir()
{
  cout << x << "," << y << "," << z;
}

int main()
{
  Tripla t1(10,11,12);
  Tripla t2(1,2,3);
  Tripla t3=t1+t2;

  cout << "t1: "; t1.Imprimir();
  cout << "\nt2: "; t2.Imprimir();
  cout << "\nt3: "; t3.Imprimir();

  Tripla t4=t1;
  cout << "\nt4: "; t4.Imprimir();
  cout << boolalpha << "\nt1==t4: " << (t1==t4);

  t4 = t2;
  cout << "\nt4: "; t4.Imprimir();
}
