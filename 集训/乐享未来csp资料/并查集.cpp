#include <iostream>

using namespace std;

int _father[101] = {0}, _num[101] = {0};

//初始化，自己做自己的领导 
void Init(int n)
{
	for (int i = 1; i <= n; i++)
	{
		_father[i] = i;
	}
}

//找 "父亲" ，找到最大的领导 递归 
int GetF(int x) 
{
	if (_father[x] != x)
        _father[x] = GetF(_father[x]);  //路径压缩，优化核心
    return _father[x];

} 

//合并集合， 变成同一个领导 
void Merge(int x, int y)
{
    x = GetF(x);
    y = GetF(y);
    if(x != y)
        _father[y] = x;
}

//判断是不是在同一个集合 
bool Judge(int x, int y)
{
    x = GetF(x);
    y = GetF(y);
    if (x == y)
        return true;
    else 
        return false;
}

//统计集合数，有几个小群体 
int Count_Sets(int n)
{
    int cc = 0;
    for(int i = 1; i <= n; i++)
        if (_father[i] == i)
            cc++;
	return cc;
}

//统计集合中的元素个数， 
void Count_Elements(int n)
{
    for (int i = 1; i <= n; i++)
	{
        _father[i] = GetF(i);   //寻找每个节点的父节点
        _num[_father[i]]++;     //统计父节点下的节点个数
    }
    for(int i = 1; i <= n; i++) //统计父节点外的点的个数
        num[i] = num[father[i]];
}

int main()
{
	int n;
	cin >> n;
	Init(n);
	...
	return 0;
} 
