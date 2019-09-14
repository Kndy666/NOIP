#include <iostream>
#include <algorithm>

using namespace std;

struct p
{
	int num;
	int ch;
	int ma;
	int en;
	int sum;
}l[305];

bool cmp(p a, p b)
{	
	if (a.sum < b.sum)return false;
	else if (a.sum > b.sum)return true;
	else
	{
		if (a.ch < b.ch)return false;
		else if (a.ch > b.ch) return true;
		else
		{
			if (a.num > b.num)return false;
			else return true;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		l[i].num = i;
		cin >> l[i].ch >> l[i].ma >> l[i].en;
		l[i].sum = l[i].ch + l[i].ma + l[i].en;
	}
	
	sort(l + 1, l + n + 1, cmp);
	
	for (int i = 1; i <= 5; i++)cout << l[i].num << ' ' << l[i].sum << endl;
}
