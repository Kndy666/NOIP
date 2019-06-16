#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int a[1005], b[1005], c[1005];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	string num1, num2;
	cin >> num1 >> num2;
	
	a[0] = num1.size();
	for (int i = 1; i <= a[0]; i++)
	{
		a[i] = num1[a[0] - i] - '0';
	}
	
	b[0] = num2.size();
	for (int j = 1; j <= b[0]; j++)
	{
		b[j] = num2[b[0] - j] - '0';
	}
	
	int lc = a[0] > b[0] ? a[0] : b[0];
	for (int m = 1; m <= lc; m++)
	{
		c[m] = a[m] + b[m] + c[m];
		if (c[m] >= 10)
		{
		    c[m] %= 10;
		    c[m + 1]++;
		}
	}
	
	if (c[lc + 1] > 0) 
	{
		lc++;
	}
	
	for(int n = lc; n > 0; n--)
	{
		cout << c[n];
	}
	cout << endl;
	return 0;
}
