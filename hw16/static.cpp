#include <iostream>
using namespace std;

class Dummy {
  public:
    static int n;
    Dummy () { n++; };
};

int Dummy::n=0;

int main () {
  Dummy a;
  Dummy b[4];
  cout << "a has one object and b has 4, then the number of objects is 1+4= " << a.n << endl;
  Dummy * c = new Dummy[20];
  cout << "a has one object, b has 4, and the new object c has 20!, then the number of objects is 1+4+20= " << Dummy::n << endl;
  delete[] c;
  return 0;
}
