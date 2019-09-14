#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
  freopen("sortque.in", "r", stdin);
  freopen("sortque.out", "w", stdout);

  int n, m, tmp[2002];
  cin >> n >> m;
  for(int i = 0; i < n+m; i++)
  {
    cin >> tmp[i];
  }
  int box;
  for(int i = 0; i < m+n-1; i++)
  {
    for(int q = n-1; q < m+n; q++)
    {
      if(tmp[i] > tmp[q])
      {
	box = tmp[i];
	tmp[i] = tmp[q];
	tmp[q] = box;
      }
    }
  }
  for(int i = 0; i < m + n; i++)
  {
    cout << tmp[i] << " ";
  }
  cout << endl;
  return 0;
} 
