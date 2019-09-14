#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Location
{
	int xi;
	int yi;
	int pi;
	int qi;
};

struct Line
{
	int pos;
	int num;
};

int Min(int a, int b)
{
	return a > b ? b : a;
}

bool CmpNum(Line a, Line b)
{
	return a.num > b.num;
}

bool Cmp(Line a, Line b)
{
	return a.pos < b.pos;
}

int main()
{
	freopen("seat.in", "r", stdin);
	freopen("seat.out", "w", stdout);
	
	int m, n, k, l, d;
	Location list[2005];
	Line rList[1005];
	Line cList[1005];
	
	cin >> m >> n >> k >> l >> d;
	for (int i = 1; i <= m; i++)
	{
		rList[i].pos = i;
		rList[i].num = 0;
	}
	for (int i = 1; i <= n; i++)
	{
		cList[i].pos = i;
		cList[i].num = 0;
	}
	for (int i = 0; i < d; i++)
	{
		cin >> list[i].xi >> list[i].yi >> list[i].pi >> list[i].qi;
	}
	
	for (int j = 0; j < d; j++)
	{
		if (list[j].xi == list[j].pi)
		{
			cList[Min(list[j].yi, list[j].qi)].num++;
		}
		if (list[j].yi == list[j].qi)
		{
			rList[Min(list[j].xi, list[j].pi)].num++;
		}
	}
	
	sort(rList, rList + m, CmpNum);
	sort(rList, rList + k, Cmp);
	sort(cList, cList + n, CmpNum);
	sort(cList, cList + l, Cmp);	

    for (int i = 0; i < k; i++)
	{
	    if (i != k - 1)
		{
	      cout << rList[i].pos << ' ';
	    }
	    else
		{
	      cout << rList[i].pos;
	    }
  	}
  	cout << endl;
	for (int i = 0; i < l; i++)
	{
	    if (i != l - 1)
		{
	      cout << cList[i].pos << ' ';
	    }
	    else
		{
	      cout << cList[i].pos;
	    }
  	}
	return 0;
}
