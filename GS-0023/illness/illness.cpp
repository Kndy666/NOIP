#include <iostream>

using namespace std;

int main()
{
  int x, n, ans = 1;
  cin >> x >> n;

  for (int i = 0; i < n; i++)
  {
    ans += ans * x;
  }

  cout << ans << endl;
  return 0;
}
