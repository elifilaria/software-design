#include <iostream>
using namespace std;

char* stringReverse(char a[])
{
  char letter;
  char* a1 = a -1;
  char* a2 = a;

  while(*a2)
    {
      ++a2;
    }
  while(--a2 > ++a1)
    {
      letter = *a1;
      *a1 = *a2;
      *a2 = letter;
    }

  return a;
}

int main()
{
  char str[20] = "Hello!";

  cout << stringReverse(str) << endl;
  return 0;
}
