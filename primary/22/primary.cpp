#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int length;
  cin >> length;
  
  double sum = 0.0, tmp;

  for (int i = 0; i < length; i++)
  {
    cin >> tmp;
    sum += tmp;
  }

  sum /= length;

  printf("%.2f", sum);
  cout << endl;
  return 0;
}
