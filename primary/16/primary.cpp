#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int a, i, x = 1;
  cin >> a;

  for (i = a - 1; i > 0; i--)
  {
    x = (x + 1) * 2;
  }

  cout << x << endl;
  return 0;
}
