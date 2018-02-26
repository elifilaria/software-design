#include <iostream>
using namespace std;

int main()
{
  float x, sum, count, avg;
  sum = 0.0;
  count = 0.0;
  while(cin >> x) {
    sum += x;
    count ++;
  }
  avg = sum / count;
  cout << avg << endl;
}
