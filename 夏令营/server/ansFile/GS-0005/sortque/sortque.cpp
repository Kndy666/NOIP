#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
  freopen ("sortque.in", "r", stdin);
  freopen ("sortque.out", "w", stdout);

  int list[2005];
  int n, m;

  cin >> n >> m;

  for (int i = 0; i < n + m; i++)
  {
    cin >> list[i];
  }

  sort (list, list + n + m);

  for (int i = 0; i < n + m; i++)
    cout << list[i] << ' ';
  cout << endl;
  return 0;
}
