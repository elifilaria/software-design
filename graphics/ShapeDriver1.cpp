#include <iostream>
using namespace std;
#include "Circle.h"
#include "Rectangle.h"
 
int main()
{
  Circle defCircle = Circle();
  defCircle.display();

  Point2 myPoint = Point2(100,200);
  Circle myCircle = Circle(myPoint, 50);
  myCircle.display();


  Rectangle defRectangle = Rectangle();
  defRectangle.display();

  Rectangle myRectangle = Rectangle(myPoint, 30, 50);
  myRectangle.display();
 
return 0;
}
