#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b)
{
  if (a % b != 0)
  {
    return gcd(b, a % b);
  }
  return b;
}

int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	int d, e, f;
	d = abs(a - b);
	e = abs(a - c);
	f = abs(b - c);
	
	cout << gcd(gcd(d, e), f) << endl;
}
