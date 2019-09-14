#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Res
{
	int num;
	int score;
};

bool Cmp(Res a, Res b)
{
	if (a.score != b.score)
		return a.score > b.score;
	else
		return a.num < b.num;
}

int main()
{
	freopen("score.in", "r", stdin);
	freopen("score.out", "w", stdout)
	
	int n, m, ans = 0, score;
	Res list[5005];
	
	cin >> n >> m;
	ans = m * 1.5;
	for (int i = 0; i < n; i++)
	{
		cin >> list[i].num >> list[i].score;
	}
	sort(list, list + n, Cmp);
	score = list[ans - 1].score;
	for (int i = ans; i < n; i++)
	{
		if (score == list[i].score)
		{
			ans++;
		}
		else
		{
			break; 
		} 
	}
	cout << score << ' ' << ans << endl;
	for (int i = 0; i < ans; i++)
	{
		cout << list[i].num << ' ' << list[i].score << endl;
	}
	
	return 0;
} 
