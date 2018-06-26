#ifndef _Circle_H_
#define _Circle_H_
#include "Shape.h"
#include <iostream>
#include <math.h>
using namespace std;

class Circle: public Shape {

protected:
  unsigned int radius;

public:
  Circle ();
  Circle (Point2, unsigned int);
  Circle (istream& is);
  void display();
  void draw();
  void update(int, int);
  bool containsPoint(int, int);
};
#endif /* _Circle_H_ */