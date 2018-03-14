#include <iostream>
using namespace std;

struct bus1 {
   long int phone_n;
   const char *name;
   const char *location;
   float rating; };

void printbus1 (bus1 &bus) {
   cout << "Info -- Phone: " << bus.phone_n << ", Business name: " << bus.name << ", Location: " << bus.location << ", Rating (out of 5.0): " << bus.rating << endl; }


void editbus1 (bus1 &bus, const char *busName, long int busPhone, const char *busLocation, float busRating) {
   bus.name = busName;
   bus.phone_n = busPhone;
   bus.location = busLocation;
   bus.rating = busRating;
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
   editbus1 (Ferrari,"Ferrari Cars",5078896566,"Torino, Italy",4.7);
   printbus1 (Ferrari);

   return 0;

}

