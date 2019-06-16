#include <iostream>

using namespace std;

int v[22], n;
bool hash[1001] = {0};

void dfs(int dep, int sum)
{
	cout << "dep:" << dep << '|' << "V:" << sum << endl; 
	if (dep > n)
	{
		hash[sum] = true;
		return;
	}
	dfs(dep + 1, sum + v[dep]);
	dfs(dep + 1, sum);	
}

int main()
{
	int ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];	
	}
	dfs(1, 0);
	for (int i = 1; i < 1001; i++)
	{
		if (hash[i])
		{
			ans++;	
		} 
	}
	cout << ans << endl;
	return 0;
}

