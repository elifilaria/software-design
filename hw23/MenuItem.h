#ifndef _MenuItem_H_
#define _MenuItem_H_
#include <iostream>
#include <fstream>
using namespace std;

class MenuItem {

  int val;
  char* label;

protected:
  char* makeString (const char*);

public:
  MenuItem (int, const char*);
  MenuItem () {val = 0; label = makeString("");}
  MenuItem (const MenuItem&);
  ~MenuItem () {delete[] label;}
  MenuItem& operator = (const MenuItem &);
  int get_val () {return val;}
  void set_val (int);
  char* get_label () {return label;}
  void set_label (const char*);
  void display (ostream&)const;
};
#endif /* _MenuItem_H_ */
