#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Volunteer
{
	int num;
	int score;	
};

bool Cmp(Volunteer a, Volunteer b)
{
	if (a.score != b.score)
	{
		return a.score > b.score;	
	}
	else
	{
		return a.num < b.num;
	}
}

int main()
{
	freopen("divide.in", "r", stdin);
//	freopen("divede.out", "w", stdout);
	int n, m;
	struct Volunteer list[5005];
	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		cin >> list[i].num >> list[i].score;
	}
	
	sort(list, list + n, Cmp);
	m = m * 15 / 10;
	int score = list[m - 1].score, cc = m;
	
	for (int i = m; i < n; i++)
	{
		if (list[i].score == score)
		{
			cc++;
		}
	}
	
	cout << score << ' ' << cc << endl;
	for (int i = 0; i < cc; i++)
	{
		cout << list[i].num << ' ' << list[i].score << endl;
	}
	return 0;
}
