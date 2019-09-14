#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct line
{
  int price;
  int num;
  int city[505];
}list[200005];

bool cmp (line a, line b)
{
  return a.price < b.price;
}

int main()
{
  freopen ("cowroute.in", "r", stdin);
  freopen ("cowroute.out", "w", stdout);

  int a, b, N;

  cin >> a >> b >> N;

  int left, right;
  bool flag = true;

  for (int i = 0; i < N; i++)
  {
    cin >> list[i].price >> list[i].num;

    for (int j = 0; j < list[i].num; j++)
      cin >> list[i].city[j];
  }

  sort (list, list + N, cmp);

  for (int i = 0 ; i < N; i++)
  {
    left = 0;
    right = 0;

    while (list[i].city[left] != a && left < list[i].num)
      left++;
    while (list[i].city[right] != b && right < list[i].num)
      right++;
    if (left < right && list[i].city[left] == a && list[i].city[right] == b)
    {
      cout << list[i].price << endl;
      flag = false;
      break;
    }
  }

  if (flag)
    cout << -1 << endl;

  return 0;
}
