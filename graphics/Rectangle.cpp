#include "Rectangle.h"

Rectangle::Rectangle (): Shape(){
	
	width = 10;
	height = 20;
}

Rectangle::Rectangle (Point2 p, unsigned int w, unsigned int h): Shape(p){
	width = w;
	height = h;
}

Rectangle::Rectangle (istream& is) : Shape (is){
	is >> width >> height;
}

void Rectangle::display(){
	cout << "Rectangle ";
	Shape::display();
	cout << "   " << width << " " << height << endl;
}

void Rectangle::draw(){
	sendGLColor();
  double x0 = min(position.x, position.x + (int)width);
  double x1 = max(position.x, position.x + (int)width);
  double y0 = min(position.y, position.y + (int)height);
  double y1 = max(position.y, position.y + (int)height);
  glBegin(GL_QUADS);
    glVertex2d(x0, y0);
    glVertex2d(x1, y0);
    glVertex2d(x1, y1);
    glVertex2d(x0, y1);
  glEnd();
}

void Rectangle::update(int x, int y){
	width = x - position.x;
	height = y - position.y;
}

bool Rectangle::containsPoint(int x, int y){
	sendGLColor();
  double x0 = min(position.x, position.x + (int)width);
  double x1 = max(position.x, position.x + (int)width);
  double y0 = min(position.y, position.y + (int)height);
  double y1 = max(position.y, position.y + (int)height);
  if (x0 < x && x < x1 && y0 < y && y1 > y) {return true;}
  // glBegin(GL_QUADS);
  //   glVertex2d(x0, y0);
  //   glVertex2d(x1, y0);
  //   glVertex2d(x1, y1);
  //   glVertex2d(x0, y1);
  // glEnd();
  else {return false;}
}