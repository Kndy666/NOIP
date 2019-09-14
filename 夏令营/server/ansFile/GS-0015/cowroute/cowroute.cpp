#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
  //freopen("cowroute.in","r",stdin);
  //freopen("cowroute.out","w",stdout);
  int A,B,N,money=100000,cost,city,tmp[505],tmp1,tmp2;
  bool a=false,b=false,c=false;
  cin >> A >> B >> N;
  for(int i=0;i<N;i++)
  {
    cin >> cost >> city;
    for(int j=0;j<city;j++)
    {
      cin >> tmp[j];
      if(tmp[j]==A)
      {
	a=true;
	tmp1=j;
      }
      else if(tmp[j]==B)
      {
	b=true;
	tmp2=j;
      }
    }
    if(a && b)
    {
      if(tmp1 < tmp2)
      {
	if(money > cost)
	{
	  c=true;
	  money = cost;
	}
      }
    }
  }
  if(c)
  {
    cout << money << endl;
  }
  else
  {
    cout << "-1" << endl;
  }
  return 0;
}
