#include <cstdio>
#include <iostream>
using namespace std;

long long n, m, a[10005][105], b[10005][105], c[10005], sum, enter, ans, q;

int main()
{
    cin >> n >> m;
    for (int i = 1; i<= n; i++)
     for (int j = 0; j < m; j++)
     {
        cin >> a[i][j] >> b[i][j];
        c[i] += a[i][j];
     } 
    cin >> enter;
    
    for (int j = 1; j <= n; j++)
    {
        sum += b[j][enter];
        ans = 0;
        q = enter;
        b[j][q] = (b[j][q] - 1) % c[j] + 1;  //减去多余部分
        while (ans < b[j][q])
        {
            ans += a[j][enter];  //如上
            if (ans == b[j][q]) break;
            enter++;
            enter %= m;
        }
    }
    cout << sum % 20123 << endl;  //输出（别忘了%20123）
}
