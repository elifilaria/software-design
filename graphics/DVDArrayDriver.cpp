#include <iostream>
using namespace std;
#include "DVDArray.h"
 
int main()
{
  DVDArray arr1, arr2(3);
  cout << "arr1 has size " << arr1.getSize() << endl;
  arr1.display(); cout << endl;
  DVD aho;
  arr2[1] = aho;
  arr2.display(); cout << endl;
  arr2[389]; // should display an error, but not crash
 
  DVDArray arr3(arr2);
  arr3.display(); cout << "-----------" << endl;
  arr1 = arr3;
  arr1.display();
  DVD aha;
  arr2[2] = aha;
  DVD ahe;
  (arr1 = arr2)[0] = ahe;
  arr1.display();
  cout << "DONE!" << endl;

  return 0;
}
