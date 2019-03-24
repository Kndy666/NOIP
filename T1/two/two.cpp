#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("two.in", "r", stdin);
  freopen("two.out", "w", stdout);

  int l, r, ans = 0, tmp;
  cin >> l >> r;

  for (int i = l; i <= r; i++)
  {
    tmp = i;
    while (tmp != 0)
    {
      if (tmp % 10 == 2) ans++;
      tmp /= 10;
    }
  }
  
  cout << ans << endl;
  return 0;
}
