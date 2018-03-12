#include<iostream>
using namespace std;

/** A feline */
struct Cat {
  int color;
  double weight;  /**< Weight in pounds */
  void grow() { /** Increase the weight of Cat c */
    weight *= 1.1;
  }
  void chcl(int x) {
    color = x;
}
};

int main()
{
  Cat misty, dusty;
  misty.color = 3;
  misty.weight = 2;
  cout << "misty weighs " << misty.weight << endl;   // misty weighs 2
  misty.grow();
  cout << "misty weighs " << misty.weight << endl;   // misty weighs 2.2
  dusty.color = 5;
  cout << "dusty has color " << dusty.color << endl; //dusty's color before changing it
  dusty.chcl(15);
  cout << "dusty has color " << dusty.color << endl; //dusty's color after changing it
}
