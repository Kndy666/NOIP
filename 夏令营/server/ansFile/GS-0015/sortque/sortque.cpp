#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

bool Cmp(int a,int b)
{
  return a<b;
}

int main()
{
  freopen("sortque.in","r",stdin);
  freopen("sortque.out","w",stdout);
  int n,m,td[2005];
  cin >> n >> m;
  for(int i=0;i<n+m;i++)
  {
    cin >> td[i];
  }
  sort(td,td+n+m,Cmp);
  for(int j=0;j<n+m;j++)
  {
    cout << td[j] << " ";
  }
  cout << endl;
  return 0;
}
