#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("sort.in", "r", stdin);
  freopen("sort.out", "w", stdout);

  int a, b, c, tmp;
  cin >> a >> b >> c;
  
  if(a < b)
  {
    tmp = a;
    a = b;
    b = tmp;
  }
  if(a < c)
  {
    tmp = a;
    a = c;
    c = tmp;
  }
  if(b < c)
  {
    tmp = b;
    b = c;
    c = tmp;
  }
  cout << a << " " << b << " " << c << endl;
  return 0;
}
