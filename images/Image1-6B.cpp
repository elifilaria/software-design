#include <iostream>
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
    Image (unsigned int w, unsigned int h) {
      width = w;
      height = h;
      data = new Pixel* [height];
      for(int i = 0; i < height; i++){
        data[i] = new Pixel[width];
      }
    }
    ~Image () {
      for(int i = 0; i < 2; ++i){
        delete[] data[i];
      }
      delete[] data;
    }
    int getWidth() {return (width);}
    int getHeight() {return (height);}
    void print();
};

void Image::print() {
  cout << "P6" << endl; 
  cout << width << " " << height << endl;
  cout << depth << endl;
  for ( int i  = 0; i < height; i++){
    cout.write ((char*)data [i], width*sizeof(Pixel));
  }
}

int main () {
  Image foo (3,2);
  foo.print();
  return 0;
}
