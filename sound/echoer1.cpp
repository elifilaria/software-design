#include <iostream>
using namespace std;

const int datalen = 1373560;

void echoer (signed short val1[], signed short val2[], signed short val3[])
{
  for (int i = 0; i < 2000; i++ ){
    val2[i] = 0;
}
  for (int i = 2000; i < datalen+2000; i++) {
    val2[i] = val1[i-2000];
}
  for (int i = 0; i < datalen; i++) {
    val3[i] = val2[i] + val1[i];
}
  for (int i = datalen; i < datalen+2000; i++){
    val3[i] = val2[i];
}}


int main()
{
   signed short val1[datalen], val2[datalen+2000], val3[datalen+2000];
   cin.read( ( char *)val1, 2*datalen );

   echoer(val1, val2, val3);

   cout.write( (char *)val3, 2*datalen+4000 );
   return 0;
}
