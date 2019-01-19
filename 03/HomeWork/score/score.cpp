#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("score.in", "r", stdin);
  freopen("score.out", "w", stdout);

  int a, b, c;
  cin >> a >> b >> c;

  //将三数相加后向10取摸 直接判断是否为10的整数倍
  if((a + b + c) % 10 == 0 && a >= 0 && a <= 100 && b >= 0 && b <= 100 && c >= 0 && c <= 100)
  {
    double score = 0.2 * a + 0.3 * b + 0.5 * c;
    cout << score << endl;
  }
  else
  {
    cout << "wrong" << endl;
  }
  return 0;
}
