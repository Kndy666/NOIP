#include <iostream>

using namespace std;

int main()
{
	char ch;
	int num, cc = 0;
	
	cin >> num >> ch;
	
	if (num <= 1000)
	{
		cc = 8;
	}
	else
	{
		while(num >= 0)
		{
			num -= 500;
			cc += 4;
		}
	}
	
	if (ch == 'y')cc += 5;
	
	cout << cc << endl;
}
