#include <iostream>

using namespace std;

int main()
{
	int n, sum = 1;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			cout << sum;
			sum++;
			sum %= 10;
		}
		cout << endl;
	}
}
