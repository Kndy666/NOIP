#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int a, tmp;
  cin >> a;
  tmp = a;
  
  int ans = 0;
  
  while (a > 0)
  {
    ans = ans * 10 + a % 10;
    a /= 10;
  }

  if (tmp == ans) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;


}
