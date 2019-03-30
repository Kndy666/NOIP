#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int a;
  cin >> a;
  
  int money = 0;
  
  int moneyIndex = 0;
  int moneyNum = 0;
  for (int i = 1; i <= a; i++)
  {
    if (moneyIndex)
    {
      money += moneyNum;
      moneyIndex--;
    }
    else
    {
      moneyNum++;
      moneyIndex = moneyNum - 1;
      money += moneyNum;
    }
  }
  cout << money << endl;
  return 0;
}
