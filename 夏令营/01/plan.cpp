#include <iostream>
#include <algorithm>

using namespace std;

struct stu
{
	int begin;
	int end;
}arr[1005];

bool cmp(stu a, stu b)
{
	return a.end < b.end;
}

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].begin;
		cin >> arr[i].end;
	}
	
	sort(arr, arr + n, cmp);
	
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i].begin << ' ' << arr[i].end << endl;	
	}*/
	
	int cc = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i].end <= arr[j].begin)cc++; 	
		}

	}
	
	cout << cc + 1 << endl;	
}
