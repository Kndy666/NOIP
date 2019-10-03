#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int n, m, sum;
struct node
{
	int start, end, power;//start为起始点，end为终止点，power为权值
}edge[5050];

int pre[5050];

int cmp(node a, node b)
{
    return a.power < b.power;//按照权值排序
}

int find(int x)//并查集找祖先
{
    if (x != pre[x])
    {
        pre[x] = find(pre[x]);
    }
    return pre[x];
}

void merge(int x, int y, int n)//并查集合并函数，n是用来记录最短路中应该加入哪个点
{
    int fx = find(x);
    int fy = find(y);
    if(fx != fy)
    {
        pre[fx] = fy;
        sum += edge[n].power;
    }
}
int main()
{
    while(cin >> n)//n是点数
    {
        sum = 0;
        m = n * (n - 1) / 2;//m是边数，可以输入
        int i;
        for(i = 1; i <= m; i++)
        {
            cin >> edge[i].start >> edge[i].end >> edge[i].power;
        }
        for(i = 1; i <= m; i++)
        {
            pre[i] = i;
        }//并查集初始化
        sort(edge + 1, edge + m + 1, cmp);
        for(i = 1; i <= m; i++)
        {
            merge(edge[i].start, edge[i].end, i);
        }
        cout << sum << endl;
    }
    return 0;
}
