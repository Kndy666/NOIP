#include <iostream>
#include <cstdio>

using namespace std;

bool cmp(int a, int b)
{
  return a < b;
}
int main()
{
  freopen("sortque.in", "r", stdin);
  freopen("sortque.out", "w", stdout);
  int list[20005], cList[100005], n, m, rList[200005];
  cin >> n >> m;
  int num = m + n;
  for(int i = 0; i < num; i++)
  {
    cin >> list[i];
  }
  sort(list, list + num, cmp);
  for(int i = 0; i < num; i++)
  {
    cout << list[i] << ' ';
  }
  cout << endl;
  return 0;
}
