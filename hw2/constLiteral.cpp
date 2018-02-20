#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'
const int pathwidth = 100;
const char tabulator = '\t';

int main()
{
  double r =5.0;
  double circle;

  circle = 2 * PI * r;
  cout << circle;
  cout << NEWLINE;

  return 0;

  /* const int pathwidth = 100;
     const char tabulator = '\t';*/

  pathwidth = 150;
  tabulator = '\r';

  cout << pathwidth << endl; /*gives an error saying that the varialbe is read-only hence non modifieable*/
  cout << tabulator << endl; /*error saying that the varialbe is not modifiable */
}
