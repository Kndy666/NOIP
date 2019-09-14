#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

struct plane
{
	int money;
	int city;
	int a[1000];
};

bool Cmp(int a, int b)
{
	return a > b;
 } 

int main()
{
	freopen("cowroute.in", "r", stdin);
	freopen("cowroute.out", "w", stdout);
	int a, b, n;
	cin >> a >> b >> n;
	plane list[n];
	for (int i = 0; i < n; i++)
	{
		cin >> list[i].money >> list[i].city;
		for (int j = 0; j < list[i].city; j++)
		{
			cin >> list[i].a[j];
		}
	}
	sort(list, list + n, Cmp);
	int res;
  	for(int i = 0; i < n; i++)
  	{
    	for(int j = 0; j < list[i].city; j++)
    	{
      		if(a == list[i].a[j])
      		{
				for(int k = j; k < list[i].city; k++)
				{
	  				if(list[i].a[k] == b)
	  				{
	    				res = list[i].money;
	  				}
				}
			}
		}
	}
	cout << res;
	return 0;
}
