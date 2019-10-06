#include <iostream>
#include <cmath>

using namespace std;

struct pos
{
	int right;
	int bottom;
	int left;
	int top; 
}; 

int main()
{
	pos a, b;
	cin >> a.left >> a.right >> a.top >> a.bottom;
	cin >> b.left >> b.right >> b.top >> b.bottom;
	
	if(a.right > b.left && b.top > a.bottom)
		cout << (b.top - a.bottom) * (a.right - b.left) << endl;
	else if (a.top > b.bottom && a.right > b.left)
		cout << (a.top - b.bottom) * (b.left - a.right) << endl;
	else if (b.top > a.bottom && a.left < b.right)
		cout << (b.top - a.bottom) * (b.right - a.left) << endl;
	else if (a.top > b.bottom && b.right > a.left)
		cout << (a.top - b.bottom) * (a.right - b.left) << endl;
	else
		cout << 0 << endl; 
}
