#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int bin(int arr[], int left, int right, int num)
{
  int mid = (left + right) / 2;
  if (left <= right)
  {
    if (num == arr[mid])return mid;
    else if (num > arr[mid])return bin(arr, mid + 1, right, num);
    else if (num < arr[mid])return bin(arr, mid - 1, right, num);
  }
  return 0;
}

int main()
{
  freopen("DL.in", "r", stdin);
  freopen("DL.out", "w", stdout);

  int n, pos[10005];
  cin >> n;
  
  for (int i = 0; i < n; i++)cin >> pos[i];

  sort(pos, pos + n);

  int q, tmp;
  cin >> q;

  for (int i = 0; i < q; i++)
  {
    cin >> tmp;
    cout << bin(pos, 0, n - 1, tmp) << endl;
  }

  return 0;
}
