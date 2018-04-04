#include <iostream>
using namespace std;

int main()
{
  int x, a, b, c, d, e, acc;
  acc = 0;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;
  
  while (cin >> x) 
    {
      a = b; b = c; c = d; d = e; e = x;
      int sum = a+b+c+d+e;
      cout << ' ' << sum;
      if (acc < sum)
	{
	  acc = sum;
	}
    }
  cout << "         " << acc << endl;
}
