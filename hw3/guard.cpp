#include <iostream>
using namespace std;

int main()
{
  int a, b;
  string c, d;
  c = "true";
  d = "false";
  a = 2;
  b = 5;
  cout << (a < b) << endl;
  cout << (!(a < b)) << endl;
  cout << (3 > 4 ? c : d) << endl;
}
