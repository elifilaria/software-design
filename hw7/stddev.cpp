#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float x, sum, count, avg, answer;
  cin >> avg;
  count = 0.0;
  sum = 0.0;
  while(cin >> x) {
    count ++;
    sum = sum + (x - avg);
  }
  answer = sqrt((1/count) * (sum * sum));
  cout << answer << endl;
}
