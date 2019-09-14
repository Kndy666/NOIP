#include <iostream>
#include <cstdio>

using namespace std;

int _x = 0, _y = 0;

int Gcd(int x, int y)
{
	if (x % y == 0)
	{
		return y;
	}
	return Gcd(y, x % y);			
} 

bool Cmp(int i, int j)
{
	if(_x == 0 && _y == 0)
		return true;
	return _x * j >= i * _y;
}

int main()
{
	freopen("ratio.in", "r", stdin);
	freopen("ratio.out", "w", stdout);
	
	int a, b, l;
	cin >> a >> b >> l;
  	for(int i = 1; i <= l; i++)
  	{	  
    	for(int j = 1;j <= l; j++)
    	{		
      		if(b * i >= j * a && Gcd(i, j) == 1 && Cmp(i, j))
      		{			  
			  	_x = i;
				_y = j;
			}
		}
	}
	cout << _x << ' ' << _y << endl; 
	return 0;
}
