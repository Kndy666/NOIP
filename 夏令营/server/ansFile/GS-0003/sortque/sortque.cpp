#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

/*bool Cmp(int a, int b)
{
	return a < b;
}*/

int main()
{
  freopen("sortque.in","r",stdin);
  freopen("sortque.out","w",stdout);
  int n, m, tmp = 0, tj[2006], dj[1003];
  cin >> n >> m;
  for(int i = 0; i < n; i++)
    {
      cin >> tj[i];
    }
  for(int i = n; i < m + n; i++)
    {
      cin >> tj[i];
    }
  /*for(int i = n; i < m + n; i++)
    {
      for(int j = 0; j < m; j++)
	{
	  tj[i] = dj[j];
	  break;
	}
    }*/
  //	sort(tj, tj + 1, Cmp);
  for(int i = 0; i < m + n - 1; i++)
  {
  	for(int j = i + 1; j < m + n; j++)
  	{
  		if(tj[i] >= tj[j])
  		{
  			tmp = tj[i];
  			tj[i] = tj[j];
  			tj[j] = tmp;
  		}
	}
  }
  for(int i = 0; i < m + n; i++)
     {
      if(i < m + n - 1)
	{
	  cout << tj[i] << " ";
	}
      else
	 {
	  cout << tj[i] << endl;
	}
     }
  return 0;
}
