#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	while (y <= 10) {
		cout << x << endl;
		x *= y;
		y++;
	}

}
