#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool Cmp(int a, int b)
{
	return a < b;	
} 
int main()
{
  freopen("sortque.in", "r", stdin);
  freopen("sortque.out", "w", stdout);
  int a, b;
  cin >> a >> b;
  int c = a + b;
  int list[100000];
  for (int i = 0; i < c; i++)
  {
    cin >> list[i];
  }
  sort(list, list + c, Cmp);
  for (int i = 0; i < c - 1; i++)
  {
    cout << list[i] << ' ';
  }
  cout << list[c - 1] << endl;
  return 0;
}
