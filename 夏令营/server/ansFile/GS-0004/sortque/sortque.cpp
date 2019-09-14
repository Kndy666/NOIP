#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool Cmp(int a,int b)
{
  return a<b;
}

int main()
{
  freopen("sortque.in","r",stdin);
  freopen("sortque.out","w",stdout);

  int a[2000],n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int j=n; j<m+n;j++)
  {
    cin>>a[j];
  }
  sort(a,a+n+m,Cmp);
  for(int i=0;i<n+m;i++)
  {
    cout<<a[i]<<' ';
  }
  cout<<endl;
  return 0;
}
