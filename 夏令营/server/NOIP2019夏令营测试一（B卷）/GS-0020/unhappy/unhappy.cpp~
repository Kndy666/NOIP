#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

struct str
{
  int time1;
  int time2;
  int time3;
};
str slist[7];

bool Cmp(str a, str b)
{
  return a.time3 > b.time3;
}

int main()
{
  freopen("unhappy.in","r",stdio);
  freopen("unhappy.out","w",stdout);

  for(int i = 1; i <= 7; i++)
  {
    slist[i].time3 = slist[i].time1 + aliat[i].time2;
  }
  sort(slist, slist + 7, Cmp);
  cout << slist[0].time3 << endl;
  return 0;
}
