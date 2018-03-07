#include <iostream> 
#include <string> 
#include <sstream> 
using namespace std; 

struct music_t {   
  string title;   
  int year; 
} mine, yours; 

void printmusic_t (music_t song); 

int main () 
{   
  string mystr;   
  
  mine.title = "Youth from Daughter";   
  mine.year = 2013;   
  
  cout << "Enter title: ";  
  getline (cin,yours.title);   
  cout << "Enter year: ";   
  getline (cin,mystr);   
  stringstream(mystr) >> yours.year;   
  
  cout << "My favorite song is:\n ";   
  printmusic_t (mine);  
  cout << "And yours is:\n ";   
  printmusic_t (yours);  
  return 0;
} 

void printmusic_t (music_t song)
{   
  cout << song.title;   
  cout << " (" << song.year << ")\n";
}
