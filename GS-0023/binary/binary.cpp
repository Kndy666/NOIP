#include <iostream>

using namespace std;

int arrs[7] = {2, 3, 4, 5, 6, 7, 8};

int bin(int arr[], int left, int right, int num)
{
  int mid = (left + right) / 2;
  if (left <= right)
  {
    if (num == arr[mid])return mid;
    else if (num > arr[mid])return bin(arr, mid + 1, right, num);
    else if (num < arr[mid])return bin(arr, mid - 1, right, num);
  }
  return -1;
}
int main()
{

  cout << bin(arrs, 0, 6, 10) << endl;
  return 0;

}
