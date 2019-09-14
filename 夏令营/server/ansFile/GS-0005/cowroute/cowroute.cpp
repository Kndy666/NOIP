#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct plane
{
  int m, num;
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

  int s, e;
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
    s = 0;
    e = 0;

    while (list[i].city[s] != a && s < list[i].num)
      s++;
    while (list[i].city[e] != b && e < list[i].num)
      e++;
    if (s < e && list[i].city[s] == a && list[i].city[e] == b)
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
