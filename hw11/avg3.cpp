#include <iostream> 
using namespace std; 

int main()
{    
  int number;    
  cin >> number;    
  int * foo;   
  foo = new int[number];    
  int acc = 0;    
  for (int x = 0; x< number;  x++){     
    cin >> foo[x];      
    acc += foo[x]; }   
  float avg = acc/number;   
  cout << "average is " << avg << endl;
}
