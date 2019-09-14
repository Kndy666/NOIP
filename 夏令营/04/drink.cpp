#include <iostream>
#define pi 3.14

using namespace std;

int main()
{
	double n, h, r;
	cin >> n >> h >> r;
	
	double ans = n * pi * r * r * h;
	printf("%.5f", ans / 1000);
}
