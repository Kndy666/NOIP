#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, ans = 0;
  cin >> n;

  int a[105];

  for (int i = 0; i < n; i++)cin >> a[i];

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (abs(a[i] - a[j]) == 1)ans++;
    }
  }

  cout << ans << endl;
  return 0;


}
