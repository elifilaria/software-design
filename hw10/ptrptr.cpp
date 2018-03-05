#include <iostream>
using namespace std;


int i;
int *p;
int **pp;

int main()
{
i = 5;
p = &i;
pp = &p;

cout << i << " " << *p << " " << **pp << endl;
}
