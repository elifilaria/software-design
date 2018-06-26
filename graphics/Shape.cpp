#include "Shape.h"

Shape::Shape (){
	color.red = 100;
	position.x = 320;
	position.y = 240;
}

Shape::Shape (Point2 p){
	color.red = 100;
	position.x = p.x;
	position.y = p.y;
}

Shape::Shape (istream& is){
	is >> color.red;
	is >> color.green;
	is >> color.blue;
	is >> position.x;
	is >> position.y;
}

void Shape::setColor (Color c){
	color.red = c.red;
	color.green = c.green;
	color.blue = c.blue;
}

void Shape::setPosition (int x, int y){
	position.x = x;
	position.y = y;
}

void Shape::display(){
	color.display();
	position.display();
}

double Shape::distance (int x, int y, Point2 p){
	int a = x - p.x;
	int b = y - p.y;
	double c = sqrt(a*a + b*b);
	return c;
}
