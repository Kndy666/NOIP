#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
  return a < b;
}
int main()
{
  freopen("sortque.in", "r", stdin);
  freopen("sortque.out", "w", stdout);
  int list[10005], list2[10005], rList[100005], m, n;
  cin >> n >> m;
  for(int i = 0; i < m + n; i++)
  {
    cin >> list[i];
  }
  sort(list, list + m + n, cmp);
  for(int i = 0; i < m + n; i++)
  {
    cout << list[i] << ' ';
  }
  cout << endl;
  return 0;
}
