#include <iostream>

using namespace std;

int a[105][105];

int main()
{
	int n, ans = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)cin >> a[i][j];
		
	for (int i = 0; i < n; i++)ans += a[i][i];
	for (int i = 0; i < n; i++)ans += a[i][n - i - 1];
	cout << ans << endl;//0,3 1,2 2,1 3,0 
}
