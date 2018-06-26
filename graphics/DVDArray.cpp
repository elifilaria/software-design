#include "DVDArray.h"

DVDArray::DVDArray (unsigned int sz){
	size = sz;
	elt = new DVD [size];
}

DVDArray::DVDArray (){
	size = DEFAULT_SIZE;
	elt = new DVD [size];
}

DVDArray::DVDArray (const DVDArray &arr){
  		size = arr.size;
  		elt = new DVD [size];
  		for (unsigned int i = 0; i < size; i++){
			elt[i] = arr.elt[i];
	}
}

DVDArray::~DVDArray (){
	delete[] elt;
}

unsigned int DVDArray::getSize (){
	return size;
}

void DVDArray::display (){
	for (int i = 0; i < size; i++){
		cout << i << ":" << "[" << elt[i].getId() << ".\t" << elt[i].getTitle() << "/" << elt[i].getDirector() << endl;
	}
}

DVDArray DVDArray::operator = (const DVDArray& arr){
	delete[] elt;
	size = arr.size;
	elt = new DVD [size];
  	for (int i = 0; i < size; i++){
		elt[i] = arr.elt[i];
	}
	return *this;
}

DVD& DVDArray::operator [] (int i){
	if ((i < 0) || (i > size-1))
		cout << "warning!" << endl;
	if (i < 0)
		return elt[0];
	else if (i > size-1)
		return elt[size-1];
	else
		return elt[i];
}
