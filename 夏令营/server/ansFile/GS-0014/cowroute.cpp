#include <bits/stdc++.h> 

using namespace std;

struct Plane
{
  int monny;
  int citys;
  int city[500];
};

int main()
{
  //freopen("cowroute.in" , "r" , stdin);
  //freopen("cowroute.out" , "w" , stdout);

  int a, b, n, cc = 100000, d = 0, f = 0;
  bool flag = true;
  Plane e[1001];
  cin >> a >> b >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> e[i].monny >> e[i].citys;
    for(int j = 0; j < e[i].citys; j++)
    {
      cin >> e[i].city[j];
    }
  }
  for(int c = 0; c < n; c++)
  {
    for(int m = 0; m < e[c].citys; m++)
    {
      if(e[c].city[m] == a)
      {
	d = m;
      }
    }
    for(int k = e[c].citys - 1; k >= 0; k--)
    {
      if(e[c].city[k] == b)
      {
	f = k;
      }
    }
    if(d < f)
    {
      cout << d << ' ' << f << endl;
      if(e[c].monny < cc)
      {
	cc = e[c].monny;
	flag = false;
      }
    }
  }
  if(flag)
  {
    cout << "-1" << endl;
  }
  else
  {
    cout << cc << endl;
  }
  return 0;
}

