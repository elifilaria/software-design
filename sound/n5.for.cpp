#include <iostream>
using namespace std;

int main()
{
	for(int x=1, y=2; y<=10; x*=y, y++) {
		cout << x << endl;
	}

}
