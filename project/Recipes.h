/* Williams, Baize, Yurtse: Recipes */
#ifndef _RECIPES_H_
#define _RECIPES_H_

#include <iostream>
#include <vector>
using namespace std;

class Food {
  char *name;

 protected:
  int quant;

 

 public:

  char *makecopy(const char *str);
  Food(const char *item, unsigned int num);
  Food(const char *item);
  Food();
  ~Food(){delete name;}

  void display(vector <Food> fridge);
  void restock(Food f, int amount);
  void consume(Food f, int amount);


};


class Recipe: public Food {
  char *title, *instructions;
  vector <Food> ingredients;

 public: 
  char *makecopy(const char *str);
  Recipe();
  Recipe(const char *item,const char *dir, vector <Food> ing);
  ~Recipe();

  void display();
};

#endif /* _RECIPES_H_ */
