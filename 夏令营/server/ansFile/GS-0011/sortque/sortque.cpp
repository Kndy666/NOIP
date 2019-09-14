#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
  freopen("sortque.in","r",stdin);
  freopen("sortque.out","w",stdout);
  int n, m, t[2005];
  cin >> n >> m;
  for (int i = 0; i < n + m; i++)
  {
    cin >> t[i];
  }
  sort (t, t + m + n);
  for (int i = 0; i < n + m; i++)
  {
    cout << t[i] << " ";
  }
  cout << endl;
  return 0;
}
