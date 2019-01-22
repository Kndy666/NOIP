#include <iostream>
#include <cstdio>

using namespace std;

bool leap(int year)
{
  if(year % 4 == 0 && year % 100 != 0)
  {
    return true;
  }
  else if(year % 400 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  freopen("leap.in", "r", stdin);
  freopen("leap.out", "w", stdout);

  int year;
  cin >> year;

  if (leap(year))
  {
    cout << "is leap" << endl;
  }
  else
  {
    cout << "no leap" << endl;
  }
 
  return 0;
}
