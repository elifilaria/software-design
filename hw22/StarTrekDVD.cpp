#include "StarTrekDVD.h"

StarTrekDVD::StarTrekDVD (unsigned int i, const char* t, const char* dir, int n, const char* cap): DVD(i,t,dir){

	episode = n;
	captain = makecopy(cap);
}

StarTrekDVD::StarTrekDVD (): DVD (){
	episode = -1;
	captain = makecopy("");
}

StarTrekDVD::StarTrekDVD (const StarTrekDVD &d): DVD (d){
  	episode = d.episode;
  	captain = makecopy(d.captain);
}

StarTrekDVD::~StarTrekDVD (){
	delete[] captain;
}

unsigned int StarTrekDVD::getEpisode (){
	return episode;
}

char* StarTrekDVD::getCaptain (){
	return captain;
}

void StarTrekDVD::display (){
	cout << "[" << id << ". " << "ST" << episode << ":" << title << "/" << captain << "/" << director << "]";
}

void StarTrekDVD::setEpisode (unsigned int e){
	episode = e;
}

void StarTrekDVD::setCaptain (const char* c){
	delete[] captain;
	captain = makecopy(c);
}

StarTrekDVD& StarTrekDVD::operator = (const StarTrekDVD& st){
	DVD::operator=(st);
	delete[] captain;
	episode = st.episode;
	captain = makecopy(st.captain);
  	return *this;
}
