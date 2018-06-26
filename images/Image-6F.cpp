#include "Image.h"

Image::Image (unsigned int w, unsigned int h) {
      width = w;
      height = h;
      data = new Pixel* [height];
      for(unsigned int i = 0; i < height; i++){
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
      for(unsigned int i = 0; i < height; i++){
        data[i] = new Pixel[width];
        g.read( (char *) data[i], width*sizeof(Pixel) );
      }
      g.close();
    }

void Image::print() {
  cout << "P6" << endl; 
  cout << width << " " << height << endl;
  cout << depth << endl;
  for (unsigned int i  = 0; i < height; i++){
    cout.write ((char*)data [i], width*sizeof(Pixel));
  }
}

void Image::zeroRed() {
	for ( int i  = 0; i < height; i++){
	   	for (int j = 0; j < width; j++){
      		data [i][j].red = 0;
    	}
  	}
}

void Image::greyScale() {
	int avg;
	for ( int i  = 0; i < height; i++){
	   	for (int j = 0; j < width; j++){
	   		avg = (data [i][j].red + data [i][j].green + data [i][j].blue)/3;
	   		data [i][j].red = avg;
	   		data [i][j].green = avg;
	   		data [i][j].blue = avg;
    	}
  	}
}

void Image::horizSqueeze() {
	Pixel** data2 = new Pixel* [height];
    for(unsigned int i = 0; i < height; i++){
        data2[i] = new Pixel[width/2];
    }
 	for ( int i  = 0; i < height; i++){
		for (int j = 0, k = 0; j < width; j+=2, k++){
			data2 [i][k].red = data [i][j].red;
			data2 [i][k].green = data [i][j].green;
			data2 [i][k].blue = data [i][j].blue;
		}
  	}
  	for(int i = 0; i < 2; ++i){
        delete[] data[i];
      }
     delete[] data;
     data = new Pixel* [height];
      	for(unsigned int i = 0; i < height; i++){
        	data[i] = new Pixel[width/2];
     	}
  	for ( int i  = 0; i < height; i++){
		for (int j = 0; j < width/2; j++){
			data [i][j].red = data2 [i][j].red;
			data [i][j].green = data2 [i][j].green;
			data [i][j].blue = data2 [i][j].blue;
		}
  	}
  	width = width/2;
}

void Image::addBorder(){
	int borderThickness = 20;
	for ( int i  = 0; i < borderThickness; i++){
    	for (int j = 0; j < width; j++){
      		data [i][j].red = 0;
			data [i][j].green = 0;
			data [i][j].blue = 0;
    	}
  	}
  	for (int i = borderThickness; i < height - borderThickness; i++){
    	for (int j = 0; j < borderThickness; j++){
     		data [i][j].red = 0;
			data [i][j].green = 0;
			data [i][j].blue = 0;
    	}
    	for (int j = width - borderThickness; j < width; j++){
      		data [i][j].red = 0;
			data [i][j].green = 0;
			data [i][j].blue = 0;
    	}
  	}
  	for ( int i  = height - borderThickness; i < height; i++){
    	for (int j = 0; j < width; j++){
      		data [i][j].red = 0;
			data [i][j].green = 0;
			data [i][j].blue = 0;
    	}
  	}
}
