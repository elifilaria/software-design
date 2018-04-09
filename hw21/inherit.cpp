#include <iostream>
using namespace std;

class Operations {
  protected:
    int input1, input2;
  public:
    void set_values (int a, int b)
      { 
        input1=a; 
        input2=b;
      }
 };

class Addition: public Operations {
  public:
    int result ()
      { 
        return input1 + input2; 
      }
 };

class Multiplication: public Operations {
  public:
    int result ()
      { 
        return input1 * input2; 
      }
  };
  
int main () {
  Addition add;
  Multiplication mult;
  add.set_values (4,5);
  mult.set_values (4,5);
  cout << add.result() << '\n';
  cout << mult.result() << '\n';
  return 0;
}