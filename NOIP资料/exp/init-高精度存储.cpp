#include <iostream>

using namespace std;

int main()
{
	int a[11];
	string str;
	cin >> str;
	a[0] = str.size();
	
	for (int i = 1; i <= a[0]; i++)
	{
		a[i] = str[a[0] - i] - '0';
	}
	return 0;
}
