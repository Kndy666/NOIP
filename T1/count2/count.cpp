#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("count.in", "r", stdin);
  freopen("count.out", "w", stdout);

  int max, foundNum, res, times = 0;
  cin >> max >> foundNum;

  int array_Num[max];

  for (int i = 0; i < max; i++)
  {
    array_Num[i] = i + 1;
  }

  for (int i = 0; i < max; i++)
  {
    res = 0;
    while(array_Num[i] > 0)
    {
      res = res * 10 + array_Num[i] % 10;
      array_Num[i] /= 10;

      if (res % 10 == foundNum)
      {
	times++;
      }

    }
  }
  
  cout << times << endl;

  return 0;
}
