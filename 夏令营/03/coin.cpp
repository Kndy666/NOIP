#include <iostream>

using namespace std;

int main()
{
  
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

