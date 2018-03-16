#include <iostream>
using namespace std;

class Dumdum {
  public:
    bool itis (Dumdum& thingy);
};

bool Dumdum::itis (Dumdum& thingy)
{
  if (&thingy == this) return true;
  else return false;
}

int main () {
  Dumdum You;
  Dumdum* Myself = &You;
  Dumdum Them;
  Dumdum* Yourself = &Them;
  if ( Yourself->itis(You) )
    cout << "yes, &You is Yourself" << endl;
  else cout << "no, &You is not Yourself" << endl;
  return 0;
}
