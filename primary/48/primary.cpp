#include <iostream>

using namespace std;

int main()
{
  int arr[1005];
  int n, k, ans = 0, tmp;
  cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    tmp += arr[i];
    if (tmp >= k)
    {
      ans++;
      tmp = 0;
    }
  }
  
  if (tmp != 0)ans++;

  cout << ans << endl;
  return 0;
}
