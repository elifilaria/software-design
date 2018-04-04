#include <iostream>
using namespace std;

char* append (char* s, const char* t){
	int i = 0;
	for (i; s[i] != '\0'; i++);
	for (int j = 0; t[j] != '\0'; j++){
		s[i] = t[j];
		i++;
	}
	return s;
}

int main()
{
	char a[20] = "Hello";
	char b[10] = "world!";
	cout << "Initially, a is " << a << " and b is " << b << endl;
	cout << append(a, b) << endl;  // prints  Helloworld!
	cout << "After calling append(a,b), a is " << a << " and b is " << b << endl;
  	// a should be Helloworld! and b should be unchanged
  	return 0;
}
