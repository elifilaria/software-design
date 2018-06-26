#include <iostream>
using namespace std;

struct Pixel {
  unsigned char red;
  unsigned char green;
  unsigned char blue;
};  // struct

int main()
{
  char s [3];
  cin >> s;
  int width;
  int height;
  int range;
  cin >> width >> height >> range;
  cin.get();

  Pixel** image;   // declares variable 'image' of correct type to point to an array of pointers to scanlines
  image = new Pixel* [height];
  //   dynamically allocates memory for pointers to scanlines
  for(int i = 0; i < height; i++){
    image[i] = new Pixel[width];

    cin.read( (char *) image[i], width*sizeof(Pixel) );
  }// dynamically allocates memory for each scanline using a loop, 
       
  cout << "P6" << endl; 
  cout << width << " " << height << endl;
  cout << range << endl;
  for ( int i  = 0; i < height; i++){
      cout.write ((char*)image [i], width*sizeof(Pixel));
  }
 for(int i = 0; i < 2; ++i){
     delete[] image[i];
 }   // de-allocates memory for each scanline using a loop, 
           
  delete[] image;   //  de-allocates memory for pointers to scanlines
  return 0;
}

