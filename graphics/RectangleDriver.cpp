#include <iostream>
using namespace std;
#include "Rectangle.h"
 
int main()
{
  Rectangle defRectangle = Rectangle();
  defRectangle.display();

  Point2 myPoint = Point2(100,100);
  Rectangle myRectangle = Rectangle(myPoint, 30, 50);
  myRectangle.display();

  Rectangle urRectangle = Rectangle(cin);
  urRectangle.display();
 
return 0;
}
