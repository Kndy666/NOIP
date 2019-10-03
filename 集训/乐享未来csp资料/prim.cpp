/*
	测试用例
6个顶点 m条边	
10  
1 2 6  
1 3 1  
1 4 5  
2 3 5  
2 5 3  
3 4 5  
3 5 6  
3 6 4  
4 6 2  
5 6 6 
*/
#include <iostream>
#include <cstring>

using namespace std;

#define INF 0x7fffffff
#define N 6

bool _visit[N];
int _dist[N] = {0};
int _graph[N][N];  //声明图 
                 
int Prim(int cur)
{
    int index = cur;
    int sum = 0;
    memset(_visit, false, sizeof(_visit));
    _visit[cur] = true;
    
    for (int i = 2; i <= N; i++)
        _dist[i] = _graph[cur][i];
        
    for (int i = 2; i <= N; i++)
	{
        int min = INF;
        for (int j = 2; j <= N; j++)
		{
            if (!_visit[j] && _dist[j] < min)
			{
                min = _dist[j];
                index = j;
            }
        }
        _visit[index] = true;
        sum += min;
        
        for (int j = 2; j <= N; j++)
		{
            if (!_visit[j] && _dist[j] > _graph[index][j])   //执行更新，如果点距离当前点的距离更近，就更新dist
                _dist[j] = _graph[index][j];
        }
    }
    cout << endl;
    return sum;
}

int main(){
	int m, i, j, cost;
	cin >> m;	
	//初始化图G  
    for (i = 1; i <= N; i++)  
    {  
        for (j = 1; j <= N; j++)  
        {  
            _graph[i][j] = INF;  
        }  
    }  
    
    //构建图G  
    for (int k = 1; k <= m; k++)  
    {  
        cin >> i >> j >> cost;  
        //无向图 
        _graph[i][j] = cost;  
        _graph[j][i] = cost;  
    }
	 
    cout << Prim(1) << endl;    //从顶点1开始
    return 0;
}


