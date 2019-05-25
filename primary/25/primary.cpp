#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("primary.in", "r", stdin);
  freopen("primary.out", "w", stdout);

  char sign;
  int a, a2, ans = 0;
  cin >> a;

  while (cin >> sign)
  {
    cin >> a2;
    if (sign == '+')
    {
      ans += a;
      a = a2;
    }
    if (sign == '*')
    {
      a *= a2;
    }
  }

  ans += a;
  cout << ans << endl;
  return 0;
}
