#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
  freopen("sortque.in", "r", stdin);
  freopen("sortque.out", "w", stdout);

  int n, m, a[2005];
  cin >> n >> m;
  for (int i = 0; i < n + m; i++)
  {
    cin >> a[i];
  }

  sort(a, a + n + m);

  for (int i = 0; i < n + m; i++)
  {
    cout <<  a[i] << ' ';
  }
}
