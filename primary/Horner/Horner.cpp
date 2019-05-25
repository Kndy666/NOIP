#include <iostream>

using namespace std;

double f (int n, double a[], double x)
{
  int i;                          
  double p = a[n];
  for(i = n; i > 0; i--) p = a[i - 1] + x * p;
  return p;
}

int main()
{
  double a[5] = {2, 6, 8, 0, 1};
  cout << f(5, a, 2) << endl;
  return 0;

}
