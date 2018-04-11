#include <iostream>
using namespace std;
#include "StarTrekDVD.h"
 
int main()
{
  char str[] = "Gandhi";
  StarTrekDVD d1(4, str, "Richard Attenborough", 10, "Mohammed");
  StarTrekDVD d2;
  StarTrekDVD d3(d1);
 
  cout << "After constructors:" << endl;
  d1.display(); cout << endl;
  d2.display(); cout << endl;
  d3.display(); cout << endl;
  str[0] = 'X';
 
  cout << "Test for dynamically allocated copies" << endl;
  d1.display(); cout << endl;
  d2.display(); cout << endl;
  d3.display(); cout << endl;

  cout << d2.getId() << endl;
  cout << d1.getTitle() << endl;
  cout << d1.getDirector() << endl;

  d1.setId(2);
  d1.setTitle("Shadowlands");
  d2.setDirector("Ingmar Bergman");
  d1.setCaptain("YOU!!");

  cout << "After state changes:" << endl;
  d1.display(); cout << endl;
  d2.display(); cout << endl;
  d3.display(); cout << endl;

  d3 = d2;
  d2.setTitle("Wild Strawberries");
  d2.setEpisode(0);
 
  cout << "After more state changes:" << endl;
  d1.display(); cout << endl;
  d2.display(); cout << endl;
  d3.display(); cout << endl;
  
}
