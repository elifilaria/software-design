#include <iostream>
using namespace std;

/** Compute mean and minimum of an array
    @param dat Array of values
    @param nelts Non-negative number of elements in dat
    @param minVal Assigned minimum value in dat by this function
    @return Mean (average) of values in dat */
double averageOf(float dat[], int nelts, float &minVal)
{
  double result = 0;
  minVal = dat[0];
  for(int i = 0; i < nelts; ++i) {
    if ( dat[i] < minVal ) minVal = dat[i];
    result += dat[i];
  }
  result /= nelts;
  return result;
}

int main()
{
  float minimum, mydata[224];
  int n = 0;
  while (cin >> mydata[n]) {
    ++n;
  }
  double avg;

  avg = averageOf(mydata, 225, minimum);

  cout << "avg " << avg << " minimum value " << minimum << endl;
}
