#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int t;
  cin >> t;

  if (t >= 90 && t <= 100)
  {
    cout << 'A' << endl;
  }
  else if (t < 90 && t >= 80)
  {
    cout << 'B' << endl;
  }
  else if (t < 80 && t >= 70)
  {
    cout << 'C' << endl;
  }
  else if (t < 70 && t >= 60)
  {
    cout << 'D' << endl;
  }
  else
  {
    cout << 'E' << endl;
  }
  return 0;
}
