#include<iostream>
using namespace std;

const int datalen = 1373560;

void louder(signed short val[])
{
  for( int i = 0; i < datalen; ++i )
    val[i] *= 2;
}

int main()
{
  signed short val[datalen];  
  cin.read( (char *)val, 2*datalen ); 

  louder(val);  

  cout.write( (char *)val, 2*datalen ); 
  return 0;
}


