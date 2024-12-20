#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>

using namespace std;

bool Cmp(int a, int b)
{
  return a < b;
}

int main ()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int pNum;
  float avg = 0.0;

  cin >> pNum;
  int score[105] = {0};

  for (int i = 0; i < pNum; i++)
  {
    cin >> score[i];
  }

  sort(score, score + pNum, Cmp);

  for (int i = 1; i < pNum - 1; i++)
  {
    avg += score[i];
  }

  avg /= pNum - 2;

  cout << setprecision(2) << fixed << avg << endl;
  
  return 0;
}
