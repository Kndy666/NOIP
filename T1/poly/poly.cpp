#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
  freopen("poly.in", "r", stdin);
  freopen("poly.out", "w", stdout);

  int n, tmp;
  cin >> n;

  for (int i = n; i >= 0; i--)
  {
    cin >> tmp;
    if (tmp)
    {
      if (tmp > 0 && i != n) cout << "+";
      if (tmp < 0) cout << "-";
      if (i == 0) cout << abs(tmp);
      else
	{
	  if(tmp == 1 || tmp == -1)
	    {
	      if(tmp != 1) cout << "x^" << i;
	      else cout << "x";
	    }                   
	  else 
	    {
	      if(i != 1) cout << abs(tmp) << "x^" << i;
	      
	      else cout << abs(tmp) << "x";
	    }
	}
    }
  }
  return 0;
}
