#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

struct person
{
  string name;
  int month;
  int day;
}arr[185];

bool cmp1(person a, person b)
{
  if (a.month < b.month)return true;
  else if (a.month > b.month)return false;
  else return a.day < b.day;

}

bool cmp2(person a, person b)
{
    if (a.name.size() < b.name.size())return true;
    else if (a.name.size() > b.name.size())return false;
    else return a.name < b.name;
  
}

int main()
{
  freopen("birthday.in", "r", stdin);
  freopen("birthday.out", "w", stdout);

  int n, count = 0;
  person ans[185];
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].name;
    cin >> arr[i].month;
    cin >> arr[i].day;
  }

  for(int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arr[i].month == arr[j].month && arr[i].day == arr[j].day && i != j)
      {
	ans[count] = arr[i];
	count++;
	break;
      }
    }
  }
  
  sort(ans, ans + count, cmp1);
  sort(ans, ans + count, cmp2);

  int month = ans[0].month;
  int day = ans[0].day;
  if (month == 0)cout << "None";
  else cout << month << ' ' << day << ' ';  

  for (int i = 0; i < count; i++)
  {
    if (month == ans[i].month && day == ans[i].day)
    {
      cout << ans[i].name << ' ';
    }
    else
    {
      cout << endl;
      month = ans[i].month;
      day = ans[i].day;
      cout << month << ' ' << day << ' ' << ans[i].name << ' ';  
    }
  }
  
  /*for (int i = 0; i < count; i++)
  {
    cout << ans[i].name << ' ';
    cout << ans[i].month << ' '; 
    cout << ans[i].day << ' ';
    cout << endl;
    }*/
  cout << endl;
  return 0;
}
