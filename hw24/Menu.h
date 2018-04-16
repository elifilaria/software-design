#ifndef _Menu_H_
#define _Menu_H_
#include <iostream>
#include <fstream>
#include <cassert>
#include "MenuItem.h"
using namespace std;

class Menu {

  MenuItem** vec;
  unsigned int size;
  unsigned int count;
  int not_found;

protected:
  unsigned int DEFAULT_SIZE = 20;
  void copyVec (const Menu&);
  void deleteVec ();

public:
  Menu (unsigned int);
  Menu ();
  Menu (const Menu&);
  ~Menu ();
  Menu& operator = (const Menu &);
  unsigned int get_size () {return size;}
  unsigned int get_count () {return count;}
  int get_not_found () {return not_found;}
  bool add_item (int, const char*);
  bool add_item (const MenuItem&);
  void display (ostream&)const;
  MenuItem& operator [] (int); //arguements and output might have a problem
  int get_value (ostream&, istream&)const; //arguments might have a problem
};
#endif /* _Menu_H_ */
