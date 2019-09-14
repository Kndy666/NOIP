#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  double a, b, l, x, y;
  double ab, q, s;
  
  cin >> a >> b >> l;
  
  double min = l;

  ab = a / b;

  for(double i = 1; i <= l; i++)
  {
    for(double j = 1; j <= l; j++)
	{
      	q = i / j;
      	if(q >= ab)
	  	{           
			s = q - ab;         
			if(s < min)
			{       
	  			min = s;       
	  			x = i;
	  			y = j;
			}
      	}
    }
  }
  cout << x << ' ' << y << endl;

  return 0;
}

