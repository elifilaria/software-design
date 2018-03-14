#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle (int);
    Rectangle (float);
    Rectangle (double);
    Rectangle (long);
    Rectangle (int,int);
    int area (void) {return (width*height);}
};

Rectangle::Rectangle (int a) {
  width = a;
  height = 4;
}
Rectangle::Rectangle (float a) {
  width = a;
  height = 4.0;
}
Rectangle::Rectangle (double a) {
  width = a;
  height = 4.0;
}
Rectangle::Rectangle (long a) {
  width = a;
  height = 4;
}

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  Rectangle rect (2,6);
  Rectangle rectb(4);
  Rectangle rectc(8.0);
  Rectangle rectd(9.0);
  Rectangle recte(10);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << ", which is the same as: " << rectc.area() << ", which is the same as: " << rectd.area() << ", which is the same as: " << recte.area() << endl;
  return 0;
}
