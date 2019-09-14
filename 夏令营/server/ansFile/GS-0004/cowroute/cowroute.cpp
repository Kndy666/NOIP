#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct cow
{
  int p;
  int num;
  int ct[505];
};
bool Cmp(cow a, cow b)
{
  return a.p < b.p;
}
int main()
{
  freopen("cowroute.in", "r", stdin);
  freopen("cowroute.out", "w", stdout);
  int a, b, n;
  cin >> a >> b >> n;
  cow r[10000];
  for(int i = 1; i <= n; i++)
  {
    cin >> r[i].p >> r[i].num;
    for(int j = 1; j <= r[i].num; j++)
    {
      cin >> r[i].ct[j];
    }
  }
  int ans;
  bool aa = false,bb = false;
  sort(r + 1, r + 1 + n, Cmp);
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= r[i].num; j++)
    {
      if(r[i].ct[j] == a)
      {
		aa = true;
      }
      if(aa)
      {
	if(r[i].ct[j] == b)
	{
	  bb = true;
	}
      }
      if(aa && bb)
      {
	cout << r[i].p << endl;
	return 0;
      }
    }
    aa = false;
    bb = false;
  }
  cout << "-1" <<endl;
  return 0;
}
