#include <iostream>

using namespace std;

int main()

{
	int a[105] = {0}, b[20005] = {0}, tmp[20005] = {0};
	
	int n, cc = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		tmp[a[i]] = 1;
	}
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			b[a[i] + a[j]] = 1;
		}
	}
	
	for (int i = 1; i <= 20005; i++)
	{
		if (b[i] && tmp[i])cc++;
	}
	
	cout << cc << endl;
} 
