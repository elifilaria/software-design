#include <iostream>
using namespace std;

void printarray (int arg[], int length) {
  for (int n =0; n < length; n++)
    cout << arg[n] << " ";
  cout << "\n";
}

int main()
{
  int a1[20];
  for (int n = 0; n <20; n++)
    {
      a1[n] = n;
    }
  printarray (a1, 20);
  return 0;
}
