#include <iostream>
using namespace std;

struct bus1 {
   long int phone_n;
   const char *name;
   const char *location;
   float rating; };

void printbus1 (bus1 &bus) {
   cout << "Info -- Phone: " << bus.phone_n << ", Business name: " << bus.name << ", Location: " << bus.location << ", Rating (out of 5.0): " << bus.rating << endl;
}


int main()
{
   bus1 Sisco;
   bus1 Lamborghini;
   bus1 Ferrari;


   Sisco.phone_n = 5074004996;
   Sisco.name = "Sisco Company";
   Sisco.location = "Northfield, MN";
   Sisco.rating = 3.41;
   Lamborghini.phone_n = 5087596623;
   Lamborghini.name = "Lamborghini Cars";
   Lamborghini.location = "Milano, Italy";
   Lamborghini.rating = 5.00;
   printbus1 (Lamborghini);

   return 0;

}
