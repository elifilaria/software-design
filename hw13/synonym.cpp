#include <iostream>
using namespace std;

enum color_t {black = 1, blue, red, green, white, cyan, purple, orange} color;
struct Cat {
   typedef double weight;
   weight w;
   color_t color; 
   void grow() {
      w *= 1.1; }
   void chcl(color_t x) {
      color = x; }
};

int main()
{
   Cat baby;
   baby.color = red;
   baby.w = 3;

   cout << "Baby weights " << baby.w ;
   cout << " Baby is " << baby.color << endl;
}
