#include <iostream> 
using namespace std; 

void printarray (int arg[], int length) 
{  
  for (int n=0; n<length; n++)   
    cout << arg[n] << " ";   
  cout << "\n"; 
} 

int main() 
{   
  int a6 [10];   
  a6[0] = 1;   
  a6[1] = 1;   
  for (int n = 2; n < 10 ; n++) 
    {     
      a6 [n] = a6[n-1] + a6[n-2]; 
    }   
  printarray (a6, 10);   
  return 0; 
}

