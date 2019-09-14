#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
  freopen("cowroute.in", "r", stdin);
  freopen("cowroute.out", "w", stdout);

  int a, b, n, p, c, tmp, box = 0, ans = -1, k = 0;
  cin >> a >> b >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> p >> c;
    for(int q = 0; q < c; q++)
    {
      cin >> tmp;
      if(tmp == a)
      {
	box = a;
      }
      if(tmp == b && box == a)
      {
	if(k == 1)
	{
	  if(ans > p)
	  {
	    ans = p;
	  }
        }
	else 
	{
	  ans = p;
	  k = 1;
        }
      }
    }
    box = 0;
  }
  cout << ans << endl;
  return 0;
}
