#include <iostream>

using namespace std;

int main()
{
	int n, cc = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cc++;
			cc %= 10;
			cout << cc;
		}
		cout << endl;
	}
}
