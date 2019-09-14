#include <iostream>

using namespace std;

bool Reverse(int num)
{
	int tmp = num, ans = 0;
	while (tmp)
	{
		ans = ans * 10 + tmp % 10;
		tmp /= 10;
	}
	return (ans == num);
}

bool IsLeap(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return true;
	else
		return false;
}

bool IsDate(int year, int month, int day)
{
	bool flag = false;
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day <= 31) flag = true; break;
		case 4:
		case 6: 
		case 9:
		case 11:
			if (day <= 30) flag = true; break;
		case 2:
			if (IsLeap(year))
				flag = day <= 29;
			else
				flag = day <= 28;
			break;
	}
	return flag;
}

int main()
{
	freopen("date.in", "r", stdin);
	freopen("date.out", "w", stdout);
	
	int begin, end, year, month, day, cc = 0;
	cin >> begin >> end;
	
	for (int date = begin; date <= end; date++)
	{
		year = date / 10000;
		month = date / 100 % 100;
		day = date % 100;
		if (IsDate(year, month, day) && Reverse(date))
			cc++;
	}
	cout << cc << endl;
	return 0;
}
