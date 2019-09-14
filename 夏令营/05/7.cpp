#include <iostream>

using namespace std;

bool a(int num)
{
	while(num > 0)
	{
		if (num % 10 == 7)return false;
		num /= 10;	
	}
	return true;	
}

bool b(int num)
{
	if (num % 7 == 0)return false;
	else return true;
}

int main()
{
	int n, cc = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		if (a(i) && b(i))cc++;
	}
	
	cout << cc << endl;
}
