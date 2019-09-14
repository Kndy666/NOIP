/*
	贪心算法经典应用--区间覆盖问题 
	给定n个闭区间[a,b]，选择尽量少的区间覆盖一条指定的线段区间[s,t]。
*/ 
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

struct Node
{
	double x;
	double y;
};

bool Cmp(Node a, Node b)
{
	return a.x < b.x;
}

int main()
{
	freopen("exp.in", "r", stdin);
	freopen("exp.out", "w", stdout);
	int t, ans;
	Node a[20005];
	cin >> t;
	while (t--)
	{
		int n, l, w, index = 0, p, r;
		cin >> n >> l >> w;
		for (int i = 0; i < n; i++)
		{
			cin >> p >> r;
			if (r <= w / 2) continue;
			double val = sqrt(r * r - w * w / 4.0);
			a[index].x = p - val;
        	a[index].y = p + val;
        	index++;
		}
		sort(a, a + index, Cmp);
 		double t1 = 0;
    	int ans = 0, bj = 1;
    	while (t1 < l)
    	{
	        ans++;
	        double s = t1;
	        for (int i = 0; a[i].x <= s && i<= index; i++)
	            if(t < a[i].y)
	            	t1 = a[i].y;
	        if(t1 == s && s < l)
	        {
	            cout << -1 << endl;
	            bj = 0;
	            break;
	        }
	    }
	    if (bj)
	    {
	        cout << ans << endl;
		}
	}
	return 0;
}
