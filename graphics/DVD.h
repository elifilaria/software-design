#ifndef _DVD_H_
#define _DVD_H_
#include <iostream>
using namespace std;

class DVD {

  unsigned int id;
  char* title;
  char* director;

protected:
  char* makecopy (const char*);

public:
  DVD () {id = 0; title = makecopy (""); director = makecopy ("");}
  DVD (unsigned int, const char*, const char*);
  DVD (const DVD&);
  DVD operator = (const DVD &);
  ~DVD () {delete[] title; delete[] director;}
  void display ();
  unsigned int getId () {return id;}
  char* getTitle () {return title;}
  char* getDirector () {return director;}
  void setId (unsigned int);
  void setTitle (const char*);
  void setDirector (const char*);
};
#endif /* _DVD_H_ */
