#include<iostream>
#include<algorithm>

using namespace std;

struct line 
{
    int n;
	int p;
}k[1005], l[1005];

bool cmp(line x, line y)
{
    return x.n > y.n;
}

bool cmp1(line x, line y)
{
    return x.p < y.p;
}

int d, n, m, p, q, x1, x2, y1, y2;
int main()
{
    cin >> m >> n >> p >> q >> d;
    for(int i = 0; i < d; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == x2) 
        {
        	l[min(y1, y2)].p = min(y1, y2);
        	l[min(y1, y2)].n++;
        }
        else 
        {
        	k[min(x1, x2)].p = min(x1,x2);
        	k[min(x1, x2)].n++;
        }
    }
    sort(l, l + n, cmp);
    sort(k, k + m, cmp);
    sort(l, l + q, cmp1);
    sort(k, k + p, cmp1);
    for(int i = 0; i < p; i++) cout << k[i].p << " ";
    cout << endl;
    for(int i = 0; i < q; i++) cout << l[i].p << " ";
    return 0;
}
