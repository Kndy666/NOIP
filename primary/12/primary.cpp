#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int n;
  cin >> n;

  for (int i = 0; i < (2 * n + 1) / 2; i++)
  {
    for (int j = 0; j < n - i - 1; j++)cout << ' ';
    for (int m = 0; m < 2 * i + 1; m++)cout << m + 1;
    cout << endl;
  }

  for(int i = (2 * n - 1) / 2 ; i >= 1 ; i--)
  {
    for(int j = 0; j < n - i; j++)cout << ' ';
    for(int m = 0; m < 2 * i - 1; m++)cout << m + 1;
    cout << endl;
  }
  return 0;
}
