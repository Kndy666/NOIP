#include <iostream>

using namespace std;

int main()
{
	int year;
	cin >> year;
	
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		cout << "Is leap" << endl;
	}
	else 
	{
		cout << "Is not leap" << endl;
	}
	return 0;
} 
