#include <iostream>

using namespace std;

int main()
{
  int n, a[1005];

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for(int i = 0; i < n; i++)
  {
    int num = 1;
    for (int j = 0; j < i; j++)
    {
      if (a[i] == a[j])num++;
    }
    cout << num << ' ';
  }
  cout << endl;

  return 0;
}
