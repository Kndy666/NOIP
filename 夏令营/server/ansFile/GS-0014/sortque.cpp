#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool Cmp(int a, int b)
{
  return a < b;
}

int main()
{
  freopen("sortque.in" , "r" , stdin);
  freopen("sortque.out" , "w" , stdout);

  int a[2005], n, m, cc = 0;
  cin >> n >> m;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for(int j = n; j < m + n; j++)
  {
    cin >> a[j];
  }
  sort(a, a + n + m, Cmp);
  for(int k = 0; k < n + m; k++)
  {
    cout << a[k] << ' ';
  }
  cout << endl;

  return 0;
}
