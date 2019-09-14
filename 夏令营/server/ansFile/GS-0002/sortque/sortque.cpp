#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("sortque.in","r",stdin);
	freopen("sortque.out","w",stdout);
	int tmp,a[33000]={0},m,n;
	cin >> n >> m;
	for(int i=0;i<m+n;i++)
	{
		cin >> tmp;
		a[tmp]++;
	}
	for(int i=1;i<=32768;i++)
	{
		while(a[i])
		{
			cout << i << ' ';
			a[i]--;
		}
	}
	cout << endl;
	return 0;
}
