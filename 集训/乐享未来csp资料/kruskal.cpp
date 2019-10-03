#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int n, m, sum;
struct node
{
	int start, end, power;//startΪ��ʼ�㣬endΪ��ֹ�㣬powerΪȨֵ
}edge[5050];

int pre[5050];

int cmp(node a, node b)
{
    return a.power < b.power;//����Ȩֵ����
}

int find(int x)//���鼯������
{
    if (x != pre[x])
    {
        pre[x] = find(pre[x]);
    }
    return pre[x];
}

void merge(int x, int y, int n)//���鼯�ϲ�������n��������¼���·��Ӧ�ü����ĸ���
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
    while(cin >> n)//n�ǵ���
    {
        sum = 0;
        m = n * (n - 1) / 2;//m�Ǳ�������������
        int i;
        for(i = 1; i <= m; i++)
        {
            cin >> edge[i].start >> edge[i].end >> edge[i].power;
        }
        for(i = 1; i <= m; i++)
        {
            pre[i] = i;
        }//���鼯��ʼ��
        sort(edge + 1, edge + m + 1, cmp);
        for(i = 1; i <= m; i++)
        {
            merge(edge[i].start, edge[i].end, i);
        }
        cout << sum << endl;
    }
    return 0;
}
