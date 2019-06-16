#include <iostream>

using namespace std;

int _k;
int _a[6] = {2, 3, 4, 5, 6, 7};

int BinarySearch(int left, int right)
{
	int mid = (left + right) / 2;
	if (left <= right)
	{
		if (_k == _a[mid])
		{		
			return mid;
		}
		else
		{
			if (_k < _a[mid])
			{		
				return BinarySearch(left, mid - 1);
			}
			else 
			{
				return BinarySearch(mid + 1, right);
			}
		}
	}
	else
	{
		return -1;
	}
	
}

int main ()
{
	cin >> _k;
	cout << BinarySearch(0, 5) << endl;
	return 0;
}
