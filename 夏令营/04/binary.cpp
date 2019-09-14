#include <iostream>
#include <algorithm>

using namespace std;

int l[1000005];

int bin(int arr[], int left, int right, int num)
{
  int mid = (left + right) / 2;
  if (left <= right)
  {
    if (num == arr[mid])return mid;
    else if (num > arr[mid])return bin(arr, mid + 1, right, num);
    else if (num < arr[mid])return bin(arr, left, mid - 1, num);
  }
  return -1;
}

int main()
{
	int n, m;
	cin >> n >> m;
	 
	for (int i = 0; i < n; i++)cin >> l[i];

	sort(l, l + n);	
	for (int i = 0; i < m; i++)
	{
		int tmp;
		cin >> tmp;
		
		cout << bin (l, 0, n - 1, tmp) << endl;
	}
	return 0;

}
