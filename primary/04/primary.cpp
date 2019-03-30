#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int a, b, tmp;
  cin >> a >> b;
  for (int i = 0; i <= 99; i++)
  {
    tmp = a * 100 + i;
    if (tmp % b == 0)
    {
      cout << tmp << ' '; 
    }
  }
  cout << endl;
  return 0;
}
