#include <iostream>
using namespace std;

int main()
{
  signed short val;
  int n;
  while (n<100000) {
  	n+=1;
  	cout << 1 << " ";
  }
  while ( cin >> val ) {
  	cout << val << " ";
  }
  cout << endl;
  return 0;
}
