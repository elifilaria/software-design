#include <iostream>
using namespace std;

void copyn (char * &c, const char newC[], unsigned int a){
  c = new char[a+1];
  int j = 0;
  while (newC [j] != '\0' && j < a+1) {
          c[j] = newC[j];
          j++;
      }
}

int main() {                                                                                                                        
  char *buff;                                                                                                                             
  copyn(buff, "I love you", 4);                                                                                                          
  cout << buff << endl;

  delete buff;

  return 0;
}
