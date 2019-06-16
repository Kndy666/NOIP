#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

  freopen("in.in", "r", stdin);

  string str, ans = "";
  bool flag = true;
  cin >> str;

  for (int i = 0; i < str.size(); i++)
  {
    if (flag && str[i] == '*')ans += '*';
    else
    {
      flag = false;
      if (str[i] != '*')ans += str[i];
    }
    
  }
  
  flag = true;

  for (int i = str.size() - 1; i > 0; i--)
  {
    if (flag && str[i] == '*')ans += '*';
    else flag = false;
  }

  cout << ans << endl;
  return 0;

}
