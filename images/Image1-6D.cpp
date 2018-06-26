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
};
Image::Image (unsigned int w, unsigned int h) {
      width = w;
      height = h;
      data = new Pixel* [height];
      for(int i = 0; i < height; i++){
        data[i] = new Pixel[width];
      }
    }

Image::~Image () {
      for(int i = 0; i < 2; ++i){
        delete[] data[i];
      }
      delete[] data;
    }

Image::Image (char* filename){
      ifstream g(filename);
      char s[3];
      g >> s;
      g >> width >> height >> depth;
      g.get();
      data = new Pixel* [height];
      for(int i = 0; i < height; i++){
        data[i] = new Pixel[width];
        g.read( (char *) data[i], width*sizeof(Pixel) );
      }
      g.close();
    }

void Image::print() {
  cout << "P6" << endl; 
  cout << width << " " << height << endl;
  cout << depth << endl;
  for ( int i  = 0; i < height; i++){
    cout.write ((char*)data [i], width*sizeof(Pixel));
  }
}

int main () {
  Image myimg ("imgsame.ppm");
  myimg.print();
  return 0;
}
