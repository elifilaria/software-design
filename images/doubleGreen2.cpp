#include <iostream>
using namespace std;

struct Pixel {
  unsigned char red;
  unsigned char green;
  unsigned char blue;
};  

int main()
{
  char s [3];
  cin >> s;
  int width;
  int height;
  int range;
  cin >> width >> height >> range;
  cin.get();

  Pixel** image;   
  image = new Pixel* [height];
 
  for(int i = 0; i < height; i++){
    image[i] = new Pixel[width];

    cin.read( (char *) image[i], width*sizeof(Pixel) );
  } 
          
  cout << "P6" << endl; 
  cout << width << " " << height << endl;
  cout << range << endl;
  for ( int i  = 0; i < height; i++){
    for (int j = 0; j < width; j++){
      image [i][j].green *= 2;
    }
  }
  for ( int i  = 0; i < height; i++){
      cout.write ((char*)image [i], width*sizeof(Pixel));
  }
 for(int i = 0; i < 2; ++i){
     delete[] image[i];
 }   
            
  delete[] image;   
  return 0;
}

