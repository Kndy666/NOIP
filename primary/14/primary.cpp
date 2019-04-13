#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  string str;
  getline(cin, str);
  
  string ans(str.rbegin(), str.rend());
  cout << ans << endl;
  return 0;
}
