#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("expr.in", "r", stdin);
  freopen("expr.out", "w", stdout);

  char sign;
  long long a, a2, ans = 0;
  cin >> a;
  a %= 10000;
  while (cin >> sign)
  {
    cin >> a2;
    a2 %= 10000;
    if (sign == '+')
    {
      ans += a;
      ans %= 10000;
      a = a2;
    }
    if (sign == '*')
    {
      a *= a2;
      a %= 10000;
    }
  }

  ans += a;
  cout << ans % 10000 << endl;
  return 0;
}
