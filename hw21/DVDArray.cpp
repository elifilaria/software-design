#include "DVDArrayP.h"

DVDArrayP::DVDArrayP (int sz){
	size = sz;
	elt = new DVD* [size];
}

DVDArrayP::DVDArrayP (){
	size = DEFAULT_SIZE;
	elt = new DVD* [size];
}

DVDArrayP::DVDArrayP (const DVDArrayP &arr){
  		size = arr.size;
  		elt = new DVD* [size];
  		for (int i = 0; i < size; i++){
  			if(arr.elt[i]){
  				elt[i] = new DVD;
				*elt[i] = *arr.elt[i];
  			}else{
  				elt[i] = arr.elt[i];
  			}	
	}
}

DVDArrayP::~DVDArrayP (){
	for (int i = 0; i < size; ++i)
	{
		if(elt[i]){
			delete elt[i];
		}
	}
	delete[] elt;
}

int DVDArrayP::getSize (){
	return size;
}

void DVDArrayP::display (){
	for (int i = 0; i < size; i++){
		if(elt[i]){
			cout << i << ":" << "[" << elt[i]->getId() << ".\t" << elt[i]->getTitle() << "/" << elt[i]->getDirector() << endl;
		}
	}
}

DVDArrayP& DVDArrayP::operator = (const DVDArrayP& arr){
	for (int i = 0; i < size; ++i)
	{
		if(elt[i])
			delete elt[i];
	}
	delete[] elt;
	size = arr.size;
	elt = new DVD* [size];
  	for (int i = 0; i < size; i++){
  			if(arr.elt[i]){
  				elt[i] = new DVD;
				*elt[i] = *arr.elt[i];
  			}else{
  				elt[i] = arr.elt[i];
  			}	
	}
	return *this;
}

DVD& DVDArrayP::operator [] (int i){
	if ((i < 0) || (i > size-1))
		cout << "warning!" << endl;
	if (i < 0){
		if(elt[0] == 0)
			elt[0] = new DVD;
		return *elt[0];
	}
	else if (i > size-1){
		if(elt[size-1] == 0)
			elt[size-1] = new DVD;
		return *elt[size-1];
	}
	else{
		if(elt[i] == 0)
			elt[i] = new DVD;
		return *elt[i];
	}
}
