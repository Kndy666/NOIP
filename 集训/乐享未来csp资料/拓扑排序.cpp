/*
 * ��������
 * ʹ���ڽӾ����ʾͼ
 */

#include <iostream> 

using namespace std;

#define N 9

/* global data */

//���i��j��ֱ��ǰ��,matrix[i][j] = true, ����martix[i][j] = false;
//����i��ʾ��,j��ʾ��
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
    //��Ҫ���n����㣬�������
    for(int i = 1; i <= n; ++i)
    {
        int j = 0;
        while(j < n && into[j] != 0) j++;
        //�ҵ���Ϊ0�ĵ�
        cout << j + 1 << " ";
        //���¶�
        into[j] = N ;//����jΪ���ȣ������ٴ����j
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


