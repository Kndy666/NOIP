#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("score.in", "r", stdin);
  freopen("score.out", "w", stdout);
  
  int a, b, c;
  cin >> a >> b >> c;
  
  double ans = a * 0.2 + b * 0.3 + c * 0.5;

  cout << ans << endl;
  return 0;
}
