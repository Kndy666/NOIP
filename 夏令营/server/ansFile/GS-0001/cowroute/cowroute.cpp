#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct plane
{
  int m; 
  int num;
  int city[505];
}list[100005];

bool cmp (plane a, plane b)
{
  return a.m < b.m;
}

int main()
{
  freopen ("cowroute.in", "r", stdin);
  freopen ("cowroute.out", "w", stdout);

  int a, b, N;

  cin >> a >> b >> N;

  int x, y;
  bool flag = 0;

  for (int i = 0; i < N; i++)
  {
    cin >> list[i].m >> list[i].num;

    for (int j = 0; j < list[i].num; j++)
      cin >> list[i].city[j];
  }

  sort (list, list + N, cmp);

  for (int i = 0 ; i < N; i++)
  {
    x = 0;
    y = 0;

    while (list[i].city[x] != a && x < list[i].num)
      x++;
    while (list[i].city[y] != b && y < list[i].num)
      y++;
    if (x < y && list[i].city[x] == a && list[i].city[y] == b)
    {
      cout << list[i].m << endl;
      flag = 1;
      break;
    }
  }

  if (!flag)
    cout << -1 << endl;

  return 0;
}
