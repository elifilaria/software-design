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
  unsigned char *data2 = new unsigned char[3*a*b/2];

  for (int i = 0, j = 0; i < 3*a*b; i+=12, j+=6){
    data2[j] = data[i];
    data2[j+1] = data[i+1];
    data2[j+2] = data[i+2];
    data2[j+3] = data[i+6];
    data2[j+4] = data[i+7];
    data2[j+5] = data[i+8];
  }

  cout << "P3" << endl; 
  cout << a/2 << " " << b << endl;
  cout << range << endl;
  for ( int i  = 0; i < 3*a*b; ++i )
    cout << (int)data2[i] << " ";
  cout << endl;
  delete [] data;
  delete [] data2;
}
