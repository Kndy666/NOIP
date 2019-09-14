/*
	̰���㷨����Ӧ��--����ѡ������ 
	����n��������[a,b]����������ѡ�����ٵĵ㣬ʹ��ÿ�������ڶ�������һ���㣨��ͬ�����ڵĵ������һ������
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
