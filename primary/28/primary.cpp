#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
  double ans = 0;

  for (int i = 0; i < 30; i++)ans += pow(2, i);

  ans /= 100;

  printf("%.2f", ans);

  cout << endl;

  return 0;
  
}
