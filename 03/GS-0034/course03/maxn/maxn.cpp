#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("maxn.in", "r", stdin);
  freopen("maxn.out", "w", stdout);
  
  int a, b, c;
  cin >> a >> b >> c;
  
  if(a > b)
  {
    if(a > c)
    {
      cout << a << endl;
    }
    else
    {
      cout << c << endl;
    }
  }
  else
  {
    if(c > b)
    {
      cout << c << endl;
    }
    else
    {
      cout << b << endl;
    }
  }
  return 0;
}
