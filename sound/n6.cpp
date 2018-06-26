#include <iostream>
using namespace std;

int main()
{
   int n = 10, c = 1, x = 0, y = 1, z;

   while (c <= n) {
      if ( c <= 1 )
         z = c;
      else
      {
         z = x + y;
         x = y;
         y = z;
      }
      cout << z << endl;
      c++;
  }
   return 0;
}
