#include <iostream>
#include <cstdio>

using namespace std;

int a[105], bet[200005], tmp[200005], n, ans = 0;

int main()
{
  freopen("count.in", "r", stdin);
  freopen("count.out", "w", stdout);

  cin >> n;
  
  for (int i = 1 ; i <= n; i++)
  {
    cin >> a[i];
    tmp[a[i]] = 1;
  }
  
  for (int i = 1; i< n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      bet[a[i] + a[j]]++;
    }
  }

  for (int i = 1; i <= 200005; i++)
  {
    if (bet[i] && tmp[i]) ans++;
  }
  
  cout << ans << endl;
  return 0;

}
