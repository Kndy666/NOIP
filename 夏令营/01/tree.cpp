#include <iostream>
#include <algorithm>

using namespace std;

struct person
{
	int begin;
	int end;
	int num;
}arr[10005];

bool cmp(person a, person b)
{
	return a.end < b.end;
}

int main()
{
	int n, h, sum = 0, except = 0;
	cin >> n >> h;
	
	for (int i = 0; i < h; i++)
	{
		cin >> arr[i].begin;
		cin >> arr[i].end;
		cin >> arr[i].num;	
	}
	
	for (int i = 0; i < h; i++)
	{
		sum += arr[i].num;
	}
	
	sort(arr, arr + h, cmp);
	
	for (int i = 0; i < h; i++)
	{
		for (int j = i + 1; j < h; j++)
		{
			if (arr[i].end > arr[j].begin)except += arr[i].end - arr[j].begin;
			if (arr[i].end == arr[j].begin)except++; 
		}
	}
	
	cout << sum - except << endl;
	return 0;
} 
