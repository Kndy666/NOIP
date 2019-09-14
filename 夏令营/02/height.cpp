#include <iostream>
#include <algorithm>

using namespace std;

struct su
{
	string name;
	int height;
	int date;
}a[105];

bool cmp(su a, su b)
{
	if (a.height > b.height)return false;
	else if (a.height < b.height)return true;
	else
	{
		if (a.date < b.date)return false;
		else return true;
	}
}

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].name;
		cin >> a[i].height;
		cin >> a[i].date;
	}
	
	sort(a, a + n, cmp);
	cout << a[n - 1].name << ' ' << a[n - 1].height << ' ' << a[n - 1].date << endl;
}
