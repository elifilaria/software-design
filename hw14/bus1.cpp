#include <iostream>
using namespace std;

struct bus1 {
   long int phone_n;
   const char *name;
   const char *location;
   float rating;
};

int main()
{
   bus1 Sisco;
   bus1 Lamborghini;
   
   Sisco.phone_n = 5074004996;
   Sisco.name = "Sisco Company";
   Sisco.location = "Northfield, MN";
   Sisco.rating = 3.17;

 
   Lamborghini.phone_n = 5087596623;
   Lamborghini.name = "Lamborghini Cars";
   Lamborghini.location = "Milano, Italy";
   Lamborghini.rating = 5.00;

   return 0;
}
