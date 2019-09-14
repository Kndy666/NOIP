#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
  freopen("sortque.in", "r", stdin);
  freopen("sortque.out", "w", stdout);
  int a, b;
  cin >> a >> b;
  int cc = a+b;
  int list[cc];
  for(int i = 0; i < cc; i++)
  {
    cin >> list[i];
  }
  sort(list, list+cc);
  for(int i = 0; i < cc-1; i++)
  {
    cout << list[i] << ' ';
  }
  cout << list[cc-1] << endl;
  return 0;
}
