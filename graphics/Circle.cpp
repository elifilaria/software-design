#include "Circle.h"

Circle::Circle (): Shape(){
	radius = 20;
}

Circle::Circle (Point2 p, unsigned int r): Shape(p){
	radius = r;
}

Circle::Circle (istream& is) : Shape (is){
	is >> radius;
}

void Circle::display(){
	cout << "Circle ";
	Shape::display();
	cout << "   " << radius << endl;
}

void Circle::draw(){
	sendGLColor();
  const int NUM_DIVS = 50;
  glBegin(GL_TRIANGLE_FAN);
    glVertex2d(position.x, position.y);
    for ( int i = 0; i < NUM_DIVS; ++i )
      glVertex2d(position.x + radius*cos(i*2*M_PI/(NUM_DIVS-1)),
                 position.y + radius*sin(i*2*M_PI/(NUM_DIVS-1)));
  glEnd();
}

void Circle::update(int x, int y){
	radius = distance(x, y, position);
}

bool Circle::containsPoint(int x, int y){
	sendGLColor();
  double r0 = distance(x, y, position);
  if (r0 < radius) {return true;}
  // glBegin(GL_QUADS);
  //   glVertex2d(x0, y0);
  //   glVertex2d(x1, y0);
  //   glVertex2d(x1, y1);
  //   glVertex2d(x0, y1);
  // glEnd();
  else {return false;}
}