#include <iostream>
#include <cstdio>

using namespace std;

int gcd(int a, int b)
{
    int r = a % b;
    return r == 0 ? b : gcd(b, a % b);
}

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);
  
  int a, b, ans;
  cin >> a >> b;

  ans = gcd(a, b);

  cout << ans << endl;

  return 0;
}
