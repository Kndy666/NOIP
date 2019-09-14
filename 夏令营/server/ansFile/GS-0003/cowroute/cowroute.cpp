#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

bool Cmp(int a, int b)
{
	return b > a;
}

int main()
{
	//freopen("cowroute.in","r",stdin);
	//freopen("cowroute.out","w",stdout);
	int a, b, n, c[505], m[505], p[505], mp[505];
	bool h = false; 
	cin >> a >> b >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> p[i] >> c[i];
		for(int j = 0; j < c[i]; j++)
		{
			cin >> m[j];
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < c[i]; j++)
		{
			if(m[j] == a)
			{
				h = true;
			}
			if(h)
			{
				if(m[j] = b)
				{
					for(int i = 0; i < n; i++)
					{
						mp[i] = p[j];
						break;	
					} 
				}
			}
		}
	}
	sort(mp, mp + 1, Cmp);
	cout << mp[0] << endl;
}
