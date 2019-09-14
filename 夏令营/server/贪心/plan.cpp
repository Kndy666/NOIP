/*
	贪心算法经典应用--选择不相交区间问题 
	给定n个开区间（a,b），选择尽量多个区间，使得这些区间两两没有公共点。 
*/
#include <iostream>
#include <algorithm>

using namespace std;

struct Plan
{
	int sTime;
	int eTime;
};

bool Cmp(Plan a, Plan b)
{
	return a.eTime < b.eTime;
}

int main()
{
	int n, ans = 1;
	cin >> n;
	Plan actList[1005];
	for (int i = 0; i < n; i++)
	{
		cin >> actList[i].sTime >> actList[i].eTime;
	}
	sort(actList, actList + n, Cmp);
	int end = actList[0].eTime;
	for (int j = 1; j < n; j++)
	{
		if (end < actList[j].sTime)
		{
			ans++;
			end = actList[j].eTime;
		}		
	}
	cout << ans << endl;
	return 0;
}
