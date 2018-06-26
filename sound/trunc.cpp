#include <iostream>
using namespace std;

int main()
{
  signed short val;
  int n;
  while ( cin >> val ) {
  	n+=1;
  	if (n>100000) cout << val << " ";
  }
  cout << endl;
  return 0;
}
