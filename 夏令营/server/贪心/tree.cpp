/*
	贪心算法经典应用--区间选点问题 
	给定n个闭区间[a,b]，在数轴上选尽量少的点，使得每个区间内都至少有一个点（不同区间内的点可以是一个）。
*/ 
#include <iostream>
#include <algorithm>

using namespace std;

struct Tree
{
	int b, e, t;	
};

bool Cmp(Tree a, Tree b)
{
	return a.e < b.e;
}

int main()
{
	int n, h, ans = 0, tmp, pos = 0;
	cin >> n >> h;
	Tree list[5005]; 
	bool tree[30005] = {0};
	for (int i = 0; i < h; i++)
	{
		cin >> list[i].b >> list[i].e >> list[i].t;
	}
	sort(list, list + h, Cmp);
	
	for (int j = 0; j < h; j++)
	{
		tmp = 0;
		for (int k = list[j].b; k <= list[j].e; k++)
		{
			if(tree[k]) 
				tmp++;
		}
		if (tmp >= list[j].t)
			continue;
		pos = list[j].e;
		while (tmp < list[j].t)
		{
			if (!tree[pos])
			{
				tree[pos] = true;
				tmp++;
				ans++;
			}
			pos--;
		}
	}
	
	cout << ans << endl;
	
	return 0;	
} 
