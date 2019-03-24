#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("coin.in", "r", stdin);
  freopen("coin.out", "w", stdout);
  
  int day, res = 0, day_coin = 0, coin = 0;
  cin >> day;

  for (int i = 0; i <= day; i++)
  {
    res += coin;

    if (day_coin == coin)
    {
      day_coin = 0;
      coin++;
    }
    day_coin++;
  }

  cout << res << endl;
  return 0;
}
