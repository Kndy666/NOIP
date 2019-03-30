#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int a;
  cin >> a;

  int fib[55];
  for (int i = 0; i < a; i++)
  {
    if (i == 0 || i == 1)
    {
      fib[i] = 1;
    }
    else
    {
      fib[i] = fib[i - 1] + fib[i - 2];
    }
  }
  
  cout << fib[a - 1] << endl;
  return 0;

}
