#include <iostream>

using namespace std;

int arr[10][10];

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      arr[i][j] = i + j;
    }
  }

  int line1 = 0, line2 = 0;

  for (int i = 1; i <= n; i++)
  {
    line1 += arr[i][i];
  }

  for (int i = 1, j = n; i <= n; i++, j--)
  {
    line2 += arr[i][j];
  }

  cout << line1 << ' ' << line2 << endl;
  return 0;
}
