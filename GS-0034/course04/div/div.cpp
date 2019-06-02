#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("div.in", "r", stdin);
  freopen("div.out", "w", stdout);

  int a;
  cin >> a;

  if(a % 15 == 0)
  {
    cout << "1" << endl; 
  }
  else
  {
    cout << "0" << endl;
  }

  return 0;
}
