#include <iostream>

using namespace std;

bool judge(int num, int k)
{
	int ans = 0;
	while(num > 0)
	{
		if (num % 10 == 3)ans++;
		num /= 10; 
	}
	//cout << num << ' ' << ans << endl;
	if (ans == k)return true;
	else return false;
}

int main()
{
	int n, m, k, ans = 0;
	cin >> m >> n >> k;
	
	//cout << m << ' ' << n << ' ' << k << endl;
	for (int i = m; i <= n; i++)
	{
		//cout << i << endl;
		if (i % 19 == 0 && judge(i, k))ans++;	
	}
	
	cout << ans << endl; 	
}
