#include <iostream>
using namespace std;

const int datalen = 1373560;

void reverb (signed short val1[], signed short val2[], signed short val3[], signed short val4[])
{
  for (int i = 0; i < 2000; i++ ){
    val2[i] = 0;
}
  for (int i = 0; i < 4000; i++){
    val3[i] = 0;
}
  for (int i = 2000; i < datalen+2000; i++) {
    val2[i] = val1[i-2000];
}
  for (int i = 4000; i < datalen+4000; i++) {
    val3[i] = val1[i-4000];
}

  for (int i = 0; i < datalen; i++) {
    val4[i] = val3[i] + val2[i] + val1[i];
}
  for (int i = datalen; i < datalen+2000; i++) {
    val4[i] = val3[i] + val2[i];
}
  for (int i = datalen+2000; i < datalen+4000; i++){
    val4[i] = val3[i];
}}

int main()
{
   signed short val1[datalen], val2[datalen+2000], val3[datalen+4000], val4[datalen+4000];
   cin.read( ( char *)val1, 2*datalen );

   reverb(val1,val2,val3,val4);

   cout.write( (char *)val4, 2*datalen+8000 );
   return 0;
}



