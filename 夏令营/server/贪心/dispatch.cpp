/*
	贪心算法经典应用--流水作业调度问题 
	
*/ 
#include <iostream>

using namespace std;

int num;
int a[1001],b[1001],c[1001],d[1001];

struct Data 
{
    int m[1001];
    bool mark[1001];
};

Data data;

void insertion_sort(int a[], int arr[], int len)
{
    for (int i = 2; i <= len; i++)
    {
        int key = arr[i];
        int key1 = a[i];
        int j;
        for (j = i - 1; j >= 0 && key < arr[j]; j--)
        {
            arr[j + 1] = arr[j];
            a[j + 1] = a[j];
        }
        arr[j + 1]=key;
        a[j + 1] = key1;
    }
}

int main()
{
    cin >> num;
    int i = 1,sum = 0;
    for (;i <= num; i++)
        cin>>a[i];
    for (i = 1;i <= num; i++)
    {
        cin >> b[i];
        data.m[i] = min(a[i],b[i]);
        d[i] = i;
        if (data.m[i] == a[i])
            data.mark[i] = false;
        else
            data.mark[i] = true;
    }
    insertion_sort(d, data.m, num);
    int j = num, k = 1;
    for (i = 1;i <= num;i++)
    {
        if(data.mark[d[i]] == true)
            c[j--] = d[i];
        else
            c[k++] = d[i];
    }
    for (i = 1; i <= num; i++)
        sum += a[c[i]];
    sum += b[c[i - 1]];
    cout << sum << endl;
    for (i = 1; i <= num; i++)
        cout << c[i] << "  ";
    return 0;
}



