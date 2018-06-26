#ifndef _IMAGE_
#define _IMAGE_
#include <iostream>
#include <fstream>
using namespace std;

struct Pixel {
  unsigned char red;
  unsigned char green;
  unsigned char blue;
};

class Image {
  unsigned int width, height, depth = 255;
  Pixel** data;
  public:
    int getWidth() {return (width);}
    int getHeight() {return (height);}

    Image (unsigned int, unsigned int);
    ~Image ();
    Image (char*);
    void print();
    void zeroRed();
    void greyScale();
    void horizSqueeze();
    void addBorder();
};

#endif  // _IMAGE_
