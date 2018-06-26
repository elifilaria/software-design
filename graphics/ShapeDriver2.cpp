#include <iostream>
#include <fstream>
using namespace std;
#include "Circle.h"
#include "Rectangle.h"
 
int main()
{
  Circle defCircle = Circle();
  defCircle.display();

  int numShapes;
  ifstream g("shapes.txt");
  g >> numShapes;
  Shape** myShapeArray = new Shape* [numShapes];
  char* key = new char[64];
  for (int j = 0; j < numShapes; j++){
  	g >> key;
  	if (key[0] == 'C'){
  		myShapeArray[j] = new Circle(g);
  		//myShapeArray[j]->display();
  	}
  	else if (key[0] == 'R'){
  		myShapeArray[j] = new Rectangle(g);
  		
  	}
  }
  g.close();
  for (int j =0; j < numShapes; j++){
  	myShapeArray[j]->display();
  	cout << endl;
  }
 
return 0;
}
