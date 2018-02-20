#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
 string mystr;
 string name;
 float shoesize = 0;
 int numfav = 0;

 cout << "Enter your name: ";
 getline (cin,mystr);
 cout << "Enter your shoe size: ";
 getline (cin,mystr);
 stringstream(mystr) >> shoesize;
 cout << "Enter your favorite number: ";
 getline (cin,mystr);
 stringstream(mystr) >> numfav;
 cout << name << "The average of the wo numbers is: " << (shoesize + numfav)/2 << endl;
 return 0;
}
