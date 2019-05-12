#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  //必须从文件读入,标准输入流不可用
  freopen("in.in", "r", stdin);

  int ans = 0, a;
  cin >> a;
  
  char sign;
  while (cin >> sign)
  {
    ans += a;
    cin >> a;
  }

  ans += a;
  cout << ans << endl;
  return 0;
}
