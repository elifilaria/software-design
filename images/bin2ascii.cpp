#include <iostream>
using namespace std;

int main()
{
   string x;
   cin >> x;
   int a, b, range;
   cin >> a >> b >> range;
   cin.get();
   unsigned char *data = new unsigned char [3*a*b];
   cin.read((char *)data, 3*a*b);

   cout << "p3" << endl;
   cout << a << " " << b << endl;
   cout << range << endl;
   for ( int i = 0; i < 3*a*b; ++i )
      cout << (int)data[i] << " ";
   cout << endl;
   delete [] data;
}
