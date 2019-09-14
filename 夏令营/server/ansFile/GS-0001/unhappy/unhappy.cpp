#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Day
{
  int day;
  int school;
  int after;
  int all;
  int thing = 0;
}list[7];

bool Cmp(Day a, Day b)
{
	if (a.thing != b.thing)
		return a.thing > b.thing;
	else
		return a.day < b.day;
}
int main()
{
  freopen("unhappy.in", "r", stdin);
  freopen("unhappy.out","w",stdout);

  for (int i = 0; i < 7; i++)
  {
    cin >> list[i].school >> list[i].after;
    list[i].all = list[i].school + list[i].after;
    list[i].day = i + 1;
    if (list[i].all > 8)
		list[i].thing = list[i].all - 8; 
  }
  sort (list, list + 7, Cmp);
  cout << list[0].day << endl;
  return 0;
}

