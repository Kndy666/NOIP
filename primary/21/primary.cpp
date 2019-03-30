#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool isPm(int num)
{
  for (int i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  if (num == 1)
  {
    return false;
  }

  return true;
}

int main()
{

  freopen("out.out", "w", stdout);

  for (int i = 1; i <= 9; i++)
  {
    for (int j = 1; j <= i; j++)
    {

      bool bol = isPm(i * j);
      if (bol)
      {
	cout << i << '*' << j << "=(" << i * j << ") ";
      }
      else
      {
	cout << i << '*' << j << '=' << i * j << ' ';
      }
      
    }
    cout << endl;
  }
  return 0;
}
