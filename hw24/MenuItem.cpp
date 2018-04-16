#include "MenuItem.h"

MenuItem::MenuItem (int init_val, const char* init_label){
	val = init_val;
	label = makeString(init_label);
}

MenuItem::MenuItem (const MenuItem& mi){
  		val = mi.val;
  		label = makeString(mi.label);
  }

MenuItem& MenuItem::operator = (const MenuItem& mi){
	val = mi.val;
	delete[] label;
	label = makeString(mi.label);
  	return *this;
}

void MenuItem::set_val (int new_val){
	val = new_val;
}

void MenuItem::set_label(const char* new_label){
	delete[] label;
	label = makeString(new_label);
}

void MenuItem::display(ostream& ostr)const{
  	ostr << "[" << val << "] " << label;
}

char* MenuItem::makeString(const char* str){
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
