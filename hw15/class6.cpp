#include <iostream>
using namespace std;
 
struct Measurement {
  int shoesize;
  double height;
};
 
struct Hobbit {
  Measurement m;
  Hobbit *bud;
};
 
int main()
{
  Hobbit pippin, merry;
 
  pippin.m.shoesize = 7;  pippin.m.height = 42;
  merry.m.shoesize = 8;  merry.m.height = 41.5;
 
  pippin.bud = &merry;
  merry.bud = &pippin;
 
  cout << "Pippin's friend has height " << (*(pippin.bud)).m.height << endl;
}
