#include <iostream>
using namespace std;
#include "Shape.h"
 
int main()
{
  Shape defShape = Shape();
  defShape.display();
  defShape.getColor();
  defShape.getPosition();

  Point2 myPoint = Point2(100,100);
  Shape myShape = Shape(myPoint);
  myShape.display();
  Color myColor = Color(200,0,0);
  myShape.setColor(myColor);
  myShape.setPosition(200,200);
  myShape.display();

  Shape urShape = Shape(cin);
  urShape.display();
 
return 0;
}
