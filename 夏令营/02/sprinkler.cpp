#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

struct interval
{
	double begin;
	double end;
}shower[15005];
 
int solve(int pos, int L)
{
    int cnt = 0;
    double last = 0, far = 0;
    for(int i = 0; i < pos; i++)
    {
        if(last >= L) return cnt;
        if(shower[i].begin <= last)
            far = max(far, shower[i].end);
        else if(shower[i].begin > last)
        {
            cnt++;
            last = far;
            if(shower[i].begin <= last)
                far = max(far, shower[i].end);
            else
                return -1;
        }
    }
    if(last < L && far >= L) return cnt + 1;
    if(far < L) return -1;
    return cnt;
}
 
bool cmp (interval a, interval b)
{
	return a.begin > b.begin;
}
 
int main()
{
	freopen("in.txt", "r", stdin);
	int T;
	cin >> T;
	
	while(T--)
	{
		double n, w, L;
		cin >> n >> L >> w;
		w /= 2;
		
		double x, r;
		int pos = 0;
		cin >> x >> r;
		
		for (int i = 0; i < n; i++)
		{
			shower[++pos].begin = x - sqrt(r * r - w * w);
        	shower[++pos].end = x + sqrt(r * r - w * w);
        	
        	if (shower[pos - 1].begin < 0)shower[pos - 1].begin = 0;
			if (shower[pos - 1].end > L)shower[pos - 1].end = L; 
		}
		
		sort(shower, shower + pos, cmp);
		
		int ans = solve(pos, L);
		
		cout << ans << endl;
	}	
}
