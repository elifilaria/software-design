#include <iostream>
using namespace std;

void printarray (int arg[], int length) {
  for (int n = 0; n < length; n++)
    cout << arg[n] << " ";
  cout << "\n";
}

int main()
{
  int a0[20];
  printarray (a0, 20);
  return 0;
}
