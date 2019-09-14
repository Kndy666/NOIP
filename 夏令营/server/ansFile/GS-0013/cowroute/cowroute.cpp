#include <iostream>
#include <cstdio>
#include <climits>

using namespace std;

int main()
{
  freopen("cowroute.in", "r", stdin);
  freopen("cowroute.out", "w", stdout);
 
  int a, b, n, num2, num4, cc = INT_MAX, ans = -1, fee, city, pos;
  cin >> a >> b >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> fee >> city;
  num2 = 0;
  num4 = 0;
  for(int i = 0; i < city; i++)
  {
    cin >> pos; 
    if(pos == a)
    {
      num2 = i;
    }
    if(pos == b)
    {
      num4 = i;
    }
   }
    if(num2 < num4 && fee < cc)
    {
      cc = fee;
      ans = fee;
    }
  }
  cout << ans << endl;
  return 0;
}
