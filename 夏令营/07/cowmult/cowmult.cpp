#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	freopen("cowmult.in", "r", stdin);
	freopen("cowmult.out", "w", stdout);
	
	long long ans = 0;
	
	string a, b;
	
	cin >> a >> b;
	
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < b.size(); j++)
		{
			ans += (a[i] - '0') * (b[j] - '0');		
		}
	}
	
	cout << ans << endl;
}
