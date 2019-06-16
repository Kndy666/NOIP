#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	double pay = 0.0;
	int weight;
	cin >> weight;
	if (weight > 30)
	{
		cout << "Fail" << endl;
	}
	else 
	{
		if (weight <= 10)
		{
			pay = 0.2 + weight * 0.8;
		}
		else if (weight <= 20 && weight > 10)
		{
			pay = 0.2 + weight * 0.75;
		}
		else if (weight <= 30 && weight > 20)
		{
			pay = 0.2 + weight * 0.7;
		}
	
		printf("%.2f", pay);
	}	
	return 0;	
} 
