#include <iostream>
using namespace std;

int main()
{ 
  string x;
  cin >> x; 
  int a, b, range; 
  cin >> a >> b >> range;
  cin.get();

  unsigned char *data = new unsigned char[3*a*b];
  cin.read((char *)data, 3*a*b);

  int borderThickness = 10;
  int data2_vertLen = 4*borderThickness;
  int data2_horzLen = a*4*borderThickness;

  unsigned char *data2 = new unsigned char[3*a*b];

  for (int i = 0; i < 3*a*b; i++) data2[i] = data[i];
  
  for (int i = 0; i < 3*a*b; i+=3*a) {
    for (int j = 0; j < data2_vertLen; j++) data2[j+i] = 200;
    for (int j = 3*a - data2_vertLen; j < 3*a; j++) data2[j+i] = 200;
}
  for (int i = 0; i < data2_horzLen; i++) data2[i] = 200;
  for (int i = 0; i < data2_horzLen; i++) data2[i+3*a*b-data2_horzLen] = 200; 
  

  cout << "P3" << endl; 
  cout << a << " " << b << endl;
  cout << range << endl;

  for ( int i  = 0; i < 3*a*b; ++i )
    cout << (int)data2[i] << " ";
  cout << endl;
  
  delete [] data;
  delete [] data2;
}
