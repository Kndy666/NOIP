#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
  freopen("prime.in", "r", stdin);
  freopen("prime.out", "w", stdout);

  int n;
  cin >> n;

  for (int i = 2; i < sqrt(n); i++)
  {
    if (n % i == 0)
    {
      cout << n / i << endl;
      break;
    }
  }

  return 0;
}
