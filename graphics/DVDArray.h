#ifndef _DVDArray_H_
#define _DVDArray_H_
#include "DVD.h"
#include <iostream>
using namespace std;

class DVDArray {

  DVD* elt;
  unsigned int size;
  unsigned int DEFAULT_SIZE=4;

public:
  DVDArray (unsigned int);
  DVDArray ();
  DVDArray (const DVDArray&);
  ~DVDArray ();
  DVDArray operator = (const DVDArray&);
  unsigned int getSize ();
  void display ();
  DVD& operator [] (int);
};
#endif
