#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  string str;
  int ans = 0;

  getline(cin, str);

  for (int i = 0; i < str.size(); i++)
  {
    if ((int)str[i] >= 48 && (int)str[i] <= 57)ans++;
  }

  cout << ans << endl;

  return 0;
}
