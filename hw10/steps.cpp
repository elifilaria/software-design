#include <iostream>
using namespace std;
 
int func(int arg)
{
  arg = arg + 2;
  return arg;
}

int funcp(int *argp)
{
  *argp = (*argp) + 2;
  return *argp;
}


int main()
{

   int i = 17;
   double f = -4.2;

   int *ip = &i;
   double *fp = &f;

   cout << "i : " << i << " f : " <<  f << " *ip : " << *ip << " *fp : " << *fp<< endl;

   i *= 3;
   *fp *= 1.5;
   cout << "i : " << i << " f : " <<  f << " *ip : " << *ip << " *fp : " << *fp<< endl;
   
   double f2 = 2.5;
   *fp = f2;
   i *= *ip;
   
   cout << "i : " << i << " f : " <<  f << " *ip : " << *ip << " *fp : " << *fp<< " f2 : " << f2 << endl;

   cout << "funv(i) returns " << func(i) << endl;
   cout << "i == " << i << ", *ip == " << *ip << endl;
   cout << "func(*ip) returns " << func(*ip) << endl;
   cout << "funcp(ip) returns " << funcp(ip) << endl;
   cout << "funcp(&i) returns " << funcp(&i) << endl;
  
}
