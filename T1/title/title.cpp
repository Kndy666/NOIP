#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("title.in", "r", stdin);
  freopen("title.out", "w", stdout);

  string str;
  getline(cin, str);

  int ans = 0;

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] != ' ') ans++;
  }
 
  cout << ans << endl;
  return 0;
}
