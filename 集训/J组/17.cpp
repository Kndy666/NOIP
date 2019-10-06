#include <iostream>
#include <algorithm>

using namespace std;

struct stu
{
	string name;
	int num;
	int count;
}stus[105];

bool cmp(stu a, stu b)
{
	if (a.count < b.count && a.num == b.num)return true;
	else return a.num > b.num;
}

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		string name;
		int g1, g2, ans = 0;
		char b1, b2;
		int n1;
		
		cin >> name >> g1 >> g2 >> b1 >> b2 >> n1;
		
		if (g1 > 80 && n1 >= 1)ans += 8000;
		if (g1 > 85 && g2 > 80)ans += 4000;
		if (g1 > 90)ans += 2000;
		if (g1 > 85 && b2 == 'Y')ans += 1000;
		if (g2 > 80 && b1 == 'Y')ans += 850;
		
		stus[i].name = name;
		stus[i].num = ans;
		stus[i].count = i;
	}
	sort(stus, stus + n, cmp);
	cout << stus[0].name << endl << stus[0].num << endl;
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		//cout << stus[i].name << endl << stus[i].num << endl;
		total += stus[i].num;
	}
	
	cout << total << endl; 		
}
