#include <iostream>
using namespace std;
int main()
{
  int x = 1526; //1526 as base 10 (decimal)
  int y = 02766; //1526 as base 8 (octal)
  int z = 0x5f6; //1526 as base 16 (hexadecimal)

  cout << x << endl;
  cout << y << endl;
  cout << z << endl;

  int a = 1526; 
  int b = 1526l;
  int c = -1526u; //even if unsigned, program executes the negative sign
  int d = -1526ul;

  cout << a << endl; 
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;

  double k = 4.23465;
  double l = 5.24e8;
  double m = 9.8e-5L;
  double n = 3.14589f;
  double o = 6.02e23f;
  
  cout << k << endl;
  cout << l << endl;
  cout << m << endl;
  cout << n << endl;
  cout << o << endl;
}