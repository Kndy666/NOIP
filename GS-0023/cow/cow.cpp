#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
  freopen("cow.in", "r", stdin);
  freopen("cow.out", "w", stdout);

  int n, d, arr[105], ans = 0;
  cin >> n >> d;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n - 1; i++)
  {
    
    for (int j = 1; j < n - i - 1; j++)
    {
      int dis = abs(arr[j] - arr[j + 1]);
      
      if (dis <= d)ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
