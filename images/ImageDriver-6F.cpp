#include <iostream>
using namespace std;
#include "Image.h"

int main () {
  Image myimg ("newfile.ppm");
  myimg.zeroRed();
  myimg.greyScale();
  myimg.horizSqueeze();
  myimg.addBorder();
  myimg.print();
  return 0;
}
