#include <iostream>
#include <cmath>
using namespace std;

/** Compute mean, minimum and standard deviation of an array
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

double stddev(double avg, float dat[], int nelts)
{
    double sum_dev = 0.0;
    for(int i = 0; i < nelts; ++i) {
        double z = (dat[i]-avg)*(dat[i]-avg);
        sum_dev = sum_dev + z;
  }
  double result = sqrt(sum_dev/nelts);
  return result;
}

int main()
{
  float minimum, mydata[224];
  int nelts = 0;
  while (cin >> mydata[nelts]) {
    ++nelts;
  }

  double avg, dev;
  avg = averageOf(mydata, 225, minimum);
  dev = stddev(avg, mydata, 225);

  cout << "avg " << avg << " minimum value " << minimum << "standard dev" << dev << endl;
}
