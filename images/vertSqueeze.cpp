#include <iostream>
using namespace std;

int main()
{ 
  string x;
  cin >> x; 
  int a, b, range, n = 0; 
  cin >> a >> b >> range;
  cin.get();
  unsigned char *data = new unsigned char[3*a*b];
  cin.read((char *)data, 3*a*b);
  unsigned char *data2 = new unsigned char[3*a*b/2];

  for (int i = 0, j = 0; i < 3*a*b; i+=(6*a), j+=(3*a)){
    for (n = 0; n < a*3; n++) data2[n+j] = data[n+i];
  }

  cout << "P3" << endl; 
  cout << a << " " << b/2 << endl;
  cout << range << endl;
  for ( int i  = 0; i < 3*a*b; ++i )
    cout << (int)data2[i] << " ";
  cout << endl;
  delete [] data;
  delete [] data2;
}
