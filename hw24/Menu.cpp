#include "Menu.h"

Menu::Menu (unsigned int sz){
	vec = new MenuItem*[sz];
	size = sz;
	count = 0;
	not_found = -1;
}

Menu::Menu (){
	vec = new MenuItem*[DEFAULT_SIZE];
	size = DEFAULT_SIZE;
	count = 0;
	not_found = -1;
}

Menu::Menu (const Menu& m){
	copyVec(m);
  	size = m.size;
  	count = m.count;
  	not_found = m.not_found;
}

Menu::~Menu (){
	deleteVec();
}

Menu& Menu::operator = (const Menu& m){
	deleteVec();
	copyVec(m);
	size = m.size;
	count = m.count;
	not_found = m.not_found;
  	return *this;
}

bool Menu::add_item (int vl, const char* lbl){
	if (count < size){
		vec[count] = new MenuItem(vl, lbl);
		if (vec[count]->get_val() < not_found){not_found = vec[count]->get_val() - 1;}
		count++;
		return 1;
	}
	else{return 0;}
}

bool Menu::add_item (const MenuItem& item){
	if (count < size){
		vec[count] = new MenuItem (item);
		if (vec[count]->get_val() < not_found){not_found = vec[count]->get_val() - 1;}
		count++;
		return 1;
	}
	else{return 0;}
}

void Menu::display(ostream& ostr)const{
  	ostr << "size=" << size << " count=" << count << " not_found=" << not_found << endl;
  	for (unsigned int j = 0; j < count; j++){
		ostr << j << ". ";
		if(vec[j] != 0)
			vec[j]->display(ostr);
		ostr << endl;
	}
}

MenuItem& Menu::operator [] (int index){
	return *vec[index];
}

int Menu::get_value (ostream& ostr, istream& istr)const{
	for (unsigned int j = 0; j < count; j++){
		ostr << "\t" << j+1 << ". ";
		if(vec[j])
			ostr << vec[j]->get_label() << endl;
	}
	ostr << "Your choice (1-" << count << "): ";
	unsigned int input;
	istr >> input; 
	if (input <= count+1 && input >= 1){
		return vec[input-1]->get_val();
	}
	else{return not_found;}
}

void Menu::copyVec(const Menu &m){
  	vec = new MenuItem* [m.size];
  	for (unsigned int j = 0; j < m.count; j++){
  		if (m.vec[j])
			vec[j] = new MenuItem(*m.vec[j]);
	}
}

void Menu::deleteVec(){
	for (unsigned int j = 0; j < size; j++){
		if (vec[j] != 0){
			delete vec[j];
			vec[j] = 0;
		}
	}
	delete[] vec;
}
