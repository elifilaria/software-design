#include <iostream>
using namespace std;

int main()
{
  char a = 'oib'; /* when a string is declared as a char the running program prints the last char in the string */
  signed char b = 130; /* the program doesn't execute any reasonable answer except for a strange character */
  unsigned char c = -10; /* the program doesn't execute nothing except a strange character */
  short d = 0;
  signed short e = -3300;
  unsigned short f = -3300; /*unsigned short doesn't have negative numbers in its range hence the program executes a wrong number */
  short int g = -1; /* this is the same decleration as short */
  signed short int h = 5645; /*this is the same decleration as signed short */
  unsigned short int i = 2569; /*same as unsigned short */
  int j = 2.8; /* the program rounds the floating number to the closest lower integer */
  signed int k  = 2147483647; 
  unsigned int l = 255698.5266; /*the program rounds the floating numbers to the closest lower integer */
  signed m = 0; /*same as signed int */
  unsigned n = 0; /*same as unsigned int */
  long o = 2147456; 
  signed long p = -23651488;
  unsigned long q  = 45269855;
  long int r = 21474565; /*same as long */
  bool s = true; /* boolean true executes 1 */
  bool y = false; /*boolean false executes 0 */
  float t = 2.6585;
  long double u = 265.5896646; /*program rounds the number to two figures after the decimal point */
  wchar_t v = '/nh'; /*contains any graphic character and executes the corresponding number */ 

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << e << endl;
  cout << f << endl;
  cout << g << endl;
  cout << h << endl;
  cout << i << endl;
  cout << j << endl;
  cout << k << endl;
  cout << l << endl;
  cout << m << endl;
  cout << n << endl;
  cout << o << endl;
  cout << p << endl;
  cout << q << endl;
  cout << r << endl;
  cout << s << endl;
  cout << t << endl;
  cout << u << endl;
  cout << v << endl;
  cout << y << endl;
}
