#include <iostream>
#include <cstdio>

using namespace std;

int gcd(int a, int b)
{
  if (a % b != 0)
  {
    return gcd(b, a % b);
  }
  return b;
}

int lcm(int a, int b)
{
  return a * b / (gcd(a, b));
}

int main()
{
  freopen("gcd.in", "r", stdin);
  freopen("gcd.out", "w", stdout);

  int a, b;
  cin >> a >> b;

  cout << gcd(a, b) << " " << lcm(a, b) << endl;
  return 0;
}
