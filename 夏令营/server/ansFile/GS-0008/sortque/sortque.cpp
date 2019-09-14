#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
  freopen("sortque.in", "r", stdin);
  freopen("sortque.out", "w", stdout);

  int n, m, a[2005];
  cin >> n >> m;
  int b=n+m;
  for (int i=0; i<b; i++)
    cin >> a[i];
  sort(a, a+b);
  for (int i=0; i<b; i++)
    cout << a[i] << ' ';
  cout << endl;
  return 0;
} 
