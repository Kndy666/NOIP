#include <iostream>

using namespace std;

int main()
{
	int n, hour = 0, minute = 0, second = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		hour += tmp;
		cin >> tmp;
		minute += tmp;
		cin >> tmp;
		second += tmp; 
	}
	
	minute += second / 60;
	second %= 60;
	
	hour += minute / 60;
	minute %= 60;
	
	cout << hour << "hour " << minute << "minute " << second << "second" << endl; 
	
}
