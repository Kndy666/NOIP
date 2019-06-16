#include <iostream>

using namespace std; 

int main()
{
	string str;
	cin >> str;
	int sum = 0, len = str.size(), num = 1;
	
	for (int i = len - 1; i >= 0; i--)
	{
		if (str[i] == '+')
		{
			num = 1;
		} 
		else
		{
			sum += (str[i] - '0') * num;
			num *= 10;
		}
	}
	cout << sum << endl;
	return 0;
} 
