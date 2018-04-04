#include "IntArray.h"

IntArray::IntArray (int sz){
	size = sz;
	elt = new int [size];
	for (int i = 0; i <= size; i++){
		elt[i] = 0;
	}
}

IntArray::IntArray (){
	elt = new int [DEFAULT_SIZE];
	for (int i = 0; i <= DEFAULT_SIZE; i++){
		elt[i] = 0;
	}
}

IntArray::IntArray (const IntArray &arr){
  		size = arr.size;
  		elt = new int [size];
  		for (int i = 0; i <= size; i++){
			elt[i] = arr.elt[i];
	}
}

IntArray::~IntArray (){
	delete[] elt;
}

IntArray IntArray::operator = (const IntArray& arr){
	delete[] elt;
	size = arr.size;
	elt = new int [size];
  	for (int i = 0; i <= size; i++){
		elt[i] = arr.elt[i];
	}
	return *this;
}

int IntArray::getSize (){
	return size;
}

void IntArray::display (){
	for (int i = 0; i <= size; i++){
		cout << i << ":" << elt[i] << endl;
	}
}

int& IntArray::operator [] (int i){
	if ((i < 0) || (i > size-1))
		cout << "warning!" << endl;
	if (i < 0)
		return elt[0];
	else if (i > size-1)
		return elt[size-1];
	else
		return elt[i];
}
