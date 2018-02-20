#include <iostream>
#include "/home/users/cs251/binary.h" 
using namespace std; 

int main() {   
  char a = 45, b = 28, c; //type casting operator (char)   
  c = a & b; //bitwise operator (and)   
  cout << "a " << binary(a) << endl;   
  cout << "b " << binary(b) << endl;   
  cout << "c " << binary(c) << endl;   
  cout << sizeof (c) << endl; //sizeof operator 
}

