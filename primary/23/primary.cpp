#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int length;
  cin >> length;

  long long sum = 0, tmp;
  for (int i = 0; i < length; i++)
  {
    cin >> tmp;
    sum += tmp;
  }
  cout << sum << endl;
  return 0;
}
