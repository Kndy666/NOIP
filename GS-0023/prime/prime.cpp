#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
  freopen("prime.in", "r", stdin);
  freopen("prime.out", "w", stdout);

  int num;

  cin >> num;
 
  for (int i = 2; i < sqrt(num); i++)
  {
    if (num % i == 0)
    {
      cout << num / i << endl;
      break;
    }
  }

  return 0;
}
