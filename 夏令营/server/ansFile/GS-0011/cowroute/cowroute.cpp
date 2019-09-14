#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main()
{
  freopen("cowroute3.in","r",stdin);
  freopen("cowroute3.out","w",stdout);
  int A, B, N, m[100005], cn[100005], t1 = -1, t2 = -1, t3 = INT_MAX;
  cin >> A >> B >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> m[i] >> cn[i];
    for (int j = 0; j < cn[i]; j++)
    {
      int c[505];
      cin >> c[j];
      if (c[j] == A)
      {
	t1 = j;
      }
      else if (c[j] == B)
      {
	t2 = j;
      }
    }
    if (t1 < t2 && m[i] < t3 && t1 != -1)
    {
      t3 = m[i];
    }
    t1 = -1;
    t2 = -1; 
  }
  if (t3 != INT_MAX)
  {
    cout << t3 << endl;
  }
  else
  {
    cout << -1 << endl;
  }
  return 0;
}
