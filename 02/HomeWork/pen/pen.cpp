#include <iostream>
#include <cstdio>
#define prize 19 //将笔的价格换算为角


using namespace std;

int main()
{
  freopen("pen.in", "r", stdin);
  freopen("pen.out", "w", stdout);

  int a, b;
  cin >> a >> b;
  
  int money = a * 10 + b; //将输入价格换算为角
  
  cout << money / prize << " " <<  money % prize << endl;
  return 0;
}
