#include <iostream>
using namespace std;

const int datalen = 1373560;

void octaveup (signed short val1[], signed short val2[])
{
  int a = 0;
  for (int i = 0; i < datalen; i+=4 ){
    val2[a] = val1[i];
    val2[a+1] = val1[i+1];
    a += 2;
}}


int main()
{
   signed short val1[datalen], val2[datalen/2];
   cin.read( ( char *)val1, 2*datalen );

   octaveup(val1, val2);

   cout.write( (char *)val2, datalen );
   return 0;
}



