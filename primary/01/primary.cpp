#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int a;
  cin >> a;

  for (int i = 2; i <= sqrt(a); i++)
  {
    if (a % i == 0)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
} 
