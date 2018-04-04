#ifndef _IntArray_H_
#define _IntArray_H_
#include <iostream>
using namespace std;


class IntArray {

  int* elt;
  int size;
  char* director;
  int DEFAULT_SIZE=4;

public:
  IntArray (int);
  IntArray ();
  IntArray (const IntArray&);
  ~IntArray ();
  IntArray operator = (const IntArray&);
  int getSize ();
  void display ();
  int& operator [] (int);
};
#endif
