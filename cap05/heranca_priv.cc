#include <string>

using namespace std;

class Motor
{
  protected:
    Motor() {}
    ~Motor() {}
    void SetTipo(const string &s) {tipo = s;}

  private:
    string tipo;
};

class Carro: private Motor
{
  public:
    void SetTipoMotor(const string &s) {SetTipo(s);}
};

class Trator: private Motor
{
  public:
    void SetTipoMotor(const string &s) {SetTipo(s);}
};

int main()
{
  Carro c;
  c.SetTipoMotor("gasolina");

  Trator t;
  t.SetTipoMotor("diesel");
}
