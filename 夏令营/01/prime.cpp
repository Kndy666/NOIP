#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	
	if (num < 2)
	{
		cout << "NO" << endl;
		return 0;
	}
	
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
	
} 
