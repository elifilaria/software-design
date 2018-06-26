#include <iostream>
using namespace std;

const int datalen = 4;

void octavedown (signed short val1[], signed short val2[])
{
  for (int i = 0; i < datalen; i+=2 ){
    val2[2*i] = val1[i];
    val2[(2*i)+2] = val1[i];
    val2[(2*i)+1] = val1[i+1];
    val2[(2*i)+3] = val1[i+1];
}}


int main()
{
   signed short val1[datalen], val2[2*datalen];
   cin.read( ( char *)val1, 2*datalen );

   octavedown(val1, val2);
   
   cout.write( (char *)val2, 4*datalen );
   return 0;
}

