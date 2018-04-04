#include <iostream>
using namespace std;

void triplicate (int& e, int& l, int& i, int& f)
{
  e *= 3;
  l *= 3;
  i *= 3;
  f *= 3;
}

int main()
{
  int a = 1, b = 2, c = 4, d = 6;
  triplicate (a, b, c, d);
  cout << a << " "  << b << " " << c << " " << d << endl;
  return 0;
}
