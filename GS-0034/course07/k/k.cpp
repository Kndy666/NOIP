#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

struct Student
{
  string id;
  double score;
};

bool Cmp(Student a, Student b)
{
  return a.score > b.score;
}

int main()
{
  freopen("k.in", "r", stdin);
  freopen("k.out", "w", stdout);

  int stuNum, numK;
  cin >> stuNum >> numK;

  Student sList[100];

  for (int i = 0; i < stuNum; i++)
  {
    cin >> sList[i].id;
    cin >> sList[i].score;
  }
  
  sort(sList, sList + stuNum, Cmp);

  cout << sList[numK - 1].id << ' ' << sList[numK - 1].score << endl;
  return 0;
}
