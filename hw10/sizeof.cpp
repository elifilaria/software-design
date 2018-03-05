#include <iostream>
using namespace std;
 

int main()
{

   short a ;
   int b;
   double f;
   short * c;
   int * d;
   double * e;

   cout << "size of a short is: " << sizeof(a) << ", size of an int is: " << sizeof(b) << ", size of a double is: " << sizeof(f) << ", size of a short pointer is: " << sizeof(c) << ", size of an int pointer is: " << sizeof(d) << ", size of a double pointer is: " << sizeof(e) << endl;
}
