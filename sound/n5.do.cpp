#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	do {
		cout << x << endl;
		x *= y;
		y++;
	} while (y <= 10);

}
