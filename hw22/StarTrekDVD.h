#ifndef _StarTrekDVD_H_
#define _StarTrekDVD_H_
#include "DVD.h"
#include <iostream>
using namespace std;

class StarTrekDVD: public DVD{

  int episode;
  char* captain;

public:
  StarTrekDVD (unsigned int, const char*, const char*, int,const char*);
  StarTrekDVD ();
  StarTrekDVD (const StarTrekDVD&);
  ~StarTrekDVD ();
  unsigned int getEpisode ();
  char* getCaptain ();
  void display ();
  void setEpisode (unsigned int);
  void setCaptain (const char*);
  StarTrekDVD& operator = (const StarTrekDVD&);
};
#endif
