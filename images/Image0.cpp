#include <iostream>
using namespace std;

class Image0 {
  unsigned int width, height;
  public:
    Image0 (unsigned int w, unsigned int h) {
      width = w;
      height = h;
    }
    int getWidth() {return (width);}
    int getHeight() {return (height);}
};

int main () {
  Image0 foo (8,5), bar (4,9);
  cout << foo.getWidth() << ',' << foo.getHeight() << '\n';
  cout << bar.getWidth() << ',' << bar.getHeight() << '\n';
  return 0;
}
