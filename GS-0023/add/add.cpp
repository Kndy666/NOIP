#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
  freopen("add.in", "r", stdin);
  freopen("add.out", "w", stdout);

  string str1, str2;
  cin >> str1 >> str2;

  int a[1005], b[1005], c[1005];

  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));
  memset(c, 0, sizeof(c));

  a[0] = str1.size();
  b[0] = str2.size();

  for (int i = 1; i <= a[0]; i++)a[i] = str1[a[0] - i] - '0';
  for (int i = 1; i <= b[0]; i++)b[i] = str2[b[0] - i] - '0';
  
  int lc = max(a[0], b[0]);

  for (int i = 1; i <= lc; i++)
  {
    c[i] = a[i] + b[i] + c[i];
    if (c[i] >= 10)
    {
      c[i] %= 10;
      c[i + 1]++;
    }
  }
 
  if (c[lc + 1] > 0)lc++;

  for (int i = lc; i > 0; i--)
  {
    cout << c[i];
  }

  cout << endl;
  return 0;
}
