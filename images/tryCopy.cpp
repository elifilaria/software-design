#include <iostream>
using namespace std;

/**This function copies the characters from arg1 into arg2.*/ 


void copyString (char *&arg2, const char *&arg1) {
   int len;
   for (len = 0; arg1 [len] != '\0'; ++len) {}
   arg2 = new char [len + 1];
   for (int i = 0; i < (len+1); ++i) {
       arg2[i] = arg1[i];
   }
}

int main()
{
   const char *str1 = "Ilaria!";
   char *str2;
   copyString(str2, str1);
   cout << "str1 is " << str1 << " and str2 is " << str2 << endl;
   delete [] str2;
   return 0;
}
