#include <iostream>

using namespace std;

int main()
{
  int a[5] = {1, 2, 3, 4, 5};
  int tmp;

  for (int i = 0; i < 5; i++)
  {
    cout << a[i];
  }
  cout << endl;

  tmp = a[0];

  for (int i = 0; i < 4; i++)
  {
      a[i] = a[i + 1];
  }  

  a[4] = tmp;

  for (int i = 0; i < 5; i++)
  {
    cout << a[i];
  }
  cout << endl;
  return 0;
}
