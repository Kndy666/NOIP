#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("leap.in", "r", stdin);
  freopen("leap.out", "w", stdout);

  int year;
  cin >> year;

  if(year % 4 == 0 && year % 100 != 0)
  {
    cout << "is leap" << endl;
  }
  else if(year % 400 == 0)
  {
    cout << "is leap" << endl;
  }
  else
  {
    cout << "no leap" << endl;
  }
  return 0;
}
