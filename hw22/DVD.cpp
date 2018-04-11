#include "DVD.h"

char* DVD::makecopy(const char* str){
  	int len = 0;
	for (int j = 0; str[j] != '\0'; j++){
		len++;
  	}
  	char* str2 = new char [len+1];
  	for (int j = 0; j < len+1; j++){
		str2[j] = str[j];
	}
	return str2;
}

DVD::DVD (const DVD &d){
  		id = d.id;
  		title = makecopy(d.title);
  		director = makecopy(d.director);
  }

DVD::DVD (unsigned int i, const char* t, const char* dir){
	id = i;
	title = makecopy(t);
	director = makecopy(dir);
}

DVD& DVD::operator = (const DVD & dvd){
	delete[] title;
	delete[] director;
	id = dvd.id;
	title = makecopy(dvd.title);
  	director = makecopy(dvd.director);
  	return *this;
}

void DVD::display(){
  	cout << "[" << id << ". " << title << "/" << director << "]";
}

void DVD::setId(unsigned int i){
	id = i;
}

void DVD::setTitle(const char* t){
	delete[] title;
	title = makecopy(t);
}

void DVD::setDirector(const char* t){
	delete[] director;
	director = makecopy(t);
}
