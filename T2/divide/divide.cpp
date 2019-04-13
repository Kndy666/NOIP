#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

struct stu
{
  int num;
  int score;
}arr[5005];

bool cmp(stu a, stu b)
{
  if (a.score == b.score)
  {
    return a.num < b.num;  
  }
  else return a.score > b.score;
  
}

int main()
{
  freopen("divide.in", "r", stdin);
  freopen("divide.out", "w", stdout);

  int n , m, ans = 0;
  cin >> n >> m;

  int pos = 1.5 * m;
  
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].num >> arr[i].score;
  }

  sort(arr, arr + n, cmp);

  int scoreLine = arr[pos].score;

  for (int i = 0; i < n; i++)if (arr[i].score >= scoreLine)ans++;

  cout << scoreLine << ' ' << ans << endl;

  for (int i = 0; i < n; i++)
  {
    if (arr[i].score >= scoreLine)cout << arr[i].num << ' ' << arr[i].score << endl;
  }

  return 0;

}
