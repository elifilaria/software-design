#ifndef _DVDArray_H_
#define _DVDArray_H_
#include "DVD.h"
#include <iostream>
using namespace std;

class DVDArrayP {

  DVD** elt;
  int size;
  int DEFAULT_SIZE=4;

public:
  DVDArrayP (int);
  DVDArrayP ();
  DVDArrayP (const DVDArrayP&);
  ~DVDArrayP ();
  DVDArrayP& operator = (const DVDArrayP&);
  int getSize ();
  void display ();
  DVD& operator [] (int);
};
#endif
