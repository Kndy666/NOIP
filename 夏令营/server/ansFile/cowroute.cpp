#include <iostream>
#include <cstdio>

using namespace std;

int main() {
//	freopen ("cowroute.in", "r", stdin);
//	freopen ("cowroute.out", "w", stdout);
	
	int min = 99999;
	int a, b, n;
	cin >> a >> b >> n;
	for (int i = 0; i < n; i++)
	{
	    int u, s;
	    cin >> u >> s;
	    int l[s];
	    bool ha = 0, hb = 0;
	    for (int j = 0; j < s; j++)
		{
	    	cin >> l[j];
	    	if (l[j] == a)
			{
	    		ha = 1;
			} else if (l[j] == b && ha)
			{
				hb = 1;
			}
			if (ha && hb) {
				if (u < min)
				{
					min = u;
				}
			}
		}
	}
	if (min != 99999)
	{
		cout << min << endl;
	}
	else
	{
		cout << "-1" << endl;
	}
	return 0;
}
// #include <clmits> max = Int_min min = Int_max
