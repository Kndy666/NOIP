#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int a = 1, b = 1, c;
	
	if (n == 1 || n == 2)
	{
		cout << 1 << endl;
		return 0; 	
	}	
	for (int i = 2; i < n; i++)
	{
		c = a + b;
		b = a;
		a = c;
	}
	
	cout << a << endl;
	return 0;
}
