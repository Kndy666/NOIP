#include <iostream>
#include <algorithm>

using namespace std;

struct person
{
	string name;
	string sex;
	int year;
	int month;
}a[105];

bool cmp(person a, person b)
{
	if (a.year > b.year)return true;
	else if (a.year < b.year)return false;
	else
	{
		if(a.month > b.month)return true;
		else return false; 
	}
}


int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].name;
		cin >> a[i].sex;
		cin >> a[i].year;
		cin >> a[i].month;
	}
	
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++)cout << a[i].name << ' ' << a[i].sex << ' ' << a[i].year << ' ' << a[i].month << endl;
	
}
