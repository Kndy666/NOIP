#include <iostream>
#include <cstdio>

using namespace std;

int main() 
{
	double weight, ans = 0;
	cin >> weight;
	
	if (weight <= 20)ans = weight * 1.68;
	else ans = weight * 1.98;
	
	printf("%.2f", ans);
}
