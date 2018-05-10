/* Williams, Baize, Yurtse: Recipes */
using namespace std;

#include "Recipes.h"

// Helper method for copying strings:

char * Food::makecopy(const char *str){
  int len;
  for (len = 0;  str[len] != '\0';  len++){}
  char *strcopy = new char[len + 1];
  for (int y = 0;  y < len+1;  y++){
    strcopy[y] = str[y];
  }

  return strcopy;
}



// Constructors for Food:

Food::Food(const char *item, unsigned int num){
  name = makecopy(item); 
  quant = num;
}

Food::Food(const char *item){
  name = makecopy(item);
  quant = 0;
}

Food::Food(){
  name = makecopy("");
  quant = 0;
}


// Recipe Constructors:

Recipe::Recipe (){
  title=makecopy("");
  instructions=makecopy("");
}

Recipe::Recipe (const char *item, const char *dir, vector <Food> ing){
  title = makecopy(item);
  instructions = makecopy(dir);
  for (int i = 0; i < ing.size(); i++)
    {
      ingredients.push_back(ing[i]);
    };

}

char * Recipe::makecopy(const char *str){
  int len;
  for (len = 0;  str[len] != '\0';  len++){}
  char *strcopy = new char[len + 1];
  for (int y = 0;  y < len+1;  y++){
    strcopy[y] = str[y];
  }

  return strcopy;
}

Recipe::~Recipe(){
  delete title;
  delete instructions;
}

// Other Recipe Methods:

//void Recipe::display{}
