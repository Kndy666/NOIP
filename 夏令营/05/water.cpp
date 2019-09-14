#include <iostream>

using namespace std;

int n, m, ans, sum;

int main()
{
    cin >> n >> m;
    int now = m + 1, water[10005];
    for(int i = 1; i <= n; i++)
    {
        cin >> water[i];
        sum += water[i];
    }
    while(sum != 0)
    {
        for(int i = 1; i <= m; i++)
        {
            if(water[i] > 0)
            {
                water[i]--;
                sum--;
            }
            if(water[i] == 0)
            {
                water[i] = water[now];
                water[now] = 0;
                if(now != n) now++;
            }
        }
        ans++;
    }
    cout << ans << endl;
	return 0;
}
