#include <iostream>
#include <cstdio>
#include <climits>

using namespace std;

int main()
{
	freopen("water.in", "r", stdin);
	freopen("water.out", "w", stdout);
	
	int n, m, minP = 0, minN, maxN = 0;
	int waitList[10005];
	
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> waitList[i];	
	} 
	
	for (int j = m; j < n; j++)
	{
		minN = INT_MAX;
		for (int k = 0; k < m; k++)
		{
			if (waitList[k] < minN)
			{
				minP = k;
				minN = waitList[k]; 
			}
		}
		waitList[minP] += waitList[j];
	}
	
	for (int l = 0; l < m; l++)
	{
		if(waitList[l] > maxN)
		{
			maxN = waitList[l];	
		}		
	}
	
	cout << maxN << endl;	
	return 0;
}
