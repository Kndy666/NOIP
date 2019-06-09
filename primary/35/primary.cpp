#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  double num, ans;
  cin >> num;

  if (0 < num && num <= 10)
  {
    ans = 0.2 + 0.8 * num; 
    printf("%.2f", ans);
  }
  else if (10 < num && num <= 20)
  {
    ans = 0.7 + 0.75 * num;
    printf("&.2f", ans);
  }
  else if (20 < num && num <= 30)
  {
    ans = 1.7 + 0.7 * num; 
    printf("%.2f", ans);
  }
  else cout << "Fail" << endl;

  return 0;
}
