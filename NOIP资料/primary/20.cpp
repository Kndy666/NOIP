#include <iostream>

using namespace std;

int main()
{
	int day = 0, days, coin = 1, coins = 0;
	cin >> days;
	for (int i = 0; i < days; i++)
	{
		day++;
		coins += coin;
		if (day == coin)
		{
			day = 0;
			coin++;
		}	
	} 
	cout << coins << endl;
	return 0;	
} 
