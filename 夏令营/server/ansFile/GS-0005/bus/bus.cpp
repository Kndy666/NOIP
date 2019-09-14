#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int speed;
int ans = 0;
int num;
int cc = 0;
int tmp;

struct times
{
  int time;
  int t;
}list[505];

bool book(int a, int b)
{
  for (int i = 0; i < b; i++)
    if (list[i].time == a)
    {
      list[i].t++;
      return 0;
    }
  return 1;
}

bool cmp(times a, times b)
{
  return a.time < b.time;
}

int main()
{
  freopen ("bus.in", "r", stdin);
  freopen ("bus.out", "w", stdout);

  cin >> num >> speed;
  for (int i = 0; i < num; i++)
  {
    cin >> tmp;
    if (book (tmp, cc))
    {
      list[cc].time = tmp;
      list[cc++].t++;
    }     
  }

  sort (list, list + cc, cmp);

  int w1, w2;
  for (int  i = 0; i < cc - 1; i++)
  {
    if (list[i + 1].time - list[i].time < speed)
    {
      w1 = (list[i + 1].time - list[i].time) * list[i].t;
      w2 = (list[i].time + speed - list[i + 1].time) * list[i + 1].t;
      if (w1 > w2)
      {
	ans += w2;
      }
      else
      {
	ans += w1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
