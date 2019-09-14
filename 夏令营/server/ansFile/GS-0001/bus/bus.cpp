#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
long long n, m, a[505], f[4000105], t, k, maxn, minn=1000000000;

void dfs(int t,int k)
{
    if (k == n)
	{
        if (f[t] < minn) 
			minn = f[t];
        return;
    }
    long long s = 0, bian;
    for (int i = k + 1; i <= n; i++)
	{
        if (a[i] <= t + m)
		{
            s += t + m -a[i];
            if (s >= minn)
				return;
            bian = i;
        }
        else 
			break;
    }
    if (t + m - a[n] >= 0)
	{
        if (minn > f[t] + s) 
			minn = f[t]+s;
        return;
    }
    if (f[t] + s < f[t + m] && t + m - a[k + 1] >= 0)
	{
        f[t + m] = f[t] + s;
        dfs(t + m, bian);
    }
    s = 0;
    for (int i = k + 1; i <= n; i++)
	{
        s += (i - k - 1) * (a[i] - a[i - 1]);
        if(s >= minn)
			return;
        if (f[t] + s < f[a[i]] && t + m <= a[i] && a[i] != a[i + 1])
		{
            f[a[i]] = f[t] + s;
            dfs(a[i], i);
        }
    }
}
int main()
{
    freopen("bus.in","r",stdin);
    freopen("bus.out","w",stdout);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1,a + n + 1);
    for (int i = 1; i <= 4000105; i++)
	{
        f[i] = 1000000000;
    }
    long long p = 0;
    for (int i = 1; i <= n; i++)
	{
        p += (i - 1) * (a[i] - a[i - 1]);
        f[a[i]] = p;
        if (a[i] != a[i + 1])
			dfs(a[i], i);
    }
    cout << minn << endl;
    return 0;
}
