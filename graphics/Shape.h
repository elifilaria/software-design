#ifndef _Shape_H_
#define _Shape_H_
#include "ColorPoint2.h"
#include <iostream>
#include <GL/glut.h>
#include <math.h>
using namespace std;

class Shape {

protected://
  Color color;
  Point2 position;

public:
  Shape ();
  Shape (Point2);
  Shape (istream& is);
  Color getColor () {return color;}
  Point2 getPosition () {return position;}
  void setColor (Color );
  void setPosition (int, int);
  void display();
  void sendGLColor(){glColor3f(color.red/255., color.green/255., color.blue/255.);}
  double distance (int, int, Point2);
  virtual void draw() =0;
  virtual void update(int, int) =0;
  virtual bool containsPoint(int, int) =0;
};
#endif /* _Shape_H_ */