#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle (int);
    Rectangle (int,int);
    int area (void) {return (width*height);}
};

Rectangle::Rectangle (int a) {
  width = a;
  height = 5;
}

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  Rectangle rect (3,4);
  Rectangle rectb(5);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}
