#include <iostream>
using namespace std;

int main()
{
   for(int n = 10, c = 1, x = 0, y = 1, z; c <= n; c++) {
      if ( c <= 1 )
         z = c;
      else
      {
         z = x + y;
         x = y;
         y = z;
      }
      cout << z << endl;
  }
   
 
   return 0;
}
