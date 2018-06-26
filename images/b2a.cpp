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

  Pixel** image;   // declares variable 'image' of correct type that points to an array of pointers
  image = new Pixel* [height];
  //   dynamically allocates memory for pointers to scanlines
  for(int i = 0; i < height; i++){
    image[i] = new Pixel[width];

    cin.read( (char *) image[i], width*sizeof(Pixel) );
  }// dynamically allocates memory for each scanline using a loop, 

  cout << "P3" << endl; 
  cout << width << " " << height << endl;
  cout << range << endl;
  for ( int i  = 0; i < height; i++){
    for (int j = 0; j < width; j++){
      cout << (int)image [i][j].red << " " << (int)image [i][j].green << " " << (int)image[i][j].blue << " ";
    }
  }
  cout << endl;
 for(int i = 0; i < 2; ++i){
     delete[] image[i];
 }   // de-allocate the memory for each scanline using a loop, 
           
  delete[] image;   //  de-allocate the memory for pointers to scanlines
  return 0;
}

