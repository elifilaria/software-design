#include <iostream> 
using namespace std; 

void printarray (int arg[], int length) {  
  for (int n=0; n<length; n++)  
    cout << arg[n] << " ";   
  cout << "\n"; } 


int main() {   
  int a4 [20];   
  int length = 0;   
  for (int n = 600; n >= 100; n -= 25) 
{     
    a4 [length] = n;     
    length ++; 
}   
  printarray (a4, length);   
  return 0; 
}

