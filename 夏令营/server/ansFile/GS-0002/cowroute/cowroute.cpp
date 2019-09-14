#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cowroute.in","r",stdin);
	freopen("cowroute.out","w",stdout);
	int a,b,n,tmp=0x7fffffff,ans=tmp,city[100005][505]={0},cost[100005]={0};
	cin >> a >> b >> n;
	for(int i=1;i<=n;i++)
  	{
    	cin >> cost[i] >> city[i][0];
   		for(int j=1;j<=city[i][0];j++)
    	{
      		cin >> city[i][j];
    	}
  	}
  	bool aj=false,bj=false; 
  	for(int i=1;i<=n;i++)
  	{
  		for(int j=1;j<=city[i][0];j++)
  		{
  			if(city[i][j]==a)	aj=true;
  			if(aj)	bj=true;
  			if(aj&&bj)
  			{
  				if(cost[i]<ans)	ans=cost[i];
			}
		}
		aj=false;
		bj=false;
	}
	if(ans!=tmp)	cout << ans << endl;
	else cout << -1 << endl;
	return 0;
}
