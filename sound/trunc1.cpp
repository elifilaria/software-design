#include <iostream>
using namespace std;

const int datalen = 1373560;

void trunc (signed short val1[], signed short val2[])
{
  for (int i = 4000; i < datalen; i++ ){
    val2[i-4000] = val1[i];
}}


int main()
{
   signed short val1[datalen], val2[datalen-4000];
   cin.read( ( char *)val1, 2*datalen );

   trunc(val1, val2);

   cout.write( (char *)val2, 2*datalen-8000 );
   return 0;
}


