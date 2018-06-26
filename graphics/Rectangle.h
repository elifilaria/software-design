#ifndef _Rectangle_H_
#define _Rectangle_H_
#include "Shape.h"
#include <iostream>
#include <GL/glut.h>
#include <math.h>
using namespace std;

class Rectangle: public Shape {

protected:
  unsigned int width;
  unsigned int height;

public:
  Rectangle ();
  Rectangle (Point2, unsigned int, unsigned int);
  Rectangle (istream& is);
  void display();
  void draw();
  void update(int, int);
  bool containsPoint(int x, int y);
};
#endif /* _Rectangle_H_ */