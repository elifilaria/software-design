#include <iostream>
using namespace std;

class CVector {
  public:
    int x,y;
    CVector () {};
    CVector (int a,int b) : x(a), y(b) {}
    CVector operator + (const CVector&);
    CVector operator - (const CVector&);
    CVector operator * (const CVector&);
};

CVector CVector::operator+ (const CVector& parameter) {
  CVector templ;
  templ.x = x + parameter.x;
  templ.y = y + parameter.y;
  return templ;
}
CVector CVector::operator- (const CVector& parameter) {
  CVector templ;
  templ.x = x - parameter.x;
  templ.y = y - parameter.y;
  return templ;
}
CVector CVector::operator* (const CVector& parameter) {
  CVector templ;
  templ.x = x * parameter.x;
  templ.y = y * parameter.y;
  return templ;
}

int main () {
  CVector foo (3,1);
  CVector boo (1,2);
  CVector resultAdd = foo + boo;
  CVector resultSub = foo - boo;
  CVector resultMul = foo * boo;
  cout << resultAdd.x << ',' << resultAdd.y << '\n';
  cout << resultSub.x << ',' << resultSub.y << '\n';
  cout << resultMul.x << ',' << resultMul.y << '\n';
  return 0;
}
