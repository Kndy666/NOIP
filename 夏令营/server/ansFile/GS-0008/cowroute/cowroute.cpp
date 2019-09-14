#include<iostream>
#include<cstdio>
//#include<algorithm>
#include<climits>

using namespace std;

int main()
{
  freopen("cowroute.in", "r", stdin);
  freopen("cowroute.out", "w", stdout);

  int a, b, n;
  cin >> a >> b >> n;
  //int m[10005], c[10005], cc[1005][1000];
  //int an[10005]={0}, ac=0;
  int c[10005], t=INT_MAX;
   for (int i=0; i<n; i++)
    {
      /*cin >> m[i] >> c[i];
	for (int j=0; j<c[i]; j++)
	{
	cin >> cc[i][j];
	if (cc[i][j]==a)
	{
	f=true;
	}
	if (cc[i][j]==b && f)
	{
	an[ac++]=m[i];
	//  cout << m[i] << endl;
	}*/
      int fee, city;
      bool f=false;
      cin >> fee >> city;
      for (int j=0; j<city; j++)
	{
	  cin >> c[j];
	  if (c[j]==a)
	    f=true;
	  if (c[j]==b && f)
	    if (fee<t)
	      t=fee;
	}
    }
   // cout << ac << ' ';
   /*if (an>0)
     {
     //sort(an, an+ac);
     cout << an[0];
     }
     else
     cout << -1;*/
   if (t!=INT_MAX)
     cout << t << endl;
   else
     cout << -1 << endl;
  return 0;
}

