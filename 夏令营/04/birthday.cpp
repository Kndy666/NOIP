#include <iostream>
#include <algorithm>

using namespace std;

struct p
{
	string name;
	int year;
	int month;
	int day;
}l[105];

bool cmp (p a, p b)
{
	if (a.year < b.year)return true;
	else if (a.year > b.year)return false;
	else
	{
		if (a.month < b.month)return true;
		else if (a.month > b.month)return false;
		else
		{
			if (a.day < b.day)return true;
			else return false;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> l[i].name >> l[i].year >> l[i].month >> l[i].day;
	} 
	
	sort(l, l + n, cmp);
	
	for (int i = 0; i < n; i++)
	{
		cout << l[i].name << endl;
	}
	
	return 0; 
}
