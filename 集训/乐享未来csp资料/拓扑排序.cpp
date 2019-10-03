/*
 * 拓扑排序
 * 使用邻接矩阵表示图
 */

#include <iostream> 

using namespace std;

#define N 9

/* global data */

//如果i是j的直接前驱,matrix[i][j] = true, 否则martix[i][j] = false;
//其中i表示行,j表示列
int matrix[N][N] =
{
    0,0,1,0,0,0,0,1,0,
    0,0,1,1,1,0,0,0,0,
    0,0,0,1,0,0,0,0,0,
    0,0,0,0,0,1,1,0,0,
    0,0,0,0,0,1,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,1,
    0,0,0,0,0,0,1,0,0
};

int into[N];

void get_into_degree(int n)
{
    for(int j = 0; j < n; j++)
    {
        into[j] = 0;
        for(int i = 0; i < n; i++)
        {
            if(matrix[i][j] == 1)
            {
                into[j]++;
            }
        }
    }
}

void toposort(int n)
{
    //需要输出n个结点，排序结束
    for(int i = 1; i <= n; ++i)
    {
        int j = 0;
        while(j < n && into[j] != 0) j++;
        //找到度为0的点
        cout << j + 1 << " ";
        //更新度
        into[j] = N ;//设结点j为最大度，以免再次输出j
        for(int k = 0; k < n; ++k)
        {
            if(matrix[j][k] == 1)
            {
                into[k]--;
            }
        }
    }
}

int main()
{
    get_into_degree(N);
    toposort(N);
    system("pause");
    return 0;
}


