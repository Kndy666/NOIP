#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool cmp(int a, int b)
{
  return a < b;
}

int main()
{

  int n, q, i = 0, j = 0, length, code, m;
  cin >> n >> q;

  int ns[1005];

  for (int i = 0; i < n; i++)
  {
    cin >> ns[i];
  }

  sort(ns, ns + n, cmp);

  for (i = 0; i < q; i++)
  {
    cin >> length;
    cin >> code;
    
    m = pow(10, length);
    for (j = 0; j < n; j++)
    {
      if (ns[j] % m == code)
      {
		cout << ns[j] << endl;
		break;
      }
    }
    
    if (j == n) cout << -1 << endl;
  }

  return 0;
  
}
