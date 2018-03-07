#include <iostream> 
using namespace std; 

int main()
{    
  int number;   
  cin >> number;   
  int * foo;    
  foo = new int[number];      
  for (int x = 0; x< number;  x++){      
    cin >> foo[x]; }    
  cout << foo[2] << endl;
}

