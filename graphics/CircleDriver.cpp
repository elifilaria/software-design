#include <iostream>
using namespace std;
#include "Circle.h"
 
int main()
{
  Circle defCircle = Circle();
  defCircle.display();

  Point2 myPoint = Point2(100,200);
  Circle myCircle = Circle(myPoint, 50);
  myCircle.display();

  Circle urCircle = Circle(cin);
  urCircle.display();
 
return 0;
}
