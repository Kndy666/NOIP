#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int length;
	cin >> length;
	
	double t1 = 27 + 23 + length / 3;
	double t2 = length / 1.2;
	
	if (abs(t1 - t2) <= 0.0001)cout << "All" << endl;
	else if(t1 < t2)cout << "Bike" << endl;
	else cout << "Walk" << endl;
	 
}
