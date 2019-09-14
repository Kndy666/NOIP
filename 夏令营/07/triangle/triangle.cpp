#include <iostream>
#include <cstdio>

using namespace std;

bool isCreate(int a, int b, int c)
{
	if (a + b > c && a + c > b && b + c > a)return true;
	else return false;
}

int main()
{
	freopen("triangle.in", "r", stdin);
	freopen("triangle.out", "w", stdout);
	
	int n, ans = 0;
	cin >> n; 
	
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = i; j < n - i - 1; j++)
		{
			for(int k = j; k < n - j - 1; k++)
			{
				//cout << i << ' ' << j << ' ' << k << endl;
				
				if (i + j + k < n)k = n - i - j;
				
				if (isCreate(i, j, k))
				{
					if (i + k + j == n)
					{
						ans++;
						//cout << i << ' ' << j << ' ' << k << endl;
					}	
					else if (i + k + j > n)break;
				}
				else break;
			} 
			if (i + j > n)break;
		}
	}
	
	cout << ans << endl;
}
