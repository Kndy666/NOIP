#include <iostream>

using namespace std;

bool specialJuage(int month, int date)
{
	if (month == 2 && date == 29)return true;
	else return false;
}

bool isLeap(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
		return true;
	else if (year % 400 == 0)
		return true;
	else
		return false;
}

int main()
{
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		int y, m, d, ans = 0;
		cin >> y >> m >> d;
		 
		if (specialJuage(m, d))
		{
			cout << -1 << endl;
			continue;
		}
		
		for (int i = 1; i <= 18; i++)
		{
			if (isLeap(i + y))ans += 366;
			else ans += 365;
		}
		
		cout << ans << endl;
	}
}
