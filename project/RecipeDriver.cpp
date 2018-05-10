#include "Recipes.h"
using namespace std;

// Don't try to run this yet. The vectors are super buggy, it turns out.

int main() {
  Food Brus("Brussel Sprouts, 1lbs", 1);
  Food OlOi("Olive Oil, 1tsp", 50);
  Food Pep("Black Pepper, 1tsp", 30);
  Food NaCl("Salt, pinch", 200);

  vector<Food> Fridge;
 
 
    Fridge.push_back(NaCl);
  
    Fridge.push_back(Brus);
  
    // Fridge.resize(3, OlOi);
  //  Fridge.resize(3);
  // Fridge[3]=Pep;
  // Fridge.push_back(Pep);

    // cout << Fridge.size() << endl;

   /*  for (int i = 0; i < 4; i++){
     cout << Fridge[i] << endl;
     }*/
  
  Recipe RoastBr("Roasted Sprouts", "Combine ingredients.", Fridge);

  cout << "Testing." << endl;

  return 0;
}
