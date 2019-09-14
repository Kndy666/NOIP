//通过_dp数组保留部分结果，避免大量重复性操作
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAXN = 100;

int _dp[MAXN];

int Fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    if (_dp[n] != -1)
    {
        return _dp[n];
    }
    else
    {
        _dp[n] = Fibo(n - 1) + Fibo(n - 2);
        return _dp[n];
    }
}

int main()
{
    fill(_dp, _dp + MAXN, -1); // 赋初始值 -1
    //memset(_dp, -1, sizeof(_dp)); 
    int n;
    cin >> n;
    int res = Fibo(n);
    cout << res << endl;
	return 0;
}






