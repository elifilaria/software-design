#include <iostream>
#include <string>
#include <sstream>
using namespace std; 


struct music_t { 
  string title; 
  int year; 
};

int main() 
{ 
  string mystr; 
  music_t asong; 
  music_t * psong; 
  psong = &asong; 
  cout << "Enter title: "; 
  getline (cin, psong->title); 
  cout << "Enter year: "; 
  getline (cin, mystr); 
  (stringstream) mystr >> psong->year; 
  cout << "\nYou have entered:\n"; 
  cout << psong->title; 
  cout <<  " ("  << psong->year << ")\n"; 
  return 0; 
} 
