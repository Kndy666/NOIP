#include <iostream>

using namespace std;

int _a[5] = {5, 4, 3, 2, 1};

void quickSort(int left, int right)
{
	int i = left, j= right, mid = _a[(left + right) / 2];
	while (i <= j)
	{
		while (_a[i] < mid) i++;
		while (_a[j] > mid) j--;
		if(i <= j)
		{
			swap(_a[i++], _a[j--]);
		}
	}
	if (left < j) quickSort(left, j);
	if (i < right) quickSort(i, right);
}

int main()
{
	quickSort(0, 4);
	for (int i = 0; i < 5; i++)
	{
		cout << _a[i];
	}
	return 0;
}
