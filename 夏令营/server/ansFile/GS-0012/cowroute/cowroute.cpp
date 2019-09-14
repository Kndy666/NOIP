#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct plane
{
  int money;
  int city;
  int cs[505];
};

bool Cmp(plane a, plane b)
{
  return a.money > b.money;
}

int main()
{
  freopen("cowroute.in", "r", stdin);
  freopen("cowroute.out", "w", stdout);
  int A, B, N;
  cin >> A >> B >> N;
  plane list[N];
  for(int i = 0; i < N; i++)
  {
    cin >> list[i].money >> list[i].city;
    for(int m = 0; m < list[i].city; m++)
    {
      cin >> list[i].cs[m];
    }
  }
  sort(list, list+N, Cmp);
  int res;
  for(int i = 0; i < N; i++)
  {
    for(int o = 0; o < list[i].city; o++)
    {
      if(A==list[i].cs[o])
      {
	for(int x = o; x < list[i].city; x++)
	{
	  if(list[i].cs[x]==B)
	  {
	    res = list[i].money;
	  }
	}
      }
    }
  }
  cout << res << endl;
  return 0;
}
