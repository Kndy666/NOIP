#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen ("unhappy.in", "r", stdin);
  freopen ("unhappy.out", "w", stdout);

  int max = 8;
  int index = -1;

  int a, b, c;

  for (int i = 0; i < 7; i++)
  {
    cin >> a >> b;
    c = a + b;
    if (c > max)
    {
      max = c;
      index = i + 1;
    }
  }

  cout << index << endl;
  return 0;
}
