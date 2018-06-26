#include <iostream>
using namespace std;

struct Pixel {
  unsigned char red;
  unsigned char green;
  unsigned char blue;
}; 

int main()
{
  int borderThickness = 20;
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
  cout << width+2*borderThickness << " " << height+2*borderThickness << endl;
  cout << range << endl;
  for ( int i  = 0; i < borderThickness; i++){
    for (int j = 0; j < width + 2*borderThickness; j++){
      cout << 0 << 0 << 0;
    }
  }

  for (int i = 0; i < height; i++){
    for (int j = 0; j < borderThickness; j++){
      cout << 0 << 0 << 0;
    }
    for (int j = 0; j < width; j++){ 
      cout << image [i][j].red << image [i][j].green << image[i][j].blue;
    }
    for (int j = 0; j < borderThickness; j++){
      cout << 0 << 0 << 0;
    }
  }

  for ( int i  = 0; i < borderThickness; i++){
    for (int j = 0; j < width + 2*borderThickness; j++){
      cout << 0 << 0 << 0;
    }
  }

 for(int i = 0; i < 2; ++i){
     delete[] image[i];
 }    
            
  delete[] image;   
  return 0;
}

