#include <iostream>
using namespace std;

struct Color {
  unsigned int red;
  unsigned int green;
  unsigned int blue;
  Color(int r, int g, int b) {
    red = r;
    green = g;
    blue = b;
  }
  void display() {cout << red << " " << green << " " << blue << endl;}
};

struct Point2 {
	int x;
	int y;
  Point2(int myX, int myY) {
    x = myX;
    y = myY;
  }
	void display() {cout << x << " " << y << endl;}
};
