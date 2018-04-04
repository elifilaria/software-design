#include <iostream>
using namespace std;

char* append2 (const char* str1, const char* str2){
	int j = 0;
	for (j; str1[j] != '\0'; j++);
	for (j; str2[j] != '\0'; j++);
	char* mystr = new char [j];
	int i = 0;
	for (int k = 0; str1[k] != '\0'; k++){
		mystr[k] = str1[k];
		i++;
	}
	for (int k = 0; str2[k] != '\0'; k++){
		mystr[i] = str2[k];
		i++;
	}
	return mystr;
}

int main()
{
	cout << "*" << append2("Hello ", "world") << "*" << endl;
 // cout:   *Hello world*
  	return 0;
}
