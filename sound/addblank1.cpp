#include <iostream>
using namespace std;

const int datalen = 1373560;

void addblank (signed short val1[], signed short val2[])
{
  for (int i = 0; i < 3500; i++ ){
    val2[i] = 1;
}
  for (int i = 3500; i < datalen+3500; i++) {
    val2[i] = val1[i-3500];
}}


int main()
{
   signed short val1[datalen], val2[datalen+3500];
   cin.read( ( char *)val1, 2*datalen );

   addblank(val1, val2);

   cout.write( (char *)val2, 2*datalen+7000 );
   return 0;
}



