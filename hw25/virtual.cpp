#include <iostream>
using namespace std;

class Operations {
   public: 
       int add (int a, int b) {
           int sum = a +b;
           return sum;
}

        virtual int sub (int c, int d) {
           int neg = c-d;
           return neg;
}};


int main () {
   Operations blah;
   
   int x = blah.sub (6 ,9);
   cout << x << endl;
   int y = blah.add (x, 4);
   cout << y << endl;
   
}
